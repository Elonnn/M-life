#include "total.h"
#include<mmsystem.h>
#pragma comment (lib, "winmm.lib")

	float Mmoney=0;					//充值写好之后改成0
	int Mcalorie=0;
int main()
{
	FILE *fp;

	initgraph(WIN_WIDTH, WIN_HEIGHT);
	setbkmode(TRANSPARENT);//开启背景透明模式
	if((fp=fopen("data/账单.txt","w"))==0)
		{
		MessageBox(0,TEXT("ERROR:cannot open the 账单 file!"),TEXT("我叫对话框"),MB_OK);
		exit(1);
		}
		fclose(fp);
	face();
	getch();//所在头文件：conio.h  这个函数是一个不回显函数，当用户按下某个字符时，函数自动读取，无需按回车
	closegraph();      
	

	return 0;
}

