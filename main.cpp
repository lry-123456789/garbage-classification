#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
//#include<graphics.h>
#include<math.h>
#include<memory.h>
#include<memory>
#include<string.h>
#include<string>
#include<process.h>
#include<cstdio>
#include<cstdlib>
#include<graphics.h>
#include<time.h>
#include<Windows.h>
#include<mmsystem.h>
#include<wchar.h>
#include<locale>
#include<locale.h>
#include<iostream>
#include<thread>
#include<winbase.h>
#pragma once
#pragma comment(lib,"winmm.lib")
using namespace std;


//define global number to start or to stop the program_thread without any problem
int global_language = 0;							//global_language=0::Chinese global_languaage=1::English
int global_thread_stop_1 = 0;						//global_thread_stop_1=0::continue global_thread_stop_1=1::exit the thread mouse_message_init and exit break the while 1 global_stop_1=2::exit the program.
int global_thread_stop_2 = 0;						//global_thread_stop_2=0::continue global_thread_stop_2=1::goto next line. global_thread_stop=2::exit the program.
int global_judge_thread_mouse_message_init = 0;		//global_judge_thread_mouse_message_init=1::thread mouse_message_init is alive global_judge_thread_mouse_init=0::thread mouse_message_init is dead
int global_check_files_0 = 0;						//global_check_files_0=0::it has not begun to check files. global_check_files_0=-1::unknown eror this can cause this program exit.global_check_files_0=1,check model.dll finished global_check_files_0=2 check train.dll finished.global_check_files_0=3,check connect.dll finished.global_check_files_0=4 check Test_model.dll finished. global_check_files_0=5 check utils.py finished. global_check_files_0=6 check readme.txt finished. global_check_files_0=7 check Data_Pre.py finished.
int global_check_python_environment = 0;			//global_check_python_environment=-1::no python environment.global_check_python_environment=0::it has not begun to check python environment global_check_python_environment=1::check torch finished. global_check_python_environment=2::check matplotlib finished. global_check_python_environment=3 check visdom finished.global_check_python_environment=4::check torchvision finished.
int global_files[7] = { 0 };						//in order to store which file is not exist. if global_files[]=1::means this file is not exist. if global_files[]=0::means this file is exist. global_files[0]->model.dll global_files[1]->train.dll global_files[2]->connect.dll global_files[3]->Test_model.dll global_files[4]->utils.py global_files[5]->readme.txt global_files[6]->Data_Pre.py
int global_judge_thread_mouse_message_after_1 = 0;	//global_judge_thread_mouse_message_after_1=1::thread mouse_message_after_1 is alive global_judge_thread_mouse_after_1=0::thread mouse_message_after_1 is dead.
int global_position_x = 0;							//get the position of this program(x)
int global_position_y = 0;							//get the position of this program(y)
int global_change_thread = 1;						//0::use mouse+message_after_1;1::use mouse_message_from_windows_api
/********************************************\
* this program is powered by lry
* function	: this program can provide a GUI for the guest
* mouse		: this program can be use by mouse 
* thread	: this program can use in a mutli-threads system
* what's the function means:
*		1		:check_python_environment	:this function can check the python environment is completely or not
*		2		:self_classification		:this function can classify the photograph all by this program itself
*		3		:read_file					:this function can read the files from connect.dll and show on the sereen.
*		4		:create_operatble_file		:this function can create operatable files for this program to use
*		5		:show						:this function can show the classification by this program or by the users
*		6		:check_file					:this function can check files is or not fixed successfully.
*		7		:fix_file_1					:this function can fix the important file this program must use == model.dll
*		8		:fix_file_2					:this function can fix the important file this program must use == train.dll		>>in order to train the model.
*		9		:fix_file_3					:this function can fix the important file this program must use == connect.dll		>>in order to connect with other program.
*		10		:fix_file_4					:this function can fix the important file this program must use == Test_model.dll	>>in order to test the model and make sure it can guess which kind of garbage it is.
*		11		:fix_file_5					:this function can fix the important file this program must use == utils.py			>>in order to make the program have a better accuracy
*		12		:fix_file_6					:this function can fix the important file this program must use == readme.txt		>>in order to make sure that the users can have the right choice to use this program.
*		13		:fix_file_7					:this function can fix the important file this program must use == Data_Pre.py		>>in order to make this program have the prearation to analysis this photograph.
*		14		:create_update_data			:this function can show the updata log to the users.
*		15		:mouse_message_init			:this function is a new thread that can run with GUI interface.
*		16		:mouse_message_after		:this function is a new thread that can give message to this program .in the use of the running time.
*		17		:GUI_interface_1			:this function is a new thread that can give the users a good usage operation.
*		18		:GUI_interface_2			:this function is a new thread that can give the users a operatalbe interface.
*		19		:GUI_interface_3			:this function is a new thread that can give the users a operatable interface.
*		20		:language_setting			:set the language you use.			//can't use in this version.
*		21		:get_the_time_now			:get the time now.
*		22		:show_the_settings			:show the settings of program
* start create time :2021.3.12
* 2021.3.12 version 1.0.1 can only run in dos mode.using python script.
* 2021.7.27 version 2.0.1 this version can fix the wrong files auto.but without any GUI interface.
* 2021.8.6  version 3.0.1 this version have a GUIinterface,but still have some bugs.
\***********************************************/

//function begin.

void check_python_environment(void *);
void self_classification();
void read_file(int a);
void create_operatble_file(int a);
void show(int a);
void init();
void check_file(void*);
void fix_file_1();
void fix_file_2();
void fix_file_3();
void fix_file_4();
void fix_file_5();
void fix_file_6();
void fix_file_7();
void create_update_data();
void mouse_message_init(void*);
void mouse_message_after_1(void*);
void GUI_interface_1();
void GUI_interface_2();
void GUI_interface_3();
void language_setting();
void get_the_time_now(void*);
void show_the_settings(void*);
void clear(void*);
void fix_thread(void*);
void protect_thread(void*);
void mouse_test(void*);
void mouse_message_from_windows_api(void*);
void get_windows_position(void*);
void change_thread(void*);
void change_thread_operation();
void command_help_mode();
void command_train_mode();
void thread_start_server_command(void*);
void command_test_filename(char ch[]);
void command_test_default_mode();
void command_check_mode();
void command_release_mode();
void command_upgrade_mode();
//store place
wchar_t code_license_and_sourse_code[] = L"if you want to see more information(sourse code),please goto this website:\nhttps://blog.csdn.net/liourenyu/article/details/119490901\nopen sourse license\n==========================\nthis program is powered by lry.\nthis program is all provided by lry\n all rights reserved 2021\n=======================\nsourse code:train.dll\nimport torch\nimport visdom\nfrom torch import optim,nn\nfrom utils import Flatten\nfrom Data_Pre import Data\nfrom torch.utils.data import DataLoader\nfrom torchvision.models import resnet18\nbatchsz=32\nlr=1e-4\nepochs=20\ndevice=torch.device('cuda' if torch.cuda.is_available() else 'cpu'\ntorch.manual_seed(1234)\ntrain_db=Data('train_data',224,mode='train')\nval_db=Data('train_data',224,mode='val')\ntest_db=Data('train_data',224,mode='test')\ntrain_loader=DataLoader(train_db,batch_size=batchsz,shuffle=True,num_workers=4)\nval_loader=DataLoader(val_db,batch_size=batchsz,num_worker=4)\ntest_loader=DataLoader(test_db,batchsz,num_worker=4)\nviz=visdom.Visdom()\ndef evalute():\n\tmodel.eval()\n\tcorrect=0\n\ttotal=len(loader.dataset)\n\tfor x,y in loader:\n\t\tx,y=x.to(device),y.to(device)\n\t\twith torch.no_grad():\n\t\t\tlogits=model(x)\n\t\t\tpred=logits.argmax(dim=1)\n\t\tcorrect+=torch.eq(pred,y).sum().float().item()\n\treturn correct/total\ndef main():\n\ttrained_model=resnet18(pretrained=True)\n\tmodel=nn.Sequential(*list(trained_model.children())[:-1],Flatten(),nn.Linear(512,6).to(device)\n\toptimizer=optim.Adam(model.parameters(),lr=lr)\n\tctiteon=nn.CrossEntropyLoss()\n\tbest_acc,best_epoch=0,0\n\tglobal_step=0\n\tviz.line([[0.0,0.0]],[0.],win='test',opts=dict(title='Loss on Training Data and Accuracy on Training Data',xlabel='Epochs',ylabel='Loss and Accuracy',legend=['loss','val_acc']))\n\tfor epoch in range(epochs):\n\t\tfor step,(x,y) in enumerate(train_loader):\n\t\t\tx,y=x.to(device),y.to(device)\n\t\t\tmodel.train()\n\t\t\tlogits=model(x)\n\t\t\tloss=criteon(logits,y)\n\t\t\toptimizer.zero_grad()\n\t\t\tloss.backward()\n\t\t\toptimizer.step()\n\t\t\tviz.line([[loss.item(),evalute(model,val_loader)]],[global_step],win='test',update='append'\n\t\t\tglobal_step+=1\n\t\tif epoch==0:\n\t\t\tprint('the'+str(epoch+1)+'epoch'+'training......'\n\t\t\tval_acc=evaluate(model,val_loader)\n\t\t\t\tif val_acc>best_acc:\n\t\t\t\tbest_epoch=epoch\n\t\t\t\tbest_acc=val_acc\n\t\t\t\ttorch.save(model.state_dict(),'best_trans.mdl')\n\tprint('best accuracy:',best_acc,'best epoch:',(best_epoch+1))\n\ttorch.save(model,'model.dll')\n\tprint('loading model......')\n\ttest_acc=evalute(model,test_loader)\n\\tprint('test accuracy:',test_acc)\n\tprint('successfully save the best model')\nif __name__=='__main__':\n\tmain()\n=========================================\nif you want to see more information(sourse code),please goto this website:\nhttps://blog.csdn.net/liourenyu/article/details/119490901\n)";
//DWORD threadid_for_mouse_message_after_1;
//HANDLE hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)mouse_message_after_1, NULL, CREATE_SUSPENDED, &threadid_for_mouse_message_after_1);

//main_thread begin

