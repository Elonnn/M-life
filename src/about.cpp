#include"total.h"
extern void about()
{
		Rect d,check;
		IMAGE about,img_hind,img_remain,img_price;
		MOUSEMSG m;
		int flag = 1,i=0;

		initgraph(WIN_WIDTH, WIN_HEIGHT);
		setbkmode(TRANSPARENT);//��������͸��ģʽ
		loadimage(&about, "pic/��Ϣ����.jpg",WIN_WIDTH, WIN_HEIGHT);	// ��ȡͼƬ�� about ������
		putimage(0, 0, &about);
		
		/*��������*/
		settextstyle(25,0,"����");
		settextcolor(RGB(0,0,0));
		setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
		/*���ؼ�����λ��*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(BLACK);
		outtextxy(d.x+30, d.y + 5, "back");
		/*��������λ��*/
		check.x=300;
		check.y=75;
		check.w=check.x+600;
		check.h=check.y+600;
		//setlinecolor(RGB(135, 206, 235));
		//setfillcolor(RGB(0,120,215));
		//fillrectangle(check.x, check.y,check.w, check.h);
		settextcolor(BLACK);

		settextstyle(35,0,"��Բ");
		outtextxy(check.x+40, check.y+100,"лл����ô�ÿ�������ע����~");
		settextstyle(25,0,"��Բ");
		outtextxy(check.x+240, check.y+200,"�������ǣ�");
		outtextxy(check.x+200, check.y+270,"15 ���Ժ   151210045  ������");
		//outtextxy(check.x+300, check.y+270,"");
		//outtextxy(check.x+450, check.y+270,"");
		outtextxy(check.x+200, check.y+340,"15 ���Ժ   151210048  ������");
		//outtextxy(check.x+300, check.y+340,"");
		//outtextxy(check.x+450, check.y+340,"");
		outtextxy(check.x+200, check.y+410,"15 ���Ժ   151210031  ������");
		//outtextxy(check.x+300, check.y+410,"");
		//outtextxy(check.x+450, check.y+410,"");
		//outtextxy(check.x+400, check.y+20,c_time5);
		//outtextxy(check.x+80,check.y+50,wamai_name);
		//outtextxy(check.x+300,check.y+50,c_price);		
		//outtextxy(check.x+450,check.y+50,c_money);
		while (flag)
			{
				do
				{
					FlushMouseMsgBuffer();
					m = GetMouseMsg();
					//�Ƿ�ѡ��"����"��ť
			if (inrect(m.x,m.y,d))
			{
				//mouse(d,255,255,255,30,5,"back");
				setlinecolor(RGB(255,255,255));
				rectangle(d.x, d.y, d.w, d.h);
				rectangle(d.x+3, d.y+3, d.w-3, d.h-3);
				settextstyle(25,0,"����");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);//�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ
				outtextxy(d.x +30,d.y + 5,"back");
			}
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				//setfillcolor(RGB(0,120,215));
				//fillrectangle(d.x, d.y, d.w, d.h);
				setlocale(LC_ALL,"chs");//����������룬��ͷ�ļ�locale.h��
				settextstyle(25,0,"����");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*�������ֺ���ĺ�ɫ��ʹ���ֺ�ı���ΪͼƬ*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
				}while(m.uMsg != WM_LBUTTONDOWN);
					if (inrect(m.x,m.y, d))
						{
							flag = 0;
							face();        //������ҳ��
						}
		}

}