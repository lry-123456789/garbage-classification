import torch
import visdom
from torch import optim, nn
from utils import Flatten
from Data_Pre import Data
from torch.utils.data import DataLoader
from torchvision.models import resnet18
batchsz=32
lr = 1e-4
epochs =20
device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
torch.manual_seed(1234)
train_db=Data('train_data',224,mode='train')
val_db=Data('train_data',224,mode='val')
test_db=Data('train_data',224,mode='test')
train_loader=DataLoader(train_db,batch_size=batchsz,shuffle=True,num_workers=4)
val_loader=DataLoader(val_db,batch_size=batchsz,num_workers=4)
test_loader=DataLoader(test_db,batch_size=batchsz,num_workers=4)
viz=visdom.Visdom()
def evalute(model,loader):
	model.eval()
	correct=0
	total=len(loader.dataset)
	for x,y in loader:
		x,y =x.to(device),y.to(device)
		with torch.no_grad():
			logits=model(x)
			pred=logits.argmax(dim=1)
		correct+=torch.eq(pred,y).sum().float().item()
	return correct / total
def main():
	trained_model=resnet18(pretrained=True)
	model = nn.Sequential(*list(trained_model.children())[:-1],Flatten(),nn.Linear(512,6)).to(device)
	optimizer=optim.Adam(model.parameters(),lr=lr)
	criteon=nn.CrossEntropyLoss()
	best_acc,best_epoch=0,0
	global_step=0
	viz.line([[0.0,0.0]],[0.],win='test',opts=dict(title='Loss on Training Data and Accuracy on Training Data',xlabel='Epochs',ylabel='Loss and Accuracy',legend=['loss','val_acc']))
	for epoch in range(epochs):
		for step,(x,y) in enumerate(train_loader):
			x,y = x.to(device),y.to(device)
			model.train()
			logits=model(x)
			loss=criteon(logits,y)
			optimizer.zero_grad()
			loss.backward()
			optimizer.step()
			viz.line([[loss.item(),evalute(model,val_loader)]],[global_step],win='test',update='append')
			global_step+=1
		if epoch==0:
			print('the '+str(epoch+1)+' epoch'+' training......')
			val_acc=evaluate(model,val_loader)
			if val_acc>best_acc:
				best_epoch=epoch
				best_acc=val_acc
				torch.save(model.state_dict(),'best_trans.mdl')
	print('best accuracy:',best_acc,'best epoch:',(best_epoch+1))
	torch.save(model,'model.dll')
	print('loading model......')
	test_acc=evalute(model,test_loader)
	print('test accuracy:',test_acc)
	print('successfully save the best model ')
if __name__=='__main__':
	main()
