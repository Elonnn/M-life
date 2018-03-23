#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <graphics.h>//EasyX图形库
#include<easyx.h>
#include<conio.h>
#include<time.h>



/*宏定义*/
#define WIN_WIDTH 1200 //窗口宽度
#define WIN_HEIGHT 700 //窗口高度
#define WORDCOLOR RGB(0,0,0)
typedef struct  //整个图片组成的矩形
{
	int x;
	int y;
	int w;
	int h;
} Rect;

/*鼠标相关函数*/
extern void Draw_Return_Button();
extern void Is_Mouse_In_Return(int x, int y);
extern void mouse(Rect m,int R,int G,int B,int l,int i,char*str);
extern int  inrect(int x,int y,Rect r);

/*主界面函数*/
extern void face();
extern void Mtakeout ();
extern void Msport ();
extern void Mwallet ();

//小函数
extern void bill();
extern void about();



extern float Mmoney;
extern int Mcalorie;
/*extern void fitness_equipment(float*pMmoney,int*pMcalorie);
extern void running(float*pMmoney,int*pMcalorie);
extern void fast_walking(float*pMmoney,int*pMcalorie);
extern void bicycle(float*pMmoney,int*pMcalorie);
extern void swimming(float*pMmoney,int*pMcalorie);
extern void basketball(float*pMmoney,int*pMcalorie);*/


/*外卖头文件*/
typedef struct FOOD{
	char name[15];							//改过了，长度不够
	float price;//RMB为单位
	int calorie;//kc为单位
	short time;//min为单位
}food;
