#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<Windows.h>
#include <shellapi.h>
#include <shlobj.h>
#pragma comment(lib, "shell32.lib")
void DeleteApplicationSelf();
void GUI_interface_1();
void GUI_interface_2();
void GUI_interface_final();

int main()
{
	initgraph(400, 200);
	GUI_interface_1();
	GUI_interface_2();
	GUI_interface_final();
}

void GUI_interface_1()
{
	setbkcolor(WHITE);
	setlinecolor(GREEN);
	settextcolor(BLACK);
	cleardevice();
	wchar_t ch_0[] = L"是否确定卸载垃圾分类程序？";
	wchar_t ch_1[] = L"确定";
	wchar_t ch_2[] = L"取消";
	outtextxy(100, 50, ch_0);
	outtextxy(100, 150, ch_1);
	outtextxy(300, 150, ch_2);
	//MOUSEMSG m;					//this function can not use in easyx20210730
	ExMessage m;					//this function can use in easyx20210730 fixed successfully
	//FlushMouseMsgBuffer();		//this function can not use in easyx20210730
	flushmessage();					//this function can use in easyx20210730 fixed successfully
	int a = 1;
	while (a==1)
	{
		//m = GetMouseMsg();		//this function can not use in easyx20210730
		m = getmessage(-1);			//this function can use in easyx20210730 fixed successfully
		//if(m.mkLButton)			//this function can not use in easyx20210730
		if(m.lbutton)				//this function can use in easyx20210730 fixed successfully
		{
			if (m.x >= 300 && m.x <= 350 && m.y >= 125 && m.y <= 165)
			{
				exit(0);
			}
			if (m.x >= 100 && m.x <= 150 && m.y >= 125 && m.y <= 165)
			{
				a = 0;
			}
		}
	}
}

void GUI_interface_2()
{
	cleardevice();
	wchar_t ch_0[] = L"正在移除程序，请稍后";
	wchar_t ch_1[] = L"桌面、任务栏、开始菜单中的快捷方式以及本卸载程序，请自行删除";
	line(100, 50, 300, 50);
	line(100, 50, 100, 100);
	line(100, 100, 300, 100);
	line(300, 50, 300, 100);
	system("taskkill /f /im garbage_classification /t");
	Sleep(1000);
	system("del /f /s /q *.*");
	MessageBox(NULL, ch_1, ch_0,MB_OK);
	fillrectangle(100, 50, 300, 100);
}

void GUI_interface_final()
{
	//wchar_t ch_0[] = L"再次感谢您对本程序的使用，我会在https://github.com/lry-123456789/garbage-classification等你";
	//outtextxy(100, 100, ch_0);
	DeleteApplicationSelf();
}

void DeleteApplicationSelf()

{

	wchar_t szCommandLine[MAX_PATH + 10];
	//设置本进程为实时执行，快速退出。
	SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
	SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
	//通知资源管理器不显示本程序，当然如果程序没有真正的删除，刷新资源管理器后仍会显示出来的。
	SHChangeNotify(SHCNE_DELETE, SHCNF_PATH, _pgmptr, NULL);
	//调用cmd传入参数以删除自己
	//swprintf(szCommandLine, "/c del /q %s", _pgmptr);
	wchar_t ch_0[] = L"open";
	wchar_t ch_1[] = L"cmd.exe";
	wchar_t ch_2[] = L"/c del /f /s /q uninstall.exe";
	ShellExecute(NULL, ch_0, ch_1, ch_2, NULL, SW_HIDE);
	ExitProcess(0);

}
