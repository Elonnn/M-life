#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <graphics.h>//EasyXͼ�ο�
#include<easyx.h>
#include<conio.h>
#include<time.h>



/*�궨��*/
#define WIN_WIDTH 1200 //���ڿ��
#define WIN_HEIGHT 700 //���ڸ߶�
#define WORDCOLOR RGB(0,0,0)
typedef struct  //����ͼƬ��ɵľ���
{
	int x;
	int y;
	int w;
	int h;
} Rect;

/*�����غ���*/
extern void Draw_Return_Button();
extern void Is_Mouse_In_Return(int x, int y);
extern void mouse(Rect m,int R,int G,int B,int l,int i,char*str);
extern int  inrect(int x,int y,Rect r);

/*�����溯��*/
extern void face();
extern void Mtakeout ();
extern void Msport ();
extern void Mwallet ();

//С����
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


/*����ͷ�ļ�*/
typedef struct FOOD{
	char name[15];							//�Ĺ��ˣ����Ȳ���
	float price;//RMBΪ��λ
	int calorie;//kcΪ��λ
	short time;//minΪ��λ
}food;
