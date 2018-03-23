#include"total.h"
void bill()
{
		Rect d,check;
		FILE *fp;
		IMAGE about,img_hind,img_remain,img_price;
		MOUSEMSG m;
		float wamai_price=0,Mmoney=0;
		char wamai_name[15],name[15],c_price[15],c_money[15],c_time1[50],c_time2[50],c_time3[50],c_time4[50],c_time5[50];
		int flag = 1,i=0;
		/*时间相关申明*/
		time_t timer= time(NULL);     
		struct tm *tblock= localtime(&timer);    

	
		initgraph(WIN_WIDTH, WIN_HEIGHT);
		setbkmode(TRANSPARENT);//开启背景透明模式
		loadimage(&about, "pic/钱包背景.jpg",WIN_WIDTH, WIN_HEIGHT);	// 读取图片到 about 对象中
		putimage(0, 0, &about);
		if((fp=fopen("data/账单.txt","a+"))==0)
		{
		MessageBox(0,TEXT("ERROR:cannot open the 账单 file!"),TEXT("我叫对话框"),MB_OK);
		exit(1);
		}
		rewind(fp);
		//日期时间  事件  金额变动  账户余额
		
		/*关于字体*/
		settextstyle(25,0,"宋体");
		settextcolor(RGB(0,0,0));
		setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
		/*返回键所在位置*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(BLACK);
		outtextxy(d.x+30, d.y + 5, "back");
		/*账单所在位置*/
		check.x=300;
		check.y=75;
		check.w=check.x+600;
		check.h=check.y+600;
		//setlinecolor(RGB(135, 206, 235));
		setfillcolor(RGB(0,120,215));
		fillrectangle(check.x, check.y,check.w, check.h);
		//for(i=0;i<=8||!(feof(fp));i++)
		while(!feof(fp))
		{
		fscanf(fp,"%s%s%s%s%s%s%s%s         ",c_time1,c_time2,c_time3,c_time4,c_time5,wamai_name,c_price,c_money);
		//sprintf(c_price,"%4.3f",wamai_price);
		//sprintf(c_money,"%4.3f",Mmoney);
		//sprintf(c_time,"%4.3f",tblock);
		settextcolor(BLACK);
		outtextxy(check.x+30, check.y+20+i*60,c_time1);
		outtextxy(check.x+100, check.y+20+i*60,c_time2);
		outtextxy(check.x+170, check.y+20+i*60,c_time3);
		outtextxy(check.x+240, check.y+20+i*60,c_time4);
		outtextxy(check.x+400, check.y+20+i*60,c_time5);

		outtextxy(check.x+80,check.y+50+i*60,wamai_name);
		outtextxy(check.x+300,check.y+50+i*60,c_price);		
		outtextxy(check.x+450,check.y+50+i*60,c_money);
		i++;
		}
		while (flag)
			{
				do
				{
					FlushMouseMsgBuffer();
					m = GetMouseMsg();
					//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
			{
				//mouse(d,255,255,255,30,5,"back");
				setlinecolor(RGB(255,255,255));
				rectangle(d.x, d.y, d.w, d.h);
				rectangle(d.x+3, d.y+3, d.w-3, d.h-3);
				settextstyle(25,0,"宋体");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);//处理文字后面的黑色，使文字后的背景为图片
				outtextxy(d.x +30,d.y + 5,"back");
			}
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				//setfillcolor(RGB(0,120,215));
				//fillrectangle(d.x, d.y, d.w, d.h);
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(25,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
				}while(m.uMsg != WM_LBUTTONDOWN);
					if (inrect(m.x,m.y, d))
						{
							flag = 0;
							fclose(fp);
							Mwallet ();        //返回主页面
						}
		}

}