#include"total.h"

void jiedan (food *choice,int stime)
{
		IMAGE about;
		MOUSEMSG m;
		Rect d,d_time;
		int flag = 1;
		int ttime;
		char str[30];

		setlocale(LC_ALL,"chs");//����������룬������ͷ�ļ�locale.h��

		setbkmode(TRANSPARENT);//��������͸��ģʽ												
		loadimage(&about, "pic/��ʦ.jpg",WIN_WIDTH-430, WIN_HEIGHT-200);	
		putimage(80, 150, &about);

		/*���ؼ�����λ��*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(RGB(65, 105, 225));
		outtextxy(d.x+30, d.y + 5, "back");
	
		/*��ʾ��*/
		d_time.x = 450;
		d_time.y = 390;
		settextstyle(30,0,"����");
		settextcolor(RED);
		outtextxy(d_time.x+70, d_time.y + 5, "����������� ");
		outtextxy(d_time.x+80, d_time.y + 45, choice->name);
		outtextxy(d_time.x+90, d_time.y + 85,"�����ѽӵ���");
		ttime=choice->time+stime;
		sprintf(str,"Ԥ��%d���Ӻ��ʹ�!",ttime);
		outtextxy(d_time.x+65, d_time.y + 125,str);



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

				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
		} while (m.uMsg != WM_LBUTTONDOWN);


	if (inrect(m.x,m.y, d))
		{
		Mtakeout();     //�����ϸ�����
		flag=0;
		}
	}



}



extern void Mtakeout()

