#include "total.h"
#include<mmsystem.h>
#pragma comment (lib, "winmm.lib")

	float Mmoney=0;					//��ֵд��֮��ĳ�0
	int Mcalorie=0;
int main()
{
	FILE *fp;

	initgraph(WIN_WIDTH, WIN_HEIGHT);
	setbkmode(TRANSPARENT);//��������͸��ģʽ
	if((fp=fopen("data/�˵�.txt","w"))==0)
		{
		MessageBox(0,TEXT("ERROR:cannot open the �˵� file!"),TEXT("�ҽжԻ���"),MB_OK);
		exit(1);
		}
		fclose(fp);
	face();
	getch();//����ͷ�ļ���conio.h  ���������һ�������Ժ��������û�����ĳ���ַ�ʱ�������Զ���ȡ�����谴�س�
	closegraph();      
	

	return 0;
}

