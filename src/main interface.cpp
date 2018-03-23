#include "total.h"
extern void mouse(Rect m,int R,int G,int B,int l,int i,char*str)//画按钮
{

	            //setfillcolor(RGB(R, G, B));
				//fillrectangle(m.x, m.y, m.w, m.h);
				setlinecolor(RGB(R,G,B));
				rectangle(m.x, m.y, m.w, m.h);
				rectangle(m.x+3, m.y+3, m.w-3, m.h-3);
				settextstyle(30,0,"宋体");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);//处理文字后面的黑色，使文字后的背景为图片
				outtextxy(m.x +l,m.y + i, str);
}

extern int  inrect(int x,int y,Rect r)//判断鼠标位置是否在图片内
{
	if((x >= r.x&&x <= r.w) && (y >= r.y&&y <= r.h))
		return 1;
	return 0;
}

extern void face()
{

	IMAGE ab,img_take;
	Rect d,wai,wallet,sport,d_about;
	MOUSEMSG m;
	int flag = 1,flag2 = 1;
	loadimage(&ab, "pic/main.jpg",WIN_WIDTH, WIN_HEIGHT);	// 读取图片到 about 对象中
	putimage(0, 0, &ab);
	
	/*关于字体*/
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	/*返回键所在位置*/
	d.x = 1000;
	d.y = 50;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+25, d.y + 3, "exit");
	/*about键所在位置*/
	d_about.x = 1000;
	d_about.y = 100;
	d_about.w = d_about.x + 100;
	d_about.h = d_about.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d_about.x, d_about.y,d_about.w, d_about.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d_about.x+25, d_about.y + 3, "about");
	/*外卖键所在位置*/
	wai.x=300;
	wai.y=75;
	wai.w=wai.x+600;
	wai.h=wai.y+390;
	//setlinecolor(RGB(135, 206, 235));
	setfillcolor(RGB(0,170,0));
	fillrectangle(wai.x, wai.y,wai.w, wai.h);
	outtextxy(wai.x +250, wai.y+ 50, "Mtake-out");
	/*运动键所在位置*/
	sport.x=300;
	sport.y=475;
	sport.w=sport.x+390;
	sport.h=sport.y+150;
	//setlinecolor(RGB(135, 206, 235));
	//rectangle(sport.x, sport.y,sport.w, sport.h);
	setfillcolor(RGB(0,120,215));
	fillrectangle(sport.x, sport.y,sport.w, sport.h);
	settextcolor(RGB(65, 105, 225));
	outtextxy(sport.x+ 150, sport.y+ 50, "Msport");
	/*钱包键所在位置*/
	wallet.x=700;
	wallet.y=475;
	wallet.w=wallet.x+200;
	wallet.h=wallet.y+150;
	//setlinecolor(RGB(135, 206, 235));
	//rectangle(wallet.x,wallet.y,wallet.w, wallet.h);
	setfillcolor(RGB(118,6,121));
	fillrectangle(wallet.x,wallet.y,wallet.w, wallet.h);
	settextcolor(RGB(65, 105, 225));
	outtextxy(wallet.x+50, wallet.y+ 50, "Mwallet");
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,255,255,255,25,3,"exit");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(34,139,34));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+25, d.y + 3, "exit");
			}
			//是否选中"about"按钮
			if (inrect(m.x,m.y,d_about))
				mouse(d_about,255,255,255,25,3,"about");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d_about.x,d_about.y, d_about.w,d_about.h);
				settextcolor(RGB(34,139,34));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d_about.x+25, d_about.y + 3, "about");
			}
			//是否选中"外卖"按钮
			if (inrect(m.x,m.y,wai))
				mouse(wai,255,255,255,250,50,"Mtake-out");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				setfillcolor(RGB(0,170,0));
				fillrectangle(wai.x, wai.y,wai.w, wai.h);
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(wai.x +250, wai.y+ 50, "Mtake-out");
			}
			//是否选中"运动"按钮
			if (inrect(m.x,m.y,sport))
				mouse(sport,255,255,255,150,50,"Msport");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				//rectangle(sport.x,sport.y,sport.w,sport.h);
				setfillcolor(RGB(0,120,215));
				fillrectangle(sport.x, sport.y,sport.w, sport.h);
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(sport.x+ 150, sport.y+ 50, "Msport");
			}
			/*是否选中“钱包”*/
			if (inrect(m.x,m.y,wallet))
				mouse(wallet,255,255,255,50,50,"Mwallet");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				//rectangle(wallet.x,wallet.y,wallet.w,wallet.h);
				setfillcolor(RGB(118,6,121));
				fillrectangle(wallet.x,wallet.y,wallet.w, wallet.h);
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(wallet.x+50, wallet.y+ 50, "Mwallet");
			}
		} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			exit(1);         //返回主页面
		}
		if (inrect(m.x,m.y, d_about))
		{
			flag = 0;
			about();         //about界面
		}
		if (inrect(m.x,m.y, wai))
		{
			flag = 0;
		    Mtakeout ();  //调用外卖函数 
		}
		if (inrect(m.x,m.y, sport))
		{
			flag = 0;
			Msport();		//调用运动函数	    
		}
		if (inrect(m.x,m.y,wallet))
		{
			flag = 0;
			Mwallet();	    //调用钱包函数   
		}
	}
}
			
	
	