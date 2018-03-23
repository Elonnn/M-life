#include"total.h"

typedef struct HEALTHY{
	char name[10];
	int calorie;//(kc/h)Ϊ��λ
}health;

void fitness_equipment()
{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/fitness_equipment.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"400kc/h");
	outtextxy(30,50,"ע�������������������ɼ�������");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //������ҳ��
		}
	}
}
void running()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/running.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"600kc/h");
	outtextxy(30,50,"ע�������Ҫ��ͷ��˫��ע��ǰ��");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //������ҳ��
		}
	}
}
void fast_walking()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/fast_walking.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"500kc/h");
	outtextxy(30,50,"ע�������ǰ������Ҫ���");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //������ҳ��
		}
	}
}
void bicycle()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/bicycle.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"500kc/h");
	outtextxy(30,50,"ע�������������");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //������ҳ��
		}
	}
}
void swimming()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/swimming.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"400kc/h");
	outtextxy(30,50,"ע�����ʱ�䳤�̣��ɷ�ǰ������Ӿ");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();        //������ҳ��
		}
	}
}
void basketball()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//�����������
	loadimage(&img, "pic/basketball.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"����");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	outtextxy(30,2,"ÿСʱ����calorie��");
	outtextxy(400,2,"600kc/h");
	outtextxy(30,50,"ע���������������");
	/*���ؼ�����λ��*/
	Rect d;
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //������ҳ��
		}
	}
}
void Msport()
{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	char temp[10];
	setlocale(LC_ALL,"chs");//�����������
	int i=0;
	FILE *fp;
	health sport[6];

	if((fp=fopen("data/��������.txt","r"))==NULL)
	{
		puts("Cannot open the file!");
		exit(1);
	}

	for(i=0;i<6;i++)
	{
		fscanf(fp,"%s%d",&sport[i].name,&sport[i].calorie);
		fgets(temp,5,fp);
	}
	fclose(fp);
	loadimage(&img, "pic/��������.jpg",1200,700,true);
	putimage(0,0,&img);
	setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
	settextstyle(20,0,"����");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	Rect d,qc,yy,kp,kz,lq,dc,l;
	/*�������ļ�����λ��*/
	qc.x=10;
	qc.y=10;
	qc.w=qc.x+386;
	qc.h=qc.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(qc.x, qc.y,qc.w, qc.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(10,10,&img);
	outtextxy(qc.x+130, qc.y+120, "��������");
	/*���ܼ�����λ��*/
	kp.x=406;
	kp.y=10;
	kp.w=kp.x+388;
	kp.h=kp.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(kp.x, kp.y,kp.w, kp.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",388,250,true);
	putimage(406,10,&img);
	outtextxy(kp.x+150, kp.y+120, "�ܲ�");
	/*���߼�����λ��*/
	kz.x=804;
	kz.y=10;
	kz.w=kz.x+386;
	kz.h=kz.y+250;
	setfillcolor(RGB(4,39,255));
	fillrectangle(kz.x, kz.y, kz.w, kz.h);
	settextcolor(RGB(65, 105, 225));
	//loadimage(&img, "blue.jpg",386,250,true);
	//putimage(804,10,&img);
	outtextxy(kz.x+150, kz.y+120, "����");
	/*����������λ��*/
	dc.x=10;
	dc.y=265;
	dc.w=dc.x+386;
	dc.h=dc.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(dc.x, dc.y,dc.w, dc.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(10,265,&img);
	outtextxy(dc.x+150, dc.y+120, "����");
	/*��Ӿ������λ��*/
	yy.x=406;
	yy.y=265;
	yy.w=yy.x+388;
	yy.h=yy.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(yy.x, yy.y,yy.w, yy.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",388,250,true);
	putimage(406,265,&img);
	outtextxy(yy.x+150, yy.y+120, "��Ӿ");
	/*���������λ��*/
	lq.x=804;
	lq.y=265;
	lq.w=lq.x+386;
	lq.h=lq.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(lq.x, lq.y,lq.w, lq.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(804,265,&img);
	outtextxy(lq.x+150, lq.y+120, "����");
	/*�޹ؽ�Ҫ��*/
	char st[50];
	l.x=10;
	l.y=520;
	l.w=l.x+1180;
	l.h=l.y+170;
	setlinecolor(RGB(135, 206, 235));
	rectangle(l.x, l.y,l.w, l.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",1180,170,true);
	putimage(10,520,&img);
	setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
	settextstyle(40,0,"����");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	sprintf(st,"�װ��ģ�������������calorieΪ%dkcŶ���Ͽ�ȥ�˶��ɣ�",Mcalorie);
	outtextxy(100, 595, st);
	/*���ؼ�����λ��*/
	setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
	settextstyle(20,0,"����");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	d.x = 1090;
	d.y = 10;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
	settextstyle(30,0,"�п�");
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
				mouse(d,255,255,255,1120,15,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(30,0,"�п�");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			//�Ƿ�ѡ��"��������"��ť
			if (inrect(m.x,m.y,qc))
				mouse(qc,255,255,255,130,120,"��������");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(qc.x, qc.y, qc.w, qc.h);
				loadimage(&img, "pic/blue.jpg",386,250,true);
				putimage(10,10,&img);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(qc.x+130, qc.y+120, "��������");
			}
			//�Ƿ�ѡ��"�ܲ�"��ť
			if (inrect(m.x,m.y,kp))
				mouse(kp,255,255,255,150,120,"�ܲ�");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(kp.x, kp.y, kp.w, kp.h);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				loadimage(&img, "pic/blue.jpg",388,250,true);
				putimage(406,10,&img);
				outtextxy(kp.x+150, kp.y+120, "�ܲ�");
			}
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,kz))
				mouse(kz,255,255,255,150,120,"����");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				//rectangle(kz.x, kz.y, kz.w, kz.h);
				setfillcolor(RGB(4,39,255));
				fillrectangle(kz.x, kz.y, kz.w, kz.h);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				//loadimage(&img, "blue.jpg",386,250,true);
	            ////putimage(804,10,&img);
				outtextxy(kz.x +150,kz.y+120, "����");
			}
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,dc))
				mouse(dc,255,255,255,150,120,"����");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(dc.x, dc.y, dc.w, dc.h);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				loadimage(&img, "pic/blue.jpg",386,250,true);
	            putimage(10,265,&img);
				outtextxy(dc.x +150,dc.y+ 120, "����");
			}
			//�Ƿ�ѡ��"��Ӿ"��ť
			if (inrect(m.x,m.y,yy))
				mouse(yy,255,255,255,150,120,"��Ӿ");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(yy.x, yy.y, yy.w, yy.h);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
	            loadimage(&img, "pic/blue.jpg",388,250,true);
	            putimage(406,265,&img);
				outtextxy(yy.x +150,yy.y+120, "��Ӿ");
			}
			//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,lq))
				mouse(lq,255,255,255,150,120,"����");

			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(lq.x, lq.y, lq.w, lq.h);
				settextstyle(30,0,"�п�");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				loadimage(&img, "blue.jpg",386,250,true);
	            putimage(804,265,&img);
				outtextxy(lq.x +150,lq.y+120, "����");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			face();         //������ҳ��
		}
		if (inrect(m.x,m.y, qc))
		{
			flag = 0;
			fitness_equipment();         //���ú���fitness_equipment()
		}
		if (inrect(m.x,m.y, kp))
		{
			flag = 0;
			running();         //���ú���running()
		}
		if (inrect(m.x,m.y, kz))
		{
			flag = 0;
			fast_walking();         //���ú���fast_walking()
		}
		if (inrect(m.x,m.y, dc))
		{
			flag = 0;
			bicycle();         //���ú���bicycle()
		}
		if (inrect(m.x,m.y, yy))
		{
			flag = 0;
			swimming();         //���ú���swimming()
		}
		if (inrect(m.x,m.y, lq))
		{
			flag = 0;
			basketball();         //���ú���basketball()
		}
	}
}
