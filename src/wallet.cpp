#include"total.h"


void Mwallet()
{
	/*数据运算与储存*/
	float remain=0,add=0,wamai_price=0;
	char c_total[50],c_money[50],c_price[50],c_time[50],c_Mmoney[50];
	char input[50],wamai_name[15];
	int flag1=1, flag2=1;
	FILE *fp;
	/*时间相关申明*/
	time_t timer= time(NULL);     
	struct tm *tblock= localtime(&timer);    

			if((fp=fopen("data/账单.txt","a"))==0)
		{
		MessageBox(0,TEXT("ERROR:cannot open the 账单 file!"),TEXT("我叫对话框"),MB_OK);
		exit(1);
		}

	sprintf(c_total,"%4.3f",add);
	sprintf(c_money,"%4.3f",Mmoney);

/*
		//日期时间  事件  金额变动  账户余额
		fscanf(fp,"%s%s%s%s%s消费:%s-￥%f￥%f\n",c_time,wamai_name,&wamai_price,&Mmoney);
		sprintf(c_price,"%4.3f",wamai_price);
		//sprintf(c_time,"%4.3f",tblock);
		sprintf(c_Mmoney,"%4.3f",Mmoney);*/
		
	loop:/*界面*/
	Rect d_price,d_remain,d_total,d1,d2,d3,d4,d,d_hind,d_remain1;
		IMAGE about,img_hind,img_remain,img_price;
		MOUSEMSG m;
		int flag = 1;
		initgraph(WIN_WIDTH, WIN_HEIGHT);
		setbkmode(TRANSPARENT);//开启背景透明模式
		loadimage(&about, "pic/钱包背景.jpg",WIN_WIDTH, WIN_HEIGHT);	// 读取图片到 about 对象中
		putimage(0, 0, &about);
		/*关于字体*/
		settextstyle(30,0,"宋体");
		settextcolor(RGB(0,0,0));
		setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
		/*返回键所在位置*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(RGB(65, 105, 225));
		outtextxy(d.x+30, d.y + 5, "back");
		if(flag1)
		{
		/*余额显示*/
		d_price.x = 100;
		d_price.y = 50;
		d_price.w = d_price.x + 400;
		d_price.h = d_price.y + 400;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d_price.x, d_price.y, d_price.w, d_price.h); 
		setfillcolor(RGB(0,120,215));
		fillrectangle(d_price.x, d_price.y, d_price.w, d_price.h);
		settextcolor(WHITE);
		outtextxy(d_price.x+30, d_price.y + 50,"亲爱的，");
		outtextxy(d_price.x+70, d_price.y + 130,"您当前的账户余额为：");
		outtextxy(d_price.x+120, d_price.y + 210,"￥");
		outtextxy(d_price.x+145, d_price.y + 210,c_money);
		/*账单显示*/
		d_remain.x = 525;
		d_remain.y = 50;
		d_remain.w =d_remain.x + 425;
		d_remain.h = d_remain.y + 200;
		setfillcolor(RGB(0,120,215));
		fillrectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h);
		/*账单1显示*/
		d_remain1.x = 950;
		d_remain1.y = 85;
		d_remain1.w =d_remain1.x + 150;
		d_remain1.h = d_remain1.y + 165;
		setfillcolor(RGB(0,120,215));
		fillrectangle(d_remain1.x, d_remain1.y, d_remain1.w, d_remain1.h);
		/*hind键所在位置*/
		d_hind.x = 950;
		d_hind.y = 50;
		d_hind.w = d_hind.x + 50;
		d_hind.h = d_hind.y + 35;
		//setlinecolor(RGB(135, 206, 235));
		rectangle(d_hind.x, d_hind.y, d_hind.w,d_hind.h); 
		loadimage(&img_hind, "pic/眼睛睁.jpg",50,35,true);
		putimage(d_hind.x,d_hind.y, &img_hind);
		settextcolor(RGB(65, 105, 225));
		}
		else
		{
		/*余额显示*/
			d_price.x = 100;
			d_price.y = 50;
			d_price.w = d_price.x + 400;
			d_price.h = d_price.y + 400;
			//setlinecolor(RGB(135, 206, 235));
			//rectangle(d_price.x, d_price.y, d_price.w, d_price.h); 
			setfillcolor(RGB(0,120,215));
			fillrectangle(d_price.x, d_price.y, d_price.w, d_price.h);
			settextcolor(WHITE);

			outtextxy(d_price.x+30, d_price.y + 50,"亲爱的，");
			outtextxy(d_price.x+70, d_price.y + 130,"您当前的账户余额为：");
			outtextxy(d_price.x+120, d_price.y + 210,"￥");
			outtextxy(d_price.x+145, d_price.y + 210,"*****");
			/*账单显示*/
			d_remain.x = 525;
			d_remain.y = 50;
			d_remain.w =d_remain.x + 425;
			d_remain.h = d_remain.y + 200;
			setfillcolor(RGB(0,120,215));
			fillrectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h);
			/*账单1显示*/
			d_remain1.x = 950;
			d_remain1.y = 85;
			d_remain1.w =d_remain1.x + 150;
			d_remain1.h = d_remain1.y + 165;
			setfillcolor(RGB(0,120,215));
			fillrectangle(d_remain1.x, d_remain1.y, d_remain1.w, d_remain1.h);

			/*上次充值金额显示*/
			d_total.x = 100;
			d_total.y = 475;
			d_total.w =d_total.x + 400;
			d_total.h = d_total.y + 175;
			//setlinecolor(RGB(135, 206, 235));
			//rectangle(d_total.x,d_total.y,d_total.w,d_total.h); 
			//settextcolor(RGB(65, 105, 225));
			setfillcolor(RGB(0,120,215));
			fillrectangle(d_total.x,d_total.y,d_total.w,d_total.h);
			settextcolor(WHITE);
			outtextxy(d_total.x+30, d_total.y + 25,"最近充值金额：");
			outtextxy(d_total.x+120, d_total.y + 80,"￥");
			outtextxy(d_total.x+145, d_total.y + 80,"*****");
			/*hind键所在位置*/
			d_hind.x = 950;
			d_hind.y = 50;
			d_hind.w = d_hind.x + 50;
			d_hind.h = d_hind.y + 35;
			//setlinecolor(RGB(135, 206, 235));
			rectangle(d_hind.x, d_hind.y, d_hind.w,d_hind.h); 
			loadimage(&img_hind, "pic/眼睛.jpg",50,35,true);
			putimage(d_hind.x,d_hind.y, &img_hind);
			settextcolor(RGB(65, 105, 225));
		}



		/*上次充值金额显示*/
		d_total.x = 100;
		d_total.y = 475;
		d_total.w =d_total.x + 400;
		d_total.h = d_total.y + 175;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d_total.x,d_total.y,d_total.w,d_total.h); 
		//settextcolor(RGB(65, 105, 225));
		setfillcolor(RGB(0,120,215));
		fillrectangle(d_total.x,d_total.y,d_total.w,d_total.h);
		settextcolor(WHITE);
		outtextxy(d_total.x+30, d_total.y + 25,"最近充值金额：");
		outtextxy(d_total.x+120, d_total.y + 80,"￥");
		outtextxy(d_total.x+145, d_total.y + 80,c_total);
		/*辅助色块1*/
		d1.x = 525;
		d1.y = 275;
		d1.w =d1.x + 175;
		d1.h = d1.y + 375;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d1.x,d1.y,d1.w,d1.h); 
		//settextcolor(RGB(65, 105, 225));
		setfillcolor(RGB(0,120,215));
		fillrectangle(d1.x,d1.y,d1.w,d1.h);
		settextcolor(WHITE);
		//outtextxy(d1.x+30,d1.y + 5, "color1");
		/*辅助色块2*/
		d2.x = 725;
		d2.y = 275;
		d2.w =d2.x + 175;
		d2.h = d2.y + 375;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d2.x,d2.y,d2.w,d2.h); 
		//settextcolor(RGB(65, 105, 225));
		setfillcolor(RGB(0,120,215));
		fillrectangle(d2.x,d2.y,d2.w,d2.h);
		settextcolor(WHITE);
		//outtextxy(d2.x+30,d2.y + 5, "color2");
		/*我是 账单*/
		d3.x = 925;
		d3.y = 275;
		d3.w =d3.x + 175;
		d3.h = d3.y + 175;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d3.x,d3.y,d3.w,d3.h); 
		//settextcolor(RGB(65, 105, 225));
		setfillcolor(RGB(0,120,215));
		fillrectangle(d3.x,d3.y,d3.w,d3.h);
		settextcolor(WHITE);
		//outtextxy(d3.x+30,d3.y + 5, "我是 账单");
		outtextxy(d3.x+20,d3.y + 70, "我是 账单");
		/*点我 充呀*/
		d4.x = 925;
		d4.y = 475;
		d4.w =d4.x + 175;
		d4.h = d4.y + 175;
		//setlinecolor(RGB(135, 206, 235));
		//rectangle(d4.x,d4.y,d4.w,d4.h); 
		//settextcolor(RGB(65, 105, 225));
		setfillcolor(RGB(0,120,215));
		fillrectangle(d4.x,d4.y,d4.w,d4.h);
		settextcolor(WHITE);
		outtextxy(d4.x+20,d4.y + 70, "点我 充呀!");
		if(Mmoney==0)
	{
		//MessageBox(0,TEXT(""),TEXT("我叫对话框"),MB_OK);
		InputBox(input,4, "没钱还想吃饭，充吧");
		sscanf(input,"%f",&add);
		Mmoney=Mmoney+add;
			fprintf(fp,"\n%-15s 充值 +￥%-12.1f￥%-12.1f",asctime(tblock),add,Mmoney);
			fclose(fp);
		sprintf(c_total,"%4.3f",add);
		sprintf(c_money,"%4.3f",Mmoney);
		goto loop;
	}
		while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//是否选中"充值"按钮
			if (inrect(m.x,m.y,d4))
				mouse(d4,255,255,255,20,70,"点我 充呀!");
		
			else
			{
				setfillcolor(RGB(0,120,215));
				fillrectangle(d4.x,d4.y,d4.w,d4.h);
				settextcolor(WHITE);
				outtextxy(d4.x+20,d4.y + 70, "点我 充呀!");
			}
			/*是否选中“账单”按钮*/
			if (inrect(m.x,m.y,d3))
				mouse(d3,255,255,255,20,70,"我是 账单");
		
			else
			{
				setfillcolor(RGB(0,120,215));
				fillrectangle(d3.x,d3.y,d3.w,d3.h);
				settextcolor(WHITE);
				outtextxy(d3.x+20,d3.y + 70, "我是 账单");
			}
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,255,255,255,30,5,"back");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				//rectangle(d.x, d.y, d.w, d.h);
				setfillcolor(RGB(0,120,215));
				fillrectangle(d.x, d.y, d.w, d.h);
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		/*点击返回*/
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			face();        //返回主页面
		}
		/*点击hind键*/
		if (inrect(m.x,m.y,d_hind))
		{
			if(flag1)
				flag1=0;
			else
				flag1=1;
			goto loop;

			flag = 0;
		}	
			
		//点击充值
		if (inrect(m.x,m.y, d4))
		{
			flag = 0;
			InputBox(input,4, "想充多少呢？");     //点击充值
			sscanf(input,"%f",&add);
			Mmoney+=add;	


			fprintf(fp,"\n%-15s 充值 +￥%-12.1f￥%-12.1f",asctime(tblock),add,Mmoney);
			fclose(fp);
			sprintf(c_total,"%4.3f",add);
			sprintf(c_money,"%4.3f",Mmoney);
			goto loop;
		}
		//点击账单
		if (inrect(m.x,m.y, d3))
		{
			flag = 0;
			bill();
		}
		
		
}

}