{
	setlocale(LC_ALL,"chs");//����������룬������ͷ�ļ�locale.h��

	int i;
	int flag = 1;
	food waimai[4]={0};
	FILE *fp;
	if((fp=fopen("data/��������.txt","r"))==0)
	{
		MessageBox(0,TEXT("ERROR:cannot open the �������� file!"),TEXT("�ҽжԻ���"),MB_OK);
		exit(1);
	}
	for(i=0;i<4;i++)
	{
		fscanf(fp,"%s%f%d%hd",waimai[i].name,&waimai[i].price,&waimai[i].calorie,&waimai[i].time);
	}
	fclose(fp);



	//ʱ���йر�������

	time_t timer= time(NULL);     
	struct tm *tblock= localtime(&timer);    

	int hour =tblock->tm_hour;
	int stime;										//  time of sending an out-take(min)
	char *timetext;								//Ҫ�������


	//������������
		Rect d_time,d_remain,d_total,d1,d2,d3,d4,d;
		IMAGE about,f1,f2,f3,f4;
		MOUSEMSG m;

		
		setbkmode(TRANSPARENT);//��������͸��ģʽ												
		loadimage(&about, "pic/��������.jpg",WIN_WIDTH, WIN_HEIGHT);	// ��ȡͼƬ�� about ������
		loadimage(&f1, "pic/���˼��׷�.jpg",300, 200);
		loadimage(&f2, "pic/�ڽ�ţ�⳴��.jpg",300, 200);
		loadimage(&f3, "pic/���ⷹ.jpg",300, 200);
		loadimage(&f4, "pic/�����ײ�.jpg",300, 200);
		putimage(0, 0, &about);


	/*ʱ����ʾ*/

	timer= time(NULL);     
	tblock= localtime(&timer); 


	if((hour>=13&&hour<16)||hour>=21)
	{
		timetext="̫�����ǣ������Ѿ��°���";

	}
	else if(hour<11||hour==16||hour==20)
	{
		timetext="�������ʱ�������еú�";
		stime=8;
	}
	else
	{
		timetext="�������ʱ�����е�æ��";
		stime=15;
	}
	

		d_time.x = 100;
		d_time.y = 50;
		d_time.w = d_time.x + 400;
		d_time.h = d_time.y + 400;
		settextstyle(30,0,"��Բ");
		settextcolor(RGB(65, 105, 225));
		outtextxy(d_time.x+30, d_time.y + 5, "Local time is: ");
		outtextxy(d_time.x+40, d_time.y + 45, asctime(tblock));	//ʵ��printf("Local time is: %s\n", asctime(tblock));���� 
		outtextxy(d_time.x+500, d_time.y + 45, timetext);
	
		
		
		/*���ؼ�����λ��*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(RGB(65, 105, 225));
		settextstyle(30,0,"����");
		outtextxy(d.x+30, d.y + 5, "back");
	




		
		/*�㵥��ťλ��*/
		d_remain.x = 1000;
		d_remain.y = 600;
		d_remain.w =d_remain.x + 120;
		d_remain.h = d_remain.y + 60;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h); 
		settextcolor(RGB(65, 105, 225));
		outtextxy(d_remain.x+30, d_remain.y + 15, "�µ�");


		char  s[4][30];
		for(i=0;i<4;i++)
			sprintf(s[i],"%d.%s    ��%.1f",i+1,waimai[i].name ,waimai[i].price);
		


		/*ͼƬ1*/
		d1.x = 80;
		d1.y = 200;
		d1.w =d1.x + 300;
		d1.h = d1.y +200;
		putimage(d1.x, d1.y , &f1);

		settextstyle(20,0,"����");
		settextcolor(BLACK);
		outtextxy(d1.x+30,d1.y - 25, s[0] );
		/*ͼƬ2*/
		d2.x = 500;
		d2.y = 200;
		d2.w =d2.x + 300;
		d2.h = d2.y +200;
		putimage(d2.x, d2.y , &f2);

		settextstyle(20,0,"����");
		settextcolor(BLACK);
		outtextxy(d2.x+30,d2.y - 25, s[1]);
		/*ͼƬ3*/
		d3.x = 80;
		d3.y = 450;
		d3.w =d3.x + 300;
		d3.h = d3.y + 200;
		putimage(d3.x, d3.y , &f3);
		settextstyle(20,0,"����");
		settextcolor(BLACK);
		outtextxy(d3.x+30,d3.y - 25, s[2]);
		/*ͼƬ4*/
		d4.x =500;
		d4.y = 450;
		d4.w =d4.x + 300;
		d4.h = d4.y + 200;
		putimage(d4.x, d4.y , &f4);
		settextstyle(20,0,"����");
		settextcolor(BLACK);
		outtextxy(d4.x+30,d4.y - 25,s[3]);
		while (flag)
	{
			//��ɫ����
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

				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}

			//�Ƿ�ѡ��"�㵥"��ť
			if (inrect(m.x,m.y,d_remain))
			
				mouse(d_remain,34,139,34,30,15,"�µ�");																		
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h);
				

				settextstyle(30,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d_remain.x+30, d_remain.y + 15, "�µ�");
			}


		} while (m.uMsg != WM_LBUTTONDOWN);


		if (inrect(m.x,m.y, d))
			face();     //������ҳ��

		if (inrect(m.x,m.y, d_remain))
		{	
			if((hour>=13&&hour<16)||hour>=21)
				{
					MessageBox(0,TEXT("������˵�ˣ������Ѿ��°��ˣ�����������"),TEXT("�ҽжԻ���"),MB_OK);
					face();
				}
			else
			{
			char input[2];
			loop:InputBox(input,2, "ѡ����Ҫ�������");
			int choice=input[0]-'1';
//	��ʵ������sscanf(input, "%d", &x);
			

			
			switch(choice)
			{
				default:MessageBox(0,TEXT("INPUT ERROR�����ٵ�Ƥ�ʹ����ˣ�"),TEXT("�ҽжԻ���"),MB_OK);goto loop;break;
				case 0:
				case 1:
				case 2:
				case 3:
					
			if(Mmoney<waimai[choice].price)
			{
				MessageBox(0,TEXT("�˻����㣡(��ȥ��ֵ�ɺ���)"),TEXT("�ҽжԻ���"),MB_OK);
				Mwallet();
			
			}
			Mmoney-=waimai[choice].price;
			Mcalorie+=waimai[choice].calorie;

			if((fp=fopen("data/�˵�.txt","a"))==0)
			{
			MessageBox(0,TEXT("ERROR:cannot open the �˵� file!"),TEXT("�ҽжԻ���"),MB_OK);
			exit(1);
			}
			// ��ʽΪ��  ����ʱ��  �¼�  ���䶯  �˻����
			fprintf(fp,"\n%-15s����:%-15s-��%-12.1f��%-12.1f",asctime(tblock),waimai[choice].name,waimai[choice].price,Mmoney);
			fclose(fp);
			jiedan(&waimai[choice],stime);													
			}			
			flag=0;
			}
		}
	}		
}
