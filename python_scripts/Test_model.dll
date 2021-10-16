import sys
import torch
from PIL import Image
from torchvision import transforms
import visdom
from torch import optim , nn
import os
classes=('harmful','kitch','others','recyc')
if torch.cuda.is_available():
	device = torch.device('cuda')
	transform = transforms.Compose([
		transforms.Resize(256),
		transforms.CenterCrops(224),
		transforms.ToTensor(),
		transforms.Normalize(mean=[0.485,0.456,0.406],
				std=[0.229,0.224,0.225])
			])
else:
	device = torch.device('cpu')
	transform=transforms.Compose([
		transforms.Resize(256),
		transforms.CenterCrop(224),
		transforms.ToTensor(),
		transforms.Normalize(mean=[0.485,0.456,0.406],
				std=[0.229,0.224,0.225])
			])
def predict(img_path):
	if torch.cuda.is_available():
		net=torch.load('model.dll',map_location='cuda')
		net=net.to(device)
		torch.no_grad()
		img=Image.open(img_path)
		img=transform(img).unsqueeze(0)
		img_=img.to(device)
		outputs=net(img_)
		_,predicted=torch.max(outputs,1)
	else:
		net=torch.load('model.dll',map_location='cpu')
		net=net.to(device)
		torch.no_grad()
		img=Image.open(img_path)
		img=transform(img).unsqueeze(0)
		img_=img.to(device)
		outputs=net(img_)
		_,predicted=torch.max(outputs,1)
	print(classes[predicted[0]])
	path='connect.txt'
	if os.path.exists(path):
		os.remove(path)
	else:
		print('successfully create the file:connect.txt')
	if classes[predicted[0]]=='harmful':
		#print('1')
		create_file(1)
	if classes[predicted[0]]=='kitch':
		#print('2')
		create_file(2)
	if classes[predicted[0]]=='others':
		#print('3')
		create_file(3)
	if classes[predicted[0]]=='recyc':
		#print('4')
		create_file(4)
def create_file(a):
	if a==1:
		try:
			file=open('connect.txt','r+')
		except FileNotFoundError:
			file=open('connect.txt','a+')
	if a==2:
		try:
			file=open('connect.txt','r+')
		except FileNotFoundError:
			file=open('connect.txt','a+')
	if a==3:
		try:
			file=open('connect.txt','r+')
		except FileNotFoundError:
			file=open('connect.txt','a+')
	if a==4:
		try:
			file=open('connect.txt','r+')
		except FileNotFoundError:
			file=open('connect.txt','a+')
	write_file(a)
def write_file(a):
	if a==1:
		with open('connect.txt','a+',encoding='utf-8') as f:
			text='harmful'
			f.write(text)
	if a==2:
		with open('connect.txt','a+',encoding='utf-8') as f:
			text='kitch'
			f.write(text)
	if a==3:
		with open('connect.txt','a+',encoding='utf-8') as f:
			text='others'
			f.write(text)
	if a==4:
		with open('connect.txt','a+',encoding='utf-8') as f:
			text='recyc'
			f.write(text)

if __name__=='__main__':
	a=len(sys.argv)
	if a == 1:
		print('run in default mode: analyse .\\test\\1.jpg')
		predict('test\\1.jpg')
	if a == 2:
		print('run in user mode: analyse',sys.argv[1])
		predict(sys.argv[1])