int main(int agrc,char *agrv[])
{
	if (agrc == 1)
	{
		setlocale(LC_ALL, "");
		create_update_data();
		init();
		GUI_interface_1();
		cleardevice();
		GUI_interface_2();
		system("pause");
	}
	else if (agrc > 1)
	{
		printf("下面输出导入的参数\n");
		printf("参数个数：%d\n", agrc);
		for (int i = 0; i < agrc; i++)
		{
			printf("%s\n", agrv[i]);
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 'h')
			{
				if (agrv[1][2] == 'e')
				{
					if (agrv[1][3] == 'l')
					{
						if (agrv[1][4] == 'p')
						{
							if (agrv[1][5] == '\0')
							{
								if (agrc == 2)
								{
									printf("help mode started:\n");
									command_help_mode();
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 't')
			{
				if (agrv[1][2] == 'r')
				{
					if (agrv[1][3] == 'a')
					{
						if (agrv[1][4] == 'i')
						{
							if (agrv[1][5] == 'n')
							{
								if (agrv[1][6] == '\0')
								{
									if (agrc == 2)
									{
										printf("train mode started:\n");
										command_train_mode();
									}
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 't')
			{
				if (agrv[1][2] == 'e')
				{
					if (agrv[1][3] == 's')
					{
						if (agrv[1][4] == 't')
						{
							if (agrv[1][5] == '\0')
							{
								if (agrc == 2)
								{
									printf("test mode started:\n");
									printf("warning ! no filename! use default mode\n");
									printf("default mode: /test/1.jpg\n");
									//command_test_default_mode();
								}
								if (agrc == 3)
								{
									printf("test mode started:\n");
									printf("you are now using your mode:\n");
									printf("filename and place:%s", agrv[2]);
									//command_test_filename(agrv[2]);
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 'c')
			{
				if (agrv[1][2] == 'h')
				{
					if (agrv[1][3] == 'e')
					{
						if (agrv[1][4] == 'c')
						{
							if (agrv[1][5] == 'k')
							{
								if (agrv[1][6] == '\0')
								{
									if (agrc == 2)
									{
										printf("check mode started:\n");
										//command_check_mode();
									}
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 'r')
			{
				if (agrv[1][2] == 'e')
				{
					if (agrv[1][3] == 'l')
					{
						if (agrv[1][4] == 'e')
						{
							if (agrv[1][5] == 'a')
							{
								if (agrv[1][6] == 's')
								{
									if (agrv[1][7] == 'e')
									{
										if (agrv[1][8] == '\0')
										{
											if (agrc == 2)
											{
												printf("release mode started:\n");
												//command_release_mode();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 'u')
			{
				if (agrv[1][2] == 'p')
				{
					if (agrv[1][3] == 'g')
					{
						if (agrv[1][4] == 'r')
						{
							if (agrv[1][5] == 'a')
							{
								if (agrv[1][6] == 'd')
								{
									if (agrv[1][7] == 'e')
									{
										if (agrv[1][8] == '\0')
										{
											if (agrc == 2)
											{
												printf("upgrade mode started:\n");
												//command_upgrade_mode();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (agrv[1][0] == '-')
		{
			if (agrv[1][1] == 'v')
			{
				if (agrv[1][2] == 'e')
				{
					if (agrv[1][3] == 'r')
					{
						if (agrv[1][4] == 's')
						{
							if (agrv[1][5] == 'i')
							{
								if (agrv[1][6] == 'o')
								{
									if (agrv[1][7] == 'n')
									{
										if (agrv[1][8] == '\0')
										{
											if (agrc == 2)
											{
												printf("version 7.0.1");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (agrc < 1)
	{
		printf("本程序出现了严重异常，正在处理中，请稍后\n");
		printf("错误原因：系统参数出错\n");
		printf("读取参数个数：%d", agrc);
	}
}

void init()
{
	//wchar_t ch[] = L"垃圾分类程序";
	HWND hwnd = initgraph(640, 480);
	SetWindowTextA(hwnd, "垃圾分类程序");
	_beginthread(get_windows_position, 0, NULL);
	setbkcolor(WHITE);
	setlinecolor(GREEN);
	settextcolor(BROWN);
	setfillcolor(GREEN);
	cleardevice();
	_beginthread(get_the_time_now, 0, NULL);
	_beginthread(mouse_message_init, 0, NULL);
	wchar_t ch_0_0[] = L"语言：中文,单击此处已更改                                            ";
	wchar_t ch_1_0[] = L"启动主程序                                                       ";
	wchar_t ch_2_0[] = L"显示本程序设置以及版权信息                                                             ";
	wchar_t ch_3_0[] = L"退出本程序                             ";
	wchar_t ch_0_1[] = L"language : English,click here to change language";
	wchar_t ch_1_1[] = L"start running the main program";
	wchar_t ch_2_1[] = L"show the settings of this program and the copyright of the author";
	wchar_t ch_3_1[] = L"exit this program";
	FILE* ffp = fopen("log.log", "a+");
	while (1)
	{
		if (global_language == 0)
		{
			outtextxy(100, 100, ch_0_0);
			outtextxy(100, 200, ch_1_0);
			outtextxy(100, 300, ch_2_0);
			outtextxy(100, 400, ch_3_0);
		}
		if (global_language == 1)
		{
			outtextxy(100, 100, ch_0_1);
			outtextxy(100, 200, ch_1_1);
			outtextxy(100, 300, ch_2_1);
			outtextxy(100, 400, ch_3_1);
		}
		if (global_thread_stop_1==1)
		{
			break;
		}
		if (global_judge_thread_mouse_message_init == 0)
		{
			_beginthread(mouse_message_init, 0, NULL);
		}
		if (global_judge_thread_mouse_message_init == 1)
		{

		}
	}
}

void mouse_message_init(void*)
{
	global_judge_thread_mouse_message_init = 1;
	MOUSEMSG m;
	FlushMouseMsgBuffer();
	int a = 0;
	int temp = 0;
	while (1)
	{
		m = GetMouseMsg();
		while (m.mkLButton)
		{
			Sleep(100);		//防止该线程抖动
			if (m.x >= 100 && m.x <= 200 && m.y >= 70 && m.y <= 130)
			{
				if (global_language == 0)
				{
					temp = 1;
				}
				if (global_language == 1)
				{
					temp = 0;
				}
				cleardevice();
				global_language = temp;
				global_judge_thread_mouse_message_init = 0;
				_endthread();
			}
			if (m.x >= 100 && m.x <= 200 && m.y >= 270 && m.y <= 330)
			{
				_beginthread(show_the_settings, 0, NULL);
				global_judge_thread_mouse_message_init = 0;
				_endthread();
			}
			if (m.x >= 100 && m.x <= 200 && m.y >= 370 && m.y <= 430)
			{
				global_judge_thread_mouse_message_init = 0;
				exit(0);
			}
			if (m.x >= 100 && m.x <= 200 && m.y >= 170 && m.y <= 330)
			{
				global_thread_stop_1 = 1;
				_endthread();
			}
		}
	}
}

void show_the_settings(void*)
{
	wchar_t ch_0[] = L"本程序由刘仁宇编写\n本程序可以通过内置的模型，进行自动化的垃圾分类操作。\n本程序也可以通过手工分类进行分类操作\n如果出现了鼠标无法操作本程序的情况，请按下空格键后重试\n请保证您所使用的python>=3.8.5\n编译支持：Visual Studio 2019 Community\n版本信息：version 7.0.1\n编译时间：2021.9.1\n代码行数：2131\n程序接口以及文件调用：connect.dll Test_model.dll python.exe train.dll resnet.py model.dll Data_pre.py utils.py";
	wchar_t ch_1[] = L"this program is powered by lry\n this program can use the model init to classify the garbage auto.\nthis program can also classify by the user\nif this program cannot operated by mouse,please press Space,to restart therad(mouse_message)\nplease confirm that python on your computer is >=3.8.5\ncomplier powered by :Visual Studio 2019 Community\nversion :version 7.0.1\ncomplied time :2021.9.1\nthe line of code :2131\nthe files this program have to use :connect.dll Test_model.dll train.dlll resnet.py model.dll Data_pre.py utils.py";
	wchar_t ch_0_00[] = L"程序设置以及版权信息";
	wchar_t ch_1_00[] = L"the settings and the copyright of this program";
	if (global_language == 0)
	{
		MessageBox(NULL, ch_0, ch_0_00, MB_OK);
	}
	if (global_language == 1)
	{
		MessageBox(NULL, ch_1, ch_1_00, MB_OK);
	}
}

void GUI_interface_1()
{
	cleardevice();
	wchar_t ch_init_0[] = L"请稍后                                                                 ";
	wchar_t ch_init_1[] = L"please wait a while                                                    ";
	wchar_t ch_0_0[] = L"检查本程序所必须的文件，请稍后                                            ";
	wchar_t ch_0_1[] = L"checking the files this program must have,please wait                     ";
	wchar_t ch_1_0[] = L"正在检查python环境，请稍后...                                             ";
	wchar_t ch_1_1[] = L"checking python environment now ,please wait a while                      ";
	wchar_t ch_2_0[] = L"正在检查python 环境配置：torch                                            ";
	wchar_t ch_2_1[] = L"checking pyhton environment settings :torch                               ";
	wchar_t ch_3_0[] = L"正在检查python 环境配置：matplotlib                                       ";
	wchar_t ch_3_1[] = L"checking python environment settings : matplotlib                         ";
	wchar_t ch_4_0[] = L"正在检查python 环境配置：visdom                                           ";
	wchar_t ch_4_1[] = L"checking python environment settings :visdom                              ";
	wchar_t ch_5_0[] = L"正在检查python 环境配置：torchvision                                      ";
	wchar_t ch_5_1[] = L"checking python environment settings :torchvision                         ";
	wchar_t ch_6_0[] = L"正在检查本程序所必需的文件，请稍后                                        ";
	wchar_t ch_6_1[] = L"checking the files this program must have to start this program ,please wait a while";
	wchar_t ch_7_0[] = L"正在检查本程序所必需的文件：model.dll                                                              ";
	wchar_t ch_7_1[] = L"checking the essential files this program must have used : model.dll                               ";
	wchar_t ch_8_0[] = L"正在检查本程序所必需的文件：train.dll                                                              ";
	wchar_t ch_8_1[] = L"checking the essential files this program must have used : train.dll                               ";
	wchar_t ch_9_0[] = L"正在检查本程序所必需的文件：connect.dll                                                            ";
	wchar_t ch_9_1[] = L"checking the essential files this program must have used :connect.dll                              ";
	wchar_t ch_10_0[] = L"正在检查本程序所必需的文件：Test_model.dll                                                        ";
	wchar_t ch_10_1[] = L"checking the essential files this program must have used : Test_model.dll                         ";
	wchar_t ch_11_0[] = L"正在检查本程序所必需的文件：utils.py                                                              ";
	wchar_t ch_11_1[] = L"checking the essential files this program must have used : utils.py                               ";
	wchar_t ch_12_0[] = L"正在检查本程序所必需的文件：readme.txt                                                            ";
	wchar_t ch_12_1[] = L"checking the essential files this program must have used : readme.txt                             ";
	wchar_t ch_13_0[] = L"正在检查本程序所必需的文件：Data_Pre.py                                                           ";
	wchar_t ch_13_1[] = L"checking the essential files this program must have used : Data_Pre.py                            ";
	wchar_t ch_finish_cn_0[] = L"检查本程序必须的文件已经完成，请等待后续操作";
	wchar_t ch_finish_en_0[] = L"checking the essential files this program must have is finished .please wait for other operation finish";
	wchar_t ch_finish_cn_1[] = L"python环境检查已经完成，即将进入下一个界面";
	wchar_t ch_finish_en_1[] = L"we have successfully checked the environment of python.we will goto next interface ,please wait";
	if (global_language == 0)
	{
		outtextxy(200, 200, ch_init_0);
		outtextxy(200, 250, ch_0_0);
	}
	if (global_language == 1)
	{
		outtextxy(200, 200, ch_init_1);
		outtextxy(200, 250, ch_0_1);
	}
	Sleep(1000);
	cleardevice();
	_beginthread(check_file, 0, NULL);
	_beginthread(check_python_environment, 0, NULL);
	while (1)
	{
		line(40, 100, 440, 100);
		line(40, 100, 40, 150);
		line(40, 150, 440, 150);
		line(440, 100, 440, 150);
		line(40, 200, 440, 200);
		line(40, 200, 40, 250);
		line(40, 250, 440, 250);
		line(440, 250, 440, 200);
		if (global_language == 0)
		{
			if (global_check_files_0 == 0)
			{
				outtextxy(40, 70, ch_6_0);
				fillrectangle(40, 100, 90, 150);
			}
			if (global_check_files_0 == 1)
			{
				outtextxy(40, 70, ch_7_0);
				fillrectangle(40, 100, 140, 150);
			}
			if (global_check_files_0 == 2)
			{
				outtextxy(40, 70, ch_8_0);
				fillrectangle(40, 100, 190, 150);
			}
			if (global_check_files_0 == 3)
			{
				outtextxy(40, 70, ch_9_0);
				fillrectangle(40, 100, 240, 150);
			}
			if (global_check_files_0 == 4)
			{
				outtextxy(40, 70, ch_10_0);
				fillrectangle(40, 100, 290, 150);
			}
			if (global_check_files_0 == 5)
			{
				outtextxy(40, 70, ch_11_0);
				fillrectangle(40, 100, 340, 150);
			}
			if (global_check_files_0 == 6)
			{
				outtextxy(40, 70, ch_12_0);
				fillrectangle(40, 100, 390, 150);
			}
			if (global_check_files_0 == 7)
			{
				outtextxy(40, 70, ch_13_0);
				fillrectangle(40, 100, 440, 150);
				global_check_files_0++;
				outtextxy(40, 70, ch_finish_cn_0);
			}
			//checking python files.
			if (global_check_python_environment == 0)
			{
				outtextxy(40, 170, ch_1_0);
				fillrectangle(40, 200, 120, 250);
			}
			if (global_check_python_environment == 1)
			{
				outtextxy(40, 170, ch_2_0);
				fillrectangle(40, 200, 200, 250);
			}
			if (global_check_python_environment == 2)
			{
				outtextxy(40, 170, ch_3_0);
				fillrectangle(40, 200, 280, 250);
			}
			if (global_check_python_environment == 3)
			{
				outtextxy(40, 170, ch_4_0);
				fillrectangle(40, 200, 360, 250);
			}
			if (global_check_python_environment == 4)
			{
				outtextxy(40, 170, ch_5_0);
				fillrectangle(40, 200, 440, 250);
				global_check_python_environment++;
				outtextxy(40, 170, ch_finish_cn_1);
			}
			if (global_check_python_environment == -1)
			{
				wchar_t ch[] = L"请正确安装python，本程序无法识别python\n错误代码0x01";
				wchar_t ch1[] = L"错误信息";
				MessageBox(NULL, ch, ch1, MB_OK);
				exit(0);
			}
		}
		if (global_language == 1)
		{
			if (global_check_files_0 == 0)
			{
				outtextxy(40, 70, ch_6_1);
				fillrectangle(40, 100, 90, 150);
			}
			if (global_check_files_0 == 1)
			{
				outtextxy(40, 70, ch_7_1);
				fillrectangle(40, 100, 140, 150);
			}
			if (global_check_files_0 == 2)
			{
				outtextxy(40, 70, ch_8_1);
				fillrectangle(40, 100, 190, 150);
			}
			if (global_check_files_0 == 3)
			{
				outtextxy(40, 70, ch_9_1);
				fillrectangle(40, 100, 240, 150);
			}
			if (global_check_files_0 == 4)
			{
				outtextxy(40, 70, ch_10_1);
				fillrectangle(40, 100, 290, 150);
			}
			if (global_check_files_0 == 5)
			{
				outtextxy(40, 70, ch_11_1);
				fillrectangle(40, 100, 340, 150);
			}
			if (global_check_files_0 == 6)
			{
				outtextxy(40, 70, ch_12_1);
				fillrectangle(40, 100, 390, 150);
			}
			if (global_check_files_0 == 7)
			{
				outtextxy(40, 70, ch_13_1);
				fillrectangle(40, 100, 440, 150);
				global_check_files_0++;
				outtextxy(40, 70, ch_finish_en_0);
			}
			//checking python files.
			if (global_check_python_environment == 0)
			{
				outtextxy(40, 170, ch_1_1);
				fillrectangle(40, 200, 120, 250);
			}
			if (global_check_python_environment == 1)
			{
				outtextxy(40, 170, ch_2_1);
				fillrectangle(40, 200, 200, 250);
			}
			if (global_check_python_environment == 2)
			{
				outtextxy(40, 170, ch_3_1);
				fillrectangle(40, 200, 280, 250);
			}
			if (global_check_python_environment == 3)
			{
				outtextxy(40, 170, ch_4_1);
				fillrectangle(40, 200, 360, 250);
			}
			if (global_check_python_environment == 4)
			{
				outtextxy(40, 170, ch_5_1);
				fillrectangle(40, 200, 440, 250);
				global_check_python_environment++;
				outtextxy(40, 170, ch_finish_en_1);
			}
			if (global_check_python_environment == -1)
			{
				wchar_t ch[] = L"请正确安装python，本程序无法识别python\n错误代码0x01";
				wchar_t ch1[] = L"错误信息";
				MessageBox(NULL, ch, ch1, MB_OK);
				exit(0);
			}
		}
		if (global_check_files_0 == 8 && global_check_python_environment == 5)
		{
			Sleep(2000);
			break;
		}
	}
}

void check_file(void*)
{
	FILE* f1 = fopen("model.dll", "rb");
	FILE* f2 = fopen("train.dll", "rb");
	FILE* f3 = fopen("connect.dll", "rb");
	FILE* f4 = fopen("Test_model.dll", "rb");
	FILE* f5 = fopen("utils.py", "rb");
	FILE* f6 = fopen("readme.txt", "rb");
	FILE* f7 = fopen("Data_Pre.py", "rb");
	global_check_files_0 = 0;
	if (f1 == NULL)
	{
		fix_file_1();
	}
	if (f1 != NULL)
	{
		fclose(f1);
	}
	global_check_files_0 = 1;
	if (f2 == NULL)
	{
		fix_file_2();
	}
	if (f2 != NULL)
	{
		fclose(f2);
	}
	global_check_files_0 = 2;
	if (f3 == NULL)
	{
		fix_file_3();
	}
	if (f3 != NULL)
	{
		fclose(f3);
	}
	global_check_files_0 = 3;
	if (f4 == NULL)
	{
		fix_file_4();
	}
	if (f4 != NULL)
	{
		fclose(f4);
	}
	global_check_files_0 = 4;
	if (f5 == NULL)
	{
		fix_file_5();
	}
	if (f5 != NULL)
	{
		fclose(f5);
	}
	global_check_files_0 = 5;
	if (f6 == NULL)
	{
		fix_file_6();
	}
	if (f6 != NULL)
	{
		fclose(f6);
	}
	global_check_files_0 = 6;
	if (f7 == NULL)
	{
		fix_file_7();
	}
	if (f7 != NULL)
	{
		fclose(f7);
	}
	global_check_files_0 = 7;
	_endthread();
}

void check_python_environment(void*)
{
	FILE * ffff1=freopen("error.log", "w", stderr);
	system("pip");
	FILE* f1 = fopen("error.log", "rb");
	if (f1 != NULL)
	{
		char ch[100] = { '\0' };
		fgets(ch, 10, f1);
		if (ch[0] == 39)
		{
			global_check_python_environment = -1;
		}
		fclose(f1);
	}
	system("pip install torch");
	global_check_python_environment = 1;
	system("pip install matplotlib");
	global_check_python_environment = 2;
	system("pip install visdom");
	global_check_python_environment = 3;
	system("pip install torchvision");
	global_check_python_environment = 4;
	_endthread();
}

void fix_file_1()
{
	FILE* fp = fopen("error.txt", "a+");
	fprintf(fp, "can not create the file : model.dll\n");
	fprintf(fp, "fix file failed,please go into the choice and choose the choice 3 to remake the file.\n");
	wchar_t ch_cn_0[] = L"修复模型model.dll失败，请进入主界面后按照提示训练模型";
	wchar_t ch_cn_1[] = L"警告";
	wchar_t ch_en_0[] = L"fix model::model.dll failed ,please goto the main process train a new model with the tips";
	wchar_t ch_en_1[] = L"warning";
	if (global_language == 0)
	{
		MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
	}
	if (global_language == 1)
	{
		MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
	}
	fclose(fp);
}

void fix_file_2()
{
	//fix train.dll
	FILE* f1 = fopen("train.dll", "a+");
	fprintf(f1, "import torch\n");
	fprintf(f1, "import visdom\n");
	fprintf(f1, "from torch import optim, nn\n");
	fprintf(f1, "from utils import Flatten\n");
	fprintf(f1, "from Data_Pre import Data\n");
	fprintf(f1, "from torch.utils.data import DataLoader\n");
	fprintf(f1, "from torchvision.models import resnet18\n");
	fprintf(f1, "batchsz=32\n");
	fprintf(f1, "lr = 1e-4\n");
	fprintf(f1, "epochs =20\n");
	fprintf(f1, "device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')\n");
	fprintf(f1, "torch.manual_seed(1234)\n");
	fprintf(f1, "train_db=Data('train_data',224,mode='train')\n");
	fprintf(f1, "val_db=Data('train_data',224,mode='val')\n");
	fprintf(f1, "test_db=Data('train_data',224,mode='test')\n");
	fprintf(f1, "train_loader=DataLoader(train_db,batch_size=batchsz,shuffle=True,num_workers=4)\n");
	fprintf(f1, "val_loader=DataLoader(val_db,batch_size=batchsz,num_workers=4)\n");
	fprintf(f1, "test_loader=DataLoader(test_db,batch_size=batchsz,num_workers=4)\n");
	fprintf(f1, "viz=visdom.Visdom()\n");
	fprintf(f1, "def evalute(model,loader):\n");
	fprintf(f1, "\tmodel.eval()\n");
	fprintf(f1, "\tcorrect=0\n");
	fprintf(f1, "\ttotal=len(loader.dataset)\n");
	fprintf(f1, "\tfor x,y in loader:\n");
	fprintf(f1, "\t\tx,y =x.to(device),y.to(device)\n");
	fprintf(f1, "\t\twith torch.no_grad():\n");
	fprintf(f1, "\t\t\tlogits=model(x)\n");
	fprintf(f1, "\t\t\tpred=logits.argmax(dim=1)\n");
	fprintf(f1, "\t\tcorrect+=torch.eq(pred,y).sum().float().item()\n");
	fprintf(f1, "\treturn correct / total\n");
	fprintf(f1, "def main():\n");
	fprintf(f1, "\ttrained_model=resnet18(pretrained=True)\n");
	fprintf(f1, "\tmodel = nn.Sequential(*list(trained_model.children())[:-1],Flatten(),nn.Linear(512,6)).to(device)\n");
	fprintf(f1, "\toptimizer=optim.Adam(model.parameters(),lr=lr)\n");
	fprintf(f1, "\tcriteon=nn.CrossEntropyLoss()\n");
	fprintf(f1, "\tbest_acc,best_epoch=0,0\n");
	fprintf(f1, "\tglobal_step=0\n");
	fprintf(f1, "\tviz.line([[0.0,0.0]],[0.],win='test',opts=dict(title='Loss on Training Data and Accuracy on Training Data',xlabel='Epochs',ylabel='Loss and Accuracy',legend=['loss','val_acc']))\n");
	fprintf(f1, "\tfor epoch in range(epochs):\n");
	fprintf(f1, "\t\tfor step,(x,y) in enumerate(train_loader):\n");
	fprintf(f1, "\t\t\tx,y = x.to(device),y.to(device)\n");
	fprintf(f1, "\t\t\tmodel.train()\n");
	fprintf(f1, "\t\t\tlogits=model(x)\n");
	fprintf(f1, "\t\t\tloss=criteon(logits,y)\n");
	fprintf(f1, "\t\t\toptimizer.zero_grad()\n");
	fprintf(f1, "\t\t\tloss.backward()\n");
	fprintf(f1, "\t\t\toptimizer.step()\n");
	fprintf(f1, "\t\t\tviz.line([[loss.item(),evalute(model,val_loader)]],[global_step],win='test',update='append')\n");
	fprintf(f1, "\t\t\tglobal_step+=1\n");
	fprintf(f1, "\t\tif epoch%1==0:\n");
	fprintf(f1, "\t\t\tprint('the '+str(epoch+1)+' epoch'+' training......')\n");						//fprintf(f1, "\t\t\tprint('第 '+str(epoch+1)+' 批'+' training……')\n");
	fprintf(f1, "\t\t\tval_acc=evaluate(model,val_loader)\n");
	fprintf(f1, "\t\t\tif val_acc>best_acc:\n");
	fprintf(f1, "\t\t\t\tbest_epoch=epoch\n");
	fprintf(f1, "\t\t\t\tbest_acc=val_acc\n");
	fprintf(f1, "\t\t\t\ttorch.save(model.state_dict(),'best_trans.mdl')\n");
	fprintf(f1, "\tprint('best accuracy:',best_acc,'best epoch:',(best_epoch+1))\n");					//fprintf(f1, "\tprint('最好的准确率：',best_acc,'最好的批次：',(best_epoch+1))\n");
	fprintf(f1, "\ttorch.save(model,'model.dll')\n");
	fprintf(f1, "\tprint('loading model......')\n");													//fprintf(f1, "\tprint('正在加载模型......')\n");
	fprintf(f1, "\ttest_acc=evalute(model,test_loader)\n");
	fprintf(f1, "\tprint('test accuracy:',test_acc)\n");												//fprintf(f1, "\tprint('测试准确率:',test_acc)\n");
	fprintf(f1, "\tprint('successfully save the best model ')\n");										//fprintf(f1, "\tprint('保存最好效果模型成功！')\n");
	fprintf(f1, "if __name__=='__main__':\n");
	fprintf(f1, "\tmain()\n");
	fclose(f1);
	printf("\ntrain.dll has been fixed successfully.\n");
}

void fix_file_3()
{
	FILE* fp = fopen("connect.dll", "a+");
	fprintf(fp, "");
	printf("\nconnect.dll has been fixed successfully.\n");
	fclose(fp);
}

void fix_file_4()
{
	FILE* f1 = fopen("Test_model.dll", "a+");
	fprintf(f1, "import sys\n");
	fprintf(f1, "import torch\n");
	fprintf(f1, "from PIL import Image\n");
	fprintf(f1, "from torchvision import transforms\n");
	fprintf(f1, "import visdom\n");
	fprintf(f1, "from torch import optim , nn\n");
	fprintf(f1, "import os\n");
	fprintf(f1, "classes=('harmful','kitch','others','recyc')\n");
	fprintf(f1, "if torch.cuda.is_available():\n");
	fprintf(f1, "\tdevice = torch.device('cuda')\n");
	fprintf(f1, "\ttransform = transforms.Compose([\n");
	fprintf(f1, "\t\ttransforms.Resize(256),\n");
	fprintf(f1, "\t\ttransforms.CenterCrops(224),\n");
	fprintf(f1, "\t\ttransforms.ToTensor(),\n");
	fprintf(f1, "\t\ttransforms.Normalize(mean=[0.485,0.456,0.406],\n");
	fprintf(f1, "\t\t\t\tstd=[0.229,0.224,0.225])\n");
	fprintf(f1, "\t\t\t])\n");
	fprintf(f1, "else:\n");
	fprintf(f1, "\tdevice = torch.device('cpu')\n");
	fprintf(f1, "\ttransform=transforms.Compose([\n");
	fprintf(f1, "\t\ttransforms.Resize(256),\n");
	fprintf(f1, "\t\ttransforms.CenterCrop(224),\n");
	fprintf(f1, "\t\ttransforms.ToTensor(),\n");
	fprintf(f1, "\t\ttransforms.Normalize(mean=[0.485,0.456,0.406],\n");
	fprintf(f1, "\t\t\t\tstd=[0.229,0.224,0.225])\n");
	fprintf(f1, "\t\t\t])\n");
	fprintf(f1, "def predict(img_path):\n");
	fprintf(f1, "\tif torch.cuda.is_available():\n");
	fprintf(f1, "\t\tnet=torch.load('model.dll',map_location='cuda')\n");
	fprintf(f1, "\t\tnet=net.to(device)\n");
	fprintf(f1, "\t\ttorch.no_grad()\n");
	fprintf(f1, "\t\timg=Image.open(img_path)\n");
	fprintf(f1, "\t\timg=transform(img).unsqueeze(0)\n");
	fprintf(f1, "\t\timg_=img.to(device)\n");
	fprintf(f1, "\t\toutputs=net(img_)\n");
	fprintf(f1, "\t\t_,predicted=torch.max(outputs,1)\n");
	fprintf(f1, "\telse:\n");
	fprintf(f1, "\t\tnet=torch.load('model.dll',map_location='cpu')\n");
	fprintf(f1, "\t\tnet=net.to(device)\n");
	fprintf(f1, "\t\ttorch.no_grad()\n");
	fprintf(f1, "\t\timg=Image.open(img_path)\n");
	fprintf(f1, "\t\timg=transform(img).unsqueeze(0)\n");
	fprintf(f1, "\t\timg_=img.to(device)\n");
	fprintf(f1, "\t\toutputs=net(img_)\n");
	fprintf(f1, "\t\t_,predicted=torch.max(outputs,1)\n");
	fprintf(f1, "\tprint(classes[predicted[0]])\n");
	fprintf(f1, "\tpath='connect.dll'\n");
	fprintf(f1, "\tif os.path.exists(path):\n");
	fprintf(f1, "\t\tos.remove(path)\n");
	fprintf(f1, "\telse:\n");
	fprintf(f1, "\t\tprint('successfully create the file:connect.dll')\n");
	fprintf(f1, "\tif classes[predicted[0]]=='harmful':\n");
	fprintf(f1, "\t\t#print('1')\n");
	fprintf(f1, "\t\tcreate_file(1)\n");
	fprintf(f1, "\tif classes[predicted[0]]=='kitch':\n");
	fprintf(f1, "\t\t#print('2')\n");
	fprintf(f1, "\t\tcreate_file(2)\n");
	fprintf(f1, "\tif classes[predicted[0]]=='others':\n");
	fprintf(f1, "\t\t#print('3')\n");
	fprintf(f1, "\t\tcreate_file(3)\n");
	fprintf(f1, "\tif classes[predicted[0]]=='recyc':\n");
	fprintf(f1, "\t\t#print('4')\n");
	fprintf(f1, "\t\tcreate_file(4)\n");
	fprintf(f1, "def create_file(a):\n");
	fprintf(f1, "\tif a==1:\n");
	fprintf(f1, "\t\ttry:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','r+')\n");
	fprintf(f1, "\t\texcept FileNotFoundError:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','a+')\n");
	fprintf(f1, "\tif a==2:\n");
	fprintf(f1, "\t\ttry:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','r+')\n");
	fprintf(f1, "\t\texcept FileNotFoundError:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','a+')\n");
	fprintf(f1, "\tif a==3:\n");
	fprintf(f1, "\t\ttry:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','r+')\n");
	fprintf(f1, "\t\texcept FileNotFoundError:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','a+')\n");
	fprintf(f1, "\tif a==4:\n");
	fprintf(f1, "\t\ttry:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','r+')\n");
	fprintf(f1, "\t\texcept FileNotFoundError:\n");
	fprintf(f1, "\t\t\tfile=open('connect.dll','a+')\n");
	fprintf(f1, "\twrite_file(a)\n");
	fprintf(f1, "def write_file(a):\n");
	fprintf(f1, "\tif a==1:\n");
	fprintf(f1, "\t\twith open('connect.dll','a+',encoding='utf-8') as f:\n");
	fprintf(f1, "\t\t\ttext='harmful'\n");
	fprintf(f1, "\t\t\tf.write(text)\n");
	fprintf(f1, "\tif a==2:\n");
	fprintf(f1, "\t\twith open('connect.dll','a+',encoding='utf-8') as f:\n");
	fprintf(f1, "\t\t\ttext='kitch'\n");
	fprintf(f1, "\t\t\tf.write(text)\n");
	fprintf(f1, "\tif a==3:\n");
	fprintf(f1, "\t\twith open('connect.dll','a+',encoding='utf-8') as f:\n");
	fprintf(f1, "\t\t\ttext='others'\n");
	fprintf(f1, "\t\t\tf.write(text)\n");
	fprintf(f1, "\tif a==1:\n");
	fprintf(f1, "\t\twith open('connect.dll','a+',encoding='utf-8') as f:\n");
	fprintf(f1, "\t\t\ttext='recyc'\n");
	fprintf(f1, "\t\t\tf.write(text)\n");
	fprintf(f1, "\nif __name__=='__main__':\n");
	fprintf(f1, "\tpredict('./test/1.jpg')\n");
	printf("\nTest_model.dll has been fixed successfully.\n");
	fclose(f1);
}

void fix_file_5()
{
	//fix utils.py
	FILE* f1 = fopen("utils.py", "a+");
	fprintf(f1, "import torch\n");
	fprintf(f1, "from torch import nn\n");
	fprintf(f1, "from matplotlib import pyplot as plt\n");
	fprintf(f1, "class Flatten(nn.Module):\n");
	fprintf(f1, "\tdef __init__(self):\n");
	fprintf(f1, "\t\tsuper(Flatten,self).__init__()\n");
	fprintf(f1, "\tdef forward(self,x):\n");
	fprintf(f1, "\t\tshape=torch.prod(torch.tensor(x.shape[1:])).item()\n");
	fprintf(f1, "\t\treturn x.view(-1,shape)\n");
	fprintf(f1, "def plot_image(img,label,name):\n");
	fprintf(f1, "\tfig=plt.figure()\n");
	fprintf(f1, "\tfor i in range(6):\n");
	fprintf(f1, "\t\tplt.subplot(2,3,i+1)\n");
	fprintf(f1, "\t\tplt.tight_layout()\n");
	fprintf(f1, "\t\tplt.imshow(img[i][0]*0.3081+0.1307,cmap='gray',interpolation='none')\n");
	fprintf(f1, "\t\tplt.title('{}:{}'.format(name,label[i].item()))\n");
	fprintf(f1, "\t\tplt.xticks([])\n");
	fprintf(f1, "\t\tplt.yticks([])\n");
	fprintf(f1, "\tplt.show()\n");
	printf("\nutils.py has been fixed successfully.\n");
	fclose(f1);
}

void fix_file_6()
{
	FILE* fp = fopen("readme.txt", "a+");
	fprintf(fp, "=================================================\n");
	fprintf(fp, "this program is powered by lry\n");
	fprintf(fp, "all rights reserved 2020~2021\n");
	fprintf(fp, "this file is released by the program garbage_classifation_main_progress.exe\n");
	fprintf(fp, "=================================================\n");
	fprintf(fp, "this program should have these files below:\n");
	fprintf(fp, "1	:grabage_classifation_main_progress.exe\n");
	fprintf(fp, "2	:model.dll\n");
	fprintf(fp, "3	:Test_model.dll\n");
	fprintf(fp, "4	:train.dll\n");
	fprintf(fp, "5	:utils.py\n");
	fprintf(fp, "6	:Data_Pre.py\n");
	fprintf(fp, "7	:readme.txt\n");
	fprintf(fp, "=================================================================\n");
	fprintf(fp, "if you find out the information are not match with this file,please connect with the program builder lry\n");
	fprintf(fp, "author			:lry\n");
	fprintf(fp, "email address	:1224137702@qq.com\n");
	fprintf(fp, "=================================================================\n");
	fprintf(fp, "if you want to use this program , please install python(>=3.8.5)\n");
	fprintf(fp, "=================================================================\n");
	fprintf(fp, "now ,the information below is very important.\n");
	fprintf(fp, "this program can have the accuracy 98.2%c\n", '%');
	fprintf(fp, "val_acc 96.4%c\n", '%');
	fprintf(fp, "=================================================================\n");
	fprintf(fp, "the way you use this program is that put the image(1.jpg)to test.model\n");
	fprintf(fp, "you can get the result in three seconds.\n");
	fprintf(fp, "and all the files have a signcode\n");
	fprintf(fp, "this versioon is better than the version before this program\n");
	fprintf(fp, "thank you for your usage\n");
	fclose(fp);
	printf("\nreadme.txt has been fixed successfully.\n");
}

void fix_file_7()
{
	FILE* f1 = fopen("Data_Pre.py", "a+");
	fprintf(f1, "import torch\n");
	fprintf(f1, "import os,glob\n");
	fprintf(f1, "import random,csv\n");
	fprintf(f1, "from PIL import Image\n");
	fprintf(f1, "from torchvision import transforms\n");
	fprintf(f1, "from torch.utils.data import Dataset,DataLoader\n");
	fprintf(f1, "class Data(Dataset):\n");
	fprintf(f1, "\tdef __init__(self,root,resize,mode):\n");
	fprintf(f1, "\t\tsuper(Data,self).__init__()\n");
	fprintf(f1, "\t\tself.root=root\n");
	fprintf(f1, "\t\tself.resize=resize\n");
	fprintf(f1, "\t\tself.name2label={}\n");
	fprintf(f1, "\t\tfor name in sorted(os.listdir(os.path.join(root))):\n");
	fprintf(f1, "\t\t\tif not os.path.isdir(os.path.join(root,name)):\n");
	fprintf(f1, "\t\t\t\tcontinue\n");
	fprintf(f1, "\t\t\tself.name2label[name]=len(self.name2label.keys())\n");
	fprintf(f1, "\t\tself.images,self.labels=self.load_csv('images.csv')\n");
	fprintf(f1, "\t\tif mode=='train':\n");
	fprintf(f1, "\t\t\tself.images=self.images[:int(0.6*len(self.images))]\n");
	fprintf(f1, "\t\t\tself.labels=self.labels[:int(0.6*len(self.labels))]\n");
	fprintf(f1, "\t\telif mode=='val':\n");
	fprintf(f1, "\t\t\tself.images=self.images[int(0.6*len(self.images)):int(0.8*len(self.images))]\n");
	fprintf(f1, "\t\t\tself.labels=self.labels[int(0.6*len(self.labels)):int(0.8*len(self.labels))]\n");
	fprintf(f1, "\t\telse:\n");
	fprintf(f1, "\t\t\tself.images=self.images[int(0.8*len(self.images)):]\n");
	fprintf(f1, "\t\t\tself.labels=self.labels[int(0.8*len(self.images)):]\n");
	fprintf(f1, "\tdef load_csv(self,filename):\n");
	fprintf(f1, "\t\tif not os.path.exists(os.path.join(self.root,filename)):\n");
	fprintf(f1, "\t\t\timages=[]\n");
	fprintf(f1, "\t\t\tfor name in self.name2label.keys():\n");
	fprintf(f1, "\t\t\t\timages+=glob.glob(os.path.join(self.root,name,'*.png'))\n");
	fprintf(f1, "\t\t\t\timages+=glob.glob(os.path.join(self.root,name,'*.jpg'))\n");
	fprintf(f1, "\t\t\t\timages+=glob.glob(os.path.join(self.root,name,'*.jpeg'))\n");
	fprintf(f1, "\t\t\tprint(len(images))\n");
	fprintf(f1, "\t\t\trandom.shuffle(images)\n");
	fprintf(f1, "\t\t\twith open(os.path.join(self.root,filename),mode='w',nemline='') as f:\n");
	fprintf(f1, "\t\t\t\twriter=csv.writer(f)\n");
	fprintf(f1, "\t\t\t\tfor img in images:\n");
	fprintf(f1, "\t\t\t\t\tname=img.split(os.sep)[-2]\n");
	fprintf(f1, "\t\t\t\t\tlabel=self.name2label[name]\n");
	fprintf(f1, "\t\t\t\t\twriter.writerow([img,label])\n");
	fprintf(f1, "\t\t\t\tprint('write into csv into :',filename)\n");
	fprintf(f1, "\t\timages,labels=[],[]\n");
	fprintf(f1, "\t\twith open(os.path.join(self.root,filename)) as f:\n");
	fprintf(f1, "\t\t\treader=csv.reader(f)\n");
	fprintf(f1, "\t\t\tfor row in reader:\n");
	fprintf(f1, "\t\t\t\timg,label=row\n");
	fprintf(f1, "\t\t\t\tlabel=int(label)\n");
	fprintf(f1, "\t\t\t\timages.append(img)\n");
	fprintf(f1, "\t\t\t\tlabels.append(label)\n");
	fprintf(f1, "\t\tassert len(images)==len(labels)\n");
	fprintf(f1, "\t\treturn images,labels\n");
	fprintf(f1, "\tdef __len__(self):\n");
	fprintf(f1, "\t\treturn len(self.images)\n");
	fprintf(f1, "\tdef denormalize(self,x_hat):\n");
	fprintf(f1, "\t\tmean=[0.485,0.456,0.406]\n");
	fprintf(f1, "\t\tstd=[0.229,0.224,0.225]\n");
	fprintf(f1, "\t\tmean=torch.tensor(mean).unsqueeze(1).unsqueeze(1)\n");
	fprintf(f1, "\t\tstd=torch.tensor(std).unsqueeze(1).unsqueeze(1)\n");
	fprintf(f1, "\t\tx=x_hat*std+mean\n");
	fprintf(f1, "\t\treturn x\n");
	fprintf(f1, "\tdef __getitem__(self,idx):\n");
	fprintf(f1, "\t\timg,label=self.images[idx],self.labels[idx]\n");
	fprintf(f1, "\t\ttf=transforms.Compose([lambda x:Image.open(x).convert('RGB'),transforms.Resize((int(self.resize*1.25),int(self.resize*1.25))),transforms.RandomRotation(15),transforms.CenterCrop(self.resize),transforms.ToTensor(),transforms.Normalize(mean=[0.485,0.456,0.406],std=[0.229,0.224,0.225])])\n");
	fprintf(f1, "\t\timg=tf(img)\n");
	fprintf(f1, "\t\tlabel=torch.tensor(label)\n");
	fprintf(f1, "\t\treturn img,label\n");
	fprintf(f1, "def main():\n");
	fprintf(f1, "\tdb=Data('train_data',64,'train')\n");
	fprintf(f1, "\tDataLoader(db,batch_size=32,shuffle=True,num_workers=8)\n");
	fprintf(f1, "if __name__=='__main__':\n");
	fprintf(f1, "\tmain()\n");
	fclose(f1);
	printf("\nData_Pre.py has been fixed successfully\n");
}

void create_update_data()
{
	FILE* f1 = fopen("updatedata.txt", "rb");
	if (f1 != NULL)
	{
		fclose(f1);
		FILE* f2 = fopen("updatedata.txt", "w+");
		fprintf(f2, "version 1.0.1\n");
		fprintf(f2, "this verson can make simple classify\n");
		fprintf(f2, "version 2.0.1\n");
		fprintf(f2, "this version can run in a mode(lost something it have,still can run)\n");
		fprintf(f2, "add a signcode to this program\n");
		fprintf(f2, "version 3.0.1\n");
		fprintf(f2, "this program add some gui interface,easier for you to use\n");
		fprintf(f2, "version 3.1.1\n");
		fprintf(f2, "this version has fixed mouse problem\n");
		fprintf(f2, "version 3.1.2\n");
		fprintf(f2, "this version has fixed some problems\n");
		fprintf(f2, "version 4.0.0 BETA\n");
		fprintf(f2, "this version has two threads to monitor mouse messages.\n");
		fprintf(f2, "version 4.0.0\n");
		fprintf(f2, "this version has git to github\n");
		fprintf(f2, "version 4.0.1\n");
		fprintf(f2, "this version has makes a open sourse license.\n");
		fprintf(f2, "version 4.1.1\n");
		fprintf(f2, "this version has added a license for guests to use\n");
		fprintf(f2, "version 4.1.2\n");
		fprintf(f2, "this version has added a file that can uninstall this program\n");
		fprintf(f2, "version 4.1.3\n");
		fprintf(f2, "this version has fix the problem of uninstall.exe\n");
		fprintf(f2, "version 4.2.0\n");
		fprintf(f2, "this version has made a GUI_interface for guests\n");
		fprintf(f2, "version 5.0.0\n");
		fprintf(f2, "this version has transform the python script to execlute files\n");
		fprintf(f2, "version 5.0.1\n");
		fprintf(f2, "this version has fixed some problems\n");
		fprintf(f2, "version 6.0.0\n");
		fprintf(f2, "this version has fixed some known problems\n");
		fprintf(f2, "version 7.0.0\n");
		fprintf(f2, "this version has added a function : can read number from command,and fixed some problems\n");
		fprintf(f2, "version 7.0.1\n");
		fprintf(f2, "this version has added api to commandline.\n");
		fclose(f2);
	}
	if (f1 == NULL)
	{
		FILE* f2 = fopen("updatedata.txt", "a+");
		fprintf(f2, "version 1.0.1\n");
		fprintf(f2, "this verson can make simple classify\n");
		fprintf(f2, "version 2.0.1\n");
		fprintf(f2, "this version can run in a mode(lost something it have,still can run)\n");
		fprintf(f2, "add a signcode to this program\n");
		fprintf(f2, "version 3.0.1\n");
		fprintf(f2, "this program add some gui interface,easier for you to use\n");
		fprintf(f2, "version 3.1.1\n");
		fprintf(f2, "this version has fixed mouse problem\n");
		fprintf(f2, "version 3.1.2\n");
		fprintf(f2, "this version has fixed some problems\n");
		fprintf(f2, "version 4.0.0 BETA\n");
		fprintf(f2, "this version has two threads to monitor mouse messages.\n");
		fprintf(f2, "version 4.0.0\n");
		fprintf(f2, "this version has git to github\n");
		fprintf(f2, "version 4.0.1\n");
		fprintf(f2, "this version has makes a open sourse license.\n");
		fprintf(f2, "version 4.1.1\n");
		fprintf(f2, "this version has added a license for guests to use\n");
		fprintf(f2, "version 4.1.2\n");
		fprintf(f2, "this version has added a file that can uninstall this program\n");
		fprintf(f2, "version 4.1.3\n");
		fprintf(f2, "this version has fix the problem of uninstall.exe\n");
		fprintf(f2, "version 4.2.0\n");
		fprintf(f2, "this version has made a GUI_interface for guests\n");
		fprintf(f2, "version 5.0.0\n");
		fprintf(f2, "this version has transform the python script to execlute files\n");
		fprintf(f2, "version 5.0.1\n");
		fprintf(f2, "this version has fixed some problems\n");
		fprintf(f2, "version 6.0.0\n");
		fprintf(f2, "this version has fixed some known problems\n");
		fprintf(f2, "version 7.0.0\n");
		fprintf(f2, "this version has added a function : can read number from command,and fixed some problems\n");
		fprintf(f2, "version 7.0.1\n");
		fprintf(f2, "this version has added api to commandline.\n");
		fclose(f2);
	}

}

void get_the_time_now(void*)
{
	int year, month, date, hour, min, sec;
	wchar_t ch_year[20] = { ' ' };
	wchar_t ch_month[20] = { ' ' };
	wchar_t ch_date[20] = { ' ' };
	wchar_t ch_hour[20] = {  ' ' };
	wchar_t ch_min[20] = { ' ' };
	wchar_t ch_sec[20] = { ' ' };
	wchar_t ch_[] = L"/";
	wchar_t ch__[] = L":";
	wchar_t ch_timegettime[64] = { ' ' };
	wchar_t ch_mechine_time_cn[] = L"系统运行时间(ms)";
	wchar_t ch_mechine_time_en[] = L"time begin from start the computer system(ms)";
	_beginthread(clear, 0, NULL);
	while (1)
	{
		DWORD t = timeGetTime();
		time_t timep;
		struct tm* p;
		time(&timep);
		p = gmtime(&timep);
		year = 1900 + p->tm_year;
		month =1 + p->tm_mon;
		date = p->tm_mday;
		hour = 8 + p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
		int len0 = swprintf(ch_year, 8, L"%d", year);
		int len1 = swprintf(ch_month, 8, L"%d", month);
		int len2 = swprintf(ch_date, 8, L"%d", date);
		int len3 = swprintf(ch_hour, 8, L"%d", hour);
		int len4 = swprintf(ch_min, 8, L"%d", min);
		int len5 = swprintf(ch_sec, 8, L"%d", sec);
		int len6 = swprintf(ch_timegettime, 63, L"%d", t);
		outtextxy(50, 450, ch_year);
		outtextxy(95, 450, ch_month);
		outtextxy(115, 450, ch_date);
		outtextxy(135, 450, ch_hour);
		outtextxy(155, 450, ch_min);
		outtextxy(175, 450, ch_sec);
		outtextxy(85, 450, ch_);
		outtextxy(110, 450, ch_);
		outtextxy(150, 450, ch__);
		outtextxy(170, 450, ch__);
		if (global_language == 0)
		{
			outtextxy(200, 450, ch_mechine_time_cn);
			outtextxy(325, 450, ch_timegettime);
		}
		if (global_language == 1)
		{
			outtextxy(200, 450, ch_mechine_time_en);
			outtextxy(505, 450, ch_timegettime);
		}
	}
}

void GUI_interface_2()
{
	wchar_t ch_1_cn[] = L"退出本程序                                                                   ";
	wchar_t ch_1_en[] = L"exit this program                                                            ";
	wchar_t ch_2_cn[] = L"使用本程序自动分类                                                           ";
	wchar_t ch_2_en[] = L"use this program and classify auto.                                          ";
	wchar_t ch_3_cn[] = L"重新训练模型 并保存为model.dll                                               ";
	wchar_t ch_3_en[] = L"train the model again and save as model.dll                                  ";
	wchar_t ch_4_cn[] = L"开放源代码许可及部分源代码                                                   ";
	wchar_t ch_4_en[] = L"Open Sourse Lincese and part of sourse code                                  ";
	wchar_t ch_5_cn[] = L"语言设置:中文（单击此处以更改）                                              ";
	wchar_t ch_5_en[] = L"language setting:English(click here to change)                               ";
	wchar_t ch_6_cn[] = L"自己分类                                                                     ";
	wchar_t ch_6_en[] = L"classify by yourself                                                         ";
	//_beginthread(mouse_message_after_1, 0, NULL);
	//_beginthread(fix_thread, 0, NULL);
	_beginthread(mouse_message_from_windows_api, 0, NULL);
	_beginthread(change_thread, 0, NULL);
	FILE* f1 = fopen("error.log", "a+");
	while (1)
	{
		while (1)
		{
			if (global_language == 0)
			{
				outtextxy(100, 100, ch_1_cn);
				outtextxy(100, 150, ch_2_cn);
				outtextxy(100, 200, ch_3_cn);
				outtextxy(100, 250, ch_4_cn);
				outtextxy(100, 300, ch_5_cn);
				outtextxy(100, 350, ch_6_cn);
			}
			if (global_language == 1)
			{
				outtextxy(100, 100, ch_1_en);
				outtextxy(100, 150, ch_2_en);
				outtextxy(100, 200, ch_3_en);
				outtextxy(100, 250, ch_4_en);
				outtextxy(100, 300, ch_5_en);
				outtextxy(100, 350, ch_6_en);
			}
			if (global_judge_thread_mouse_message_after_1 == 0)
			{
				_beginthread(mouse_message_from_windows_api, 0, NULL);
			}
		}
		fprintf(f1, "this program run into a problem,we are trying to fix it . unknown error type\n");
	}
}

void mouse_message_after_1(void*)
{
	global_judge_thread_mouse_message_after_1 = 1;
	MOUSEMSG m;
	FlushMouseMsgBuffer();
	int a = 0;
	int temp = 0;
	wchar_t ch_cn[] = L"鼠标事件线程运行正常";
	wchar_t ch_en[] = L"mouse_message is running ordinary";
	try
	{
		while (1)
		{
			if (global_change_thread == 1)
			{
				break;
			}
			if (global_language == 0)
			{
				outtextxy(50, 400, ch_cn);
			}
			if (global_language == 1)
			{
				outtextxy(50, 400, ch_en);
			}
			m = GetMouseMsg();
			while (m.mkLButton)
			{
				Sleep(100);		//防止该线程抖动
				if (m.x >= 100 && m.x <= 300 && m.y >= 75 && m.y <= 115)
				{
					global_judge_thread_mouse_message_after_1 = 0;
					exit(0);
				}
				if (m.x >= 100 && m.x <= 300 && m.y >= 125 && m.y <= 165)
				{
					FILE* f1 = fopen("model.dll", "rb");
					if (f1 == NULL)
					{
						wchar_t ch_cn_0[] = L"本程序缺失model.dll组件，请到训练模型模块中重新生成后方可使用";
						wchar_t ch_en_0[] = L"because of loss model.dll,this program cannot run this part.you can use it after remake in train part.";
						wchar_t ch_cn_1[] = L"模块缺失警告";
						wchar_t ch_en_1[] = L"the warning of loss of part of this program";
						if (global_language == 0)
						{
							MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
						}
						if (global_language == 1)
						{
							MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
						}
						global_judge_thread_mouse_message_after_1 = 0;
						_endthread();
					}
					else if (f1 != NULL)
					{
						wchar_t ch_cn_1_0[] = L"请确保所检测图片位于./test/1.jpg";
						wchar_t ch_en_1_0[] = L"please make sure that the photograph you want to predict is in\n./test/1.jpg";
						wchar_t ch_cn_1_1[] = L"提示信息";
						wchar_t ch_en_1_1[] = L"the information this program provided for users";
						if (global_language == 0)
						{
							MessageBox(NULL, ch_cn_1_0, ch_cn_1_1, MB_OK);
						}
						if (global_language == 1)
						{
							MessageBox(NULL, ch_en_1_0, ch_en_1_1, MB_OK);
						}
						global_judge_thread_mouse_message_after_1 = 0;
						system("python Test_model.dll");
						read_file(1);
						_endthread();
					}
				}
				if (m.x >= 100 && m.x <= 300 && m.y >= 175 && m.y <= 215)
				{
					wchar_t ch_cn_0[] = L"程序中本模块不向普通人提供，仅开发人员可用\n开发人员请转到本程序目录下利用python生成模型";
					wchar_t ch_en_0[] = L"this program is not provided for ordinary people.only available for developers.\nif you are developer please goto this dir to release model.";
					wchar_t ch_cn_1[] = L"提示";
					wchar_t ch_en_1[] = L"tips";
					global_judge_thread_mouse_message_after_1 = 0;
					if (global_language == 0)
					{
						MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
					}
					if (global_language == 1)
					{
						MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
					}
					_endthread();
				}
				if (m.x >= 100 && m.x <= 300 && m.y >= 225 && m.y <= 265)
				{
					wchar_t ch[] = L"code and open sourse license";
					MessageBox(NULL, code_license_and_sourse_code, ch, MB_OK);
					global_judge_thread_mouse_message_after_1 = 0;
					_endthread();
				}
				if (m.x >= 100 && m.x <= 300 && m.y >= 275 && m.y <= 315)
				{
					if (global_language == 0)
					{
						temp = 1;
					}
					if (global_language == 1)
					{
						temp = 0;
					}
					cleardevice();
					global_language = temp;
					global_judge_thread_mouse_message_after_1 = 0;
					_endthread();
				}
				if (m.x >= 100 && m.x <= 300 && m.y >= 325 && m.y <= 365)
				{
					wchar_t ch_cn_0[] = L"请输入所放置的垃圾种类：1.有害垃圾.2.厨余垃圾.3.可回收垃圾.4.其他垃圾";
					wchar_t ch_en_0[] = L"please input which kind of garbage you put in .1.harmful 2.kitchen.3.recyclable.4.others";
					wchar_t ch_cn_1[] = L"输入选项前的数字即可,否则会使本程序报错";
					wchar_t ch_en_1[] = L"you can only input the number before all the choices,else it will go to some errors.";
					wchar_t ch_cn_2[] = L"请输入数字";
					wchar_t ch_en_2[] = L"please input the number";
					wchar_t ch[10] = { '\0' };
					if (global_language == 0)
					{
						InputBox(ch, 10, ch_cn_0, ch_cn_2, ch_cn_1, NULL, NULL, false);
					}
					if (global_language == 1)
					{
						InputBox(ch, 10, ch_en_0, ch_en_2, ch_en_1, NULL, NULL, false);
					}
					int b = _wtoi(ch);
					FILE* f1 = fopen("connect.dll", "w+");
					if (b == 1)
					{
						fprintf(f1, "harmful");
					}
					if (b == 2)
					{
						fprintf(f1, "kitchen");
					}
					if (b == 3)
					{
						fprintf(f1, "recycleable");
					}
					if (b == 4)
					{
						fprintf(f1, "others");
					}
					read_file(1);
					global_judge_thread_mouse_message_after_1 = 0;
					_endthread();
				}
			}
		}
	}
	catch(std::exception)
	{
		wchar_t ch_cn[] = L"本程序可能遇到了某些问题，请尝试重启本程序，我们正在尝试修复这一错误，请稍后";
		wchar_t ch_en[] = L"this program may run into some program please restart it,we are trying to fix this bug,please wait a while to use this program";
		wchar_t ch_cn_0[] = L"警告";
		wchar_t ch_en_0[] = L"warnings";
		if (global_language == 0)
		{
			MessageBox(NULL, ch_cn, ch_cn_0, MB_OK);
		}
		if (global_language == 1)
		{
			MessageBox(NULL, ch_en, ch_en_0, MB_OK);
		}
		global_judge_thread_mouse_message_after_1 = 0;
		_endthread();
	}
}

void read_file(int a)
{
	int b = 0;
	b = 0;
	FILE* f1 = fopen("connect.dll", "rb");
	char ch[10] = { '\0' };
	fgets(ch, 10, f1);
	if (ch[0] == 'h')
	{
		//printf("get the result :harmful\n");
		wchar_t ch_cn_0[] = L"识别结果：有害垃圾";
		wchar_t ch_en_0[] = L"get the result from the program:harmful garbage";
		wchar_t ch_cn_1[] = L"识别结果";
		wchar_t ch_en_1[] = L"the result this program predicted";
		if (global_language == 0)
		{
			MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
		}
		if (global_language == 1)
		{
			MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
		}
		b = 1;
	}
	if (ch[0] == 'k')
	{
		//printf("get the result :kitchen\n");
		wchar_t ch_cn_0[] = L"识别结果：厨余垃圾";
		wchar_t ch_en_0[] = L"get the result from the program:kitchen garbage";
		wchar_t ch_cn_1[] = L"识别结果";
		wchar_t ch_en_1[] = L"the result this program predicted";
		if (global_language == 0)
		{
			MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
		}
		if (global_language == 1)
		{
			MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
		}
		b = 2;
	}
	if (ch[0] == 'r')
	{
		//printf("get the result :recyclable\n");
		wchar_t ch_cn_0[] = L"识别结果：可回收垃圾";
		wchar_t ch_en_0[] = L"get the result from the program:recyclable garbage";
		wchar_t ch_cn_1[] = L"识别结果";
		wchar_t ch_en_1[] = L"the result this program predicted";
		if (global_language == 0)
		{
			MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
		}
		if (global_language == 1)
		{
			MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
		}
		b = 3;
	}
	if (ch[0] == 'o')
	{
		//printf("get the result : others\n");
		wchar_t ch_cn_0[] = L"识别结果：其他垃圾";
		wchar_t ch_en_0[] = L"get the result from the program:other garbage";
		wchar_t ch_cn_1[] = L"识别结果";
		wchar_t ch_en_1[] = L"the result this program predicted";
		if (global_language == 0)
		{
			MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
		}
		if (global_language == 1)
		{
			MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
		}
		b = 4;
	}
	//printf("%d", a);
	fclose(f1);
	if (b != 1 && b != 2 && b != 3 && b != 4)
	{
		//printf("[ERROR : read connect.dll failed] can't read at 0x0000000000000000\n");
		wchar_t ch_cn_1_1[] = L"无法读取connect.dll,0x0000000000000000内存操作异常";
		wchar_t ch_en_1_1[] = L"[ERROR : read connect.dll failed ] can't read at 0x0000000000000000";
		wchar_t ch_cn_1_2[] = L"警告";
		wchar_t ch_en_1_2[] = L"warning";
	}
	//create_operatble_file(a);
	//show(a);
}

void clear(void*)
{
	while (1)
	{
		Sleep(1000);
		clearrectangle(50, 430, 195, 465);
		clearrectangle(50, 385, 415, 415);
	}
	_endthread();
}

void fix_thread(void*)
{
	_beginthread(mouse_test, 0, NULL);
	FILE* ffp = fopen("error_init_mouse_message.log", "a+");
	//DWORD t1 = timeGetTime();
	int year, month, date, hour, min, sec;
	time_t timep;
	struct tm* p;
	time(&timep);
	p = gmtime(&timep);
	year = 1900 + p->tm_year;
	month = 1 + p->tm_mon;
	date = p->tm_mday;
	hour = 8 + p->tm_hour;
	min = p->tm_min;
	sec = p->tm_sec;
	fprintf(ffp, "thread fix_thread try to fix the thread mouse_message_after_1(void*)\n");
	fprintf(ffp, "time:%d.%d.%d %d:%d:%d\t\tthread fix_thread begin\n", year, month, date, hour, min, sec);
	fclose(ffp);
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		if (m.mkLButton)
		{
			if (global_judge_thread_mouse_message_after_1 == 0)
			{
				FILE* ffp = fopen("error_init_mouse_message.log", "a+");
				time_t timep;
				struct tm* p;
				time(&timep);
				p = gmtime(&timep);
				year = 1900 + p->tm_year;
				month = 1 + p->tm_mon;
				date = p->tm_mday;
				hour = 8 + p->tm_hour;
				min = p->tm_min;
				sec = p->tm_sec;
				fprintf(ffp, "time: %d.%2d.%2d %2d:%2d:%2d\t\twe are monitoring the thread:mouse_message_after_1.",year, month, date, hour, min, sec);
				fprintf(ffp, "errortype: no error ");
				//_beginthread(mouse_message_after_1, 0, NULL);
				fprintf(ffp, "\t\t no need to fix\n");
				fclose(ffp);
			}
			//Sleep(500);
			if (global_judge_thread_mouse_message_after_1 == 1)
			{
				FILE* ffp = fopen("error_init_mouse_message.log", "a+");
				time_t timep;
				struct tm* p;
				time(&timep);
				p = gmtime(&timep);
				year = 1900 + p->tm_year;
				month = 1 + p->tm_mon;
				date = p->tm_mday;
				hour = 8 + p->tm_hour;
				min = p->tm_min;
				sec = p->tm_sec;
				fprintf(ffp, "time: %d.%2d.%2d %2d:%2d:%2d\t\twe are trying to fix the thread:mouse_message_after_1.", year, month, date, hour, min, sec);
				fprintf(ffp, "errortype:unknown error");
				_beginthread(mouse_message_after_1, 0, NULL);
				fprintf(ffp, "\t\t fix successfully\n");
				fclose(ffp);
			}
			else
			{
				FILE* ffp = fopen("error_init_mouse_message.log", "a+");
				time_t timep;
				struct tm* p;
				time(&timep);
				p = gmtime(&timep);
				year = 1900 + p->tm_year;
				month = 1 + p->tm_mon;
				date = p->tm_mday;
				hour = 8 + p->tm_hour;
				min = p->tm_min;
				sec = p->tm_sec;
				fprintf(ffp, "time: %d.%2d.%2d %2d:%2d:%2d\t\twe are trying to fix the thread:mouse_message_after_1.", year, month, date, hour, min, sec);
				fprintf(ffp, "errortype:unknown error");
				fprintf(ffp, "\t\tfix failed\n");
				fclose(ffp);
				_beginthread(protect_thread, 0, NULL);
				_endthread();
				//exit(0);
			}
		}
	}
	_endthread();
}

void protect_thread(void*)
{
	FILE* ffp = fopen("error_init_mouse_message.log", "a+");
	//DWORD t1 = timeGetTime();
	int year, month, date, hour, min, sec;
	time_t timep;
	struct tm* p;
	time(&timep);
	p = gmtime(&timep);
	year = 1900 + p->tm_year;
	month = 1 + p->tm_mon;
	date = p->tm_mday;
	hour = 8 + p->tm_hour;
	min = p->tm_min;
	sec = p->tm_sec;
	//fprintf(ffp, "thread protect_thread try to protect the thread mouse_message_after_1(void*)\n");
	//fprintf(ffp, "time:%d.%d.%d %d:%d:%d\t\tthread protect_thread begin\n", year, month, date, hour, min, sec);
	//fclose(ffp);
	//while (1)
	{
		FILE* ffp = fopen("error_init_mouse_message.log", "a+");
		time_t timep;
		struct tm* p;
		time(&timep);
		p = gmtime(&timep);
		year = 1900 + p->tm_year;
		month = 1 + p->tm_mon;
		date = p->tm_mday;
		hour = 8 + p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
		//fprintf(ffp, "time: %d.%2d.%2d %2d:%2d:%2d\t\twe are trying to protect the thread:mouse_message_after_1.", year, month, date, hour, min, sec);
		//fprintf(ffp, "errortype:thread fix_thread cannot fix mouse_message\t\t");
		//fprintf(ffp, "we are trying to restart the thread.\n");
		_beginthread(mouse_message_after_1, 0, NULL);
		fclose(ffp);
	}
	_endthread();
}

void mouse_test(void*)
{
	
	time_t timep;
	MOUSEMSG m;
	struct tm* p;
	int year, month, date, hour, min, sec;
	while (1)
	{
		//FILE* f1 = fopen("mouse.log", "a+");
		m = GetMouseMsg();
		if (m.mkCtrl)
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse ctrl down at position(%d,%d)\n", m.x, m.y);
		}
		if (m.mkLButton)
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse left down at position(%d,%d)\n", m.x, m.y);
		}
		if (m.mkMButton)
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse middle down at position(%d,%d)\n", m.x, m.y);
		}
		if (m.mkRButton)
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse right down at position(%d,%d)\n", m.x, m.y);
		}
		if (m.mkShift)
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse shift down at position(%d,%d)\n", m.x, m.y);
		}
		else
		{
			time(&timep);
			p = gmtime(&timep);
			year = 1900 + p->tm_year;
			month = 1 + p->tm_mon;
			date = p->tm_mday;
			hour = 8 + p->tm_hour;
			min = p->tm_min;
			sec = p->tm_sec;
			//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
			//fprintf(f1, "mouse has moved at position(%d,%d)\n", m.x, m.y);
		}
		//fclose(f1);
	}
}

void mouse_message_from_windows_api(void*)
{
	//for test. this function is for test.
	//this function is not from easyx
	//this function is using Windows API directly
	//function begin
	global_judge_thread_mouse_message_after_1 = 1;
	int x, y,real_x,real_y;
	POINT pt;
	int temp;
	//FILE* f1 = fopen("mouse_message_from_api.log", "a+");
	//fprintf(f1, "thread mouse_message_from_windows_api begin\n");
	//fclose(f1);
	time_t timep;
	MOUSEMSG m;
	struct tm* p;
	int year, month, date, hour, min, sec;
	while (1)
	{
		if (global_change_thread == 0)
		{
			break;
		}
		time(&timep);
		p = gmtime(&timep);
		year = 1900 + p->tm_year;
		month = 1 + p->tm_mon;
		date = p->tm_mday;
		hour = 8 + p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
		GetCursorPos(&pt);
		real_x = pt.x;
		real_y = pt.y;
		x = real_x - global_position_x;
		y = real_y - global_position_y-50;
		//FILE* f1 = fopen("mouse_message_from_api.log", "a+");
		//fprintf(f1, "time: %d.%2d.%2d %2d:%2d:%2d\t\t", year, month, date, hour, min, sec);
		//fprintf(f1, "mouse position :(%d,%d)\n", x, y);
		//VK_LBUTTON	mouse_left_down		0x01
		//VK_RBUTTON	mouse_right_down	0x02
		//VK_CANCEL		Ctrl+Break			0x03
		//VK_MBUTTON	mouse_middle_down	0x04
		Sleep(100);
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
		{
			if (x >= 100 && x <= 300 && y >= 75 && y <= 115)
			{
				global_judge_thread_mouse_message_after_1 = 0;
				exit(0);
			}
			if (x >= 100 && x <= 300 && y >= 125 && y <= 165)
			{
				FILE* f1 = fopen("model.dll", "rb");
				if (f1 == NULL)
				{
					wchar_t ch_cn_0[] = L"本程序缺失model.dll组件，请到训练模型模块中重新生成后方可使用";
					wchar_t ch_en_0[] = L"because of loss model.dll,this program cannot run this part.you can use it after remake in train part.";
					wchar_t ch_cn_1[] = L"模块缺失警告";
					wchar_t ch_en_1[] = L"the warning of loss of part of this program";
					if (global_language == 0)
					{
						MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
					}
					if (global_language == 1)
					{
						MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
					}
					global_judge_thread_mouse_message_after_1 = 0;
					_endthread();
				}
				else if (f1 != NULL)
				{
					wchar_t ch_cn_1_0[] = L"请确保所检测图片位于./test/1.jpg";
					wchar_t ch_en_1_0[] = L"please make sure that the photograph you want to predict is in\n./test/1.jpg";
					wchar_t ch_cn_1_1[] = L"提示信息";
					wchar_t ch_en_1_1[] = L"the information this program provided for users";
					if (global_language == 0)
					{
						MessageBox(NULL, ch_cn_1_0, ch_cn_1_1, MB_OK);
					}
					if (global_language == 1)
					{
						MessageBox(NULL, ch_en_1_0, ch_en_1_1, MB_OK);
					}
					global_judge_thread_mouse_message_after_1 = 0;
					system("python Test_model.dll");
					read_file(1);
					_endthread();
				}
			}
			if (x >= 100 && x <= 300 && y >= 175 && y <= 215)
			{
				wchar_t ch_cn_0[] = L"程序中本模块不向普通人提供，仅开发人员可用\n开发人员请转到本程序目录下利用python生成模型";
				wchar_t ch_en_0[] = L"this program is not provided for ordinary people.only available for developers.\nif you are developer please goto this dir to release model.";
				wchar_t ch_cn_1[] = L"提示";
				wchar_t ch_en_1[] = L"tips";
				global_judge_thread_mouse_message_after_1 = 0;
				if (global_language == 0)
				{
					MessageBox(NULL, ch_cn_0, ch_cn_1, MB_OK);
				}
				if (global_language == 1)
				{
					MessageBox(NULL, ch_en_0, ch_en_1, MB_OK);
				}
				_endthread();
			}
			if (x >= 100 && x <= 300 && y >= 225 && y <= 265)
			{
				wchar_t ch[] = L"code and open sourse license";
				MessageBox(NULL, code_license_and_sourse_code, ch, MB_OK);
				global_judge_thread_mouse_message_after_1 = 0;
				_endthread();
			}
			if (x >= 100 && x <= 300 && y >= 275 && y <= 315)
			{
				if (global_language == 0)
				{
					temp = 1;
				}
				if (global_language == 1)
				{
					temp = 0;
				}
				cleardevice();
				global_language = temp;
				global_judge_thread_mouse_message_after_1 = 0;
				_endthread();
			}
			if (x >= 100 && x <= 300 && y >= 325 && y <= 365)
			{
				wchar_t ch_cn_0[] = L"请输入所放置的垃圾种类：1.有害垃圾.2.厨余垃圾.3.可回收垃圾.4.其他垃圾";
				wchar_t ch_en_0[] = L"please input which kind of garbage you put in .1.harmful 2.kitchen.3.recyclable.4.others";
				wchar_t ch_cn_1[] = L"输入选项前的数字即可,否则会使本程序报错";
				wchar_t ch_en_1[] = L"you can only input the number before all the choices,else it will go to some errors.";
				wchar_t ch_cn_2[] = L"请输入数字";
				wchar_t ch_en_2[] = L"please input the number";
				wchar_t ch[10] = { '\0' };
				if (global_language == 0)
				{
					InputBox(ch, 10, ch_cn_0, ch_cn_2, ch_cn_1, NULL, NULL, false);
				}
				if (global_language == 1)
				{
					InputBox(ch, 10, ch_en_0, ch_en_2, ch_en_1, NULL, NULL, false);
				}
				int b = _wtoi(ch);
				FILE* f1 = fopen("connect.dll", "w+");
				if (b == 1)
				{
					fprintf(f1, "harmful");
				}
				if (b == 2)
				{
					fprintf(f1, "kitchen");
				}
				if (b == 3)
				{
					fprintf(f1, "recycleable");
				}
				if (b == 4)
				{
					fprintf(f1, "others");
				}
				read_file(1);
				global_judge_thread_mouse_message_after_1 = 0;
				_endthread();
			};
		}
		//fclose(f1);
	}
	_endthread();
}

void get_windows_position(void*)
{
	wchar_t ch[] = L"垃圾分类程序";
	HWND hq = FindWindow(NULL,ch);
	RECT rect;
	while (1)
	{
		Sleep(100);
		GetWindowRect(hq, &rect);
		global_position_x = rect.left;
		global_position_y = rect.top;
	}
	_endthread();
}

void change_thread(void*)
{
	int temp;
	while (1)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x8000)
		{
			if (global_change_thread == 0)
			{
				temp = 1;
			}
			if (global_change_thread == 1)
			{
				temp = 0;
			}
			global_change_thread = temp;
			Sleep(100);
			change_thread_operation();
		}
	}
}

void change_thread_operation()
{
	if (global_change_thread == 0)
	{
		_beginthread(mouse_message_after_1, 0, NULL);
	}
	if (global_change_thread == 1)
	{
		_beginthread(mouse_message_from_windows_api, 0, NULL);
	}
}
void command_help_mode()
{
	printf("this program is powered by lry\n");
	printf("you are now using the help mode\n");
	printf("help mode version 1.0.0\n");
	printf("you can use these below command to command this program\n");
	printf("1.\t\t-help\t\t\tyou can use this command to get help\n");
	printf("2.\t\t-train\t\t\tyou can use this command to train the model\n");
	printf("3.\t\t-test [filename]\tyou can use this command to get the result of the photo\n");
	printf("4.\t\t-check\t\t\tyou can use this command to check the files and the environment\n");
	printf("5.\t\t-release\t\tyou can use this command to release the files in this program\n");
	printf("6.\t\t-upgrade\t\tyou can use this command to updata the program\n");
	printf("7.\t\t-version\t\tyou can use this command to show the version of this program\n");
	printf("more command will be added soon,waiting for new version!\n");
	printf("you can go to https://github.com/lry-123456789/garbage-classification to see all the code\n");
	printf("help mode ended\n");
}
void command_train_mode()
{
	printf("start to start visdom.server \n");
	_beginthread(thread_start_server_command, 0, NULL);
	Sleep(2000);
	printf("begin to start internet explorer goto localhost:8097\n");
	wchar_t ch[] = L"open";
	wchar_t ch1[] = L"https://localhost:8097";
	ShellExecute(NULL, ch, ch1, NULL, NULL, SW_MAXIMIZE);				//SW_MAXIMIZE 最大化 SW_MINIMIZE 最小化 SW_HIDE 隐藏
	Sleep(5000);
	printf("start running the python script\n");
	system("python train.dll");
}

void thread_start_server_command(void*)
{
	system("python -m visdom.server");
	_endthread();
}

/***************************\
fix tips:
SHORT GetAsyncKeyState (int nVirtKey);
VirtKey		intger		mouse/keyboard
VK_LBUTTON	1		mouse_left
VK_RBUTTON	2		mouse_right
VK_CANCEL	3		cancel
VK_MBUTTON	4		mouse_middle
VK_XBUTTON1	5		UNKNOWN
VK_XBUTTON	6		UNKNOWN
VK_BACK		7		Backspace
VK_TAB		8		Tab
UNKNOWN		9		UNKNOWN
UNKNOWN		10		UNKNOWN
VK_CLEAR	12		clear
VK_RETURN	13		Enter
UNKNOWN		14		UNKNOWN
UNKNOWN		15		UNKNOWN
VK_SHIFT	16		shift
VK_CONTROL	17		Ctrl
VK_MENU		18		Alt
VK_PAUSE	19		pause
VK_CAPITAL	20		Caps Lock
update tommorrow.
\******************************************/
