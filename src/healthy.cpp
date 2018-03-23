#include"total.h"

typedef struct HEALTHY{
	char name[10];
	int calorie;//(kc/h)为单位
}health;

void fitness_equipment()
{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/fitness_equipment.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"400kc/h");
	outtextxy(30,50,"注意事项：避免用力过大造成肌肉拉伤");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //返回主页面
		}
	}
}
void running()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/running.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"600kc/h");
	outtextxy(30,50,"注意事项：不要低头，双眼注视前方");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //返回主页面
		}
	}
}
void fast_walking()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/fast_walking.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"500kc/h");
	outtextxy(30,50,"注意事项：提前热身，不要间断");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //返回主页面
		}
	}
}
void bicycle()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/bicycle.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"500kc/h");
	outtextxy(30,50,"注意事项：调整车座");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //返回主页面
		}
	}
}
void swimming()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/swimming.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"400kc/h");
	outtextxy(30,50,"注意事项：时间长短，忌饭前饭后游泳");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();        //返回主页面
		}
	}
}
void basketball()
	{
	initgraph(1200,700);
	IMAGE img;
	MOUSEMSG m;
	int flag = 1;
	setlocale(LC_ALL,"chs");//解决中文乱码
	loadimage(&img, "pic/basketball.jpg",1200,700,true);
	putimage(0,0,&img);
	settextstyle(30,0,"宋体");
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	outtextxy(30,2,"每小时消耗calorie：");
	outtextxy(400,2,"600kc/h");
	outtextxy(30,50,"注意事项：热身，饭后不宜");
	/*返回键所在位置*/
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
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,34,139,34,30,5,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			Msport();         //返回主页面
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
	setlocale(LC_ALL,"chs");//解决中文乱码
	int i=0;
	FILE *fp;
	health sport[6];

	if((fp=fopen("data/健身数据.txt","r"))==NULL)
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
	loadimage(&img, "pic/外卖背景.jpg",1200,700,true);
	putimage(0,0,&img);
	setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
	settextstyle(20,0,"宋体");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	Rect d,qc,yy,kp,kz,lq,dc,l;
	/*健身器材键所在位置*/
	qc.x=10;
	qc.y=10;
	qc.w=qc.x+386;
	qc.h=qc.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(qc.x, qc.y,qc.w, qc.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(10,10,&img);
	outtextxy(qc.x+130, qc.y+120, "健身器材");
	/*快跑键所在位置*/
	kp.x=406;
	kp.y=10;
	kp.w=kp.x+388;
	kp.h=kp.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(kp.x, kp.y,kp.w, kp.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",388,250,true);
	putimage(406,10,&img);
	outtextxy(kp.x+150, kp.y+120, "跑步");
	/*快走键所在位置*/
	kz.x=804;
	kz.y=10;
	kz.w=kz.x+386;
	kz.h=kz.y+250;
	setfillcolor(RGB(4,39,255));
	fillrectangle(kz.x, kz.y, kz.w, kz.h);
	settextcolor(RGB(65, 105, 225));
	//loadimage(&img, "blue.jpg",386,250,true);
	//putimage(804,10,&img);
	outtextxy(kz.x+150, kz.y+120, "快走");
	/*单车键所在位置*/
	dc.x=10;
	dc.y=265;
	dc.w=dc.x+386;
	dc.h=dc.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(dc.x, dc.y,dc.w, dc.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(10,265,&img);
	outtextxy(dc.x+150, dc.y+120, "单车");
	/*游泳键所在位置*/
	yy.x=406;
	yy.y=265;
	yy.w=yy.x+388;
	yy.h=yy.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(yy.x, yy.y,yy.w, yy.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",388,250,true);
	putimage(406,265,&img);
	outtextxy(yy.x+150, yy.y+120, "游泳");
	/*篮球键所在位置*/
	lq.x=804;
	lq.y=265;
	lq.w=lq.x+386;
	lq.h=lq.y+250;
	setlinecolor(RGB(135, 206, 235));
	rectangle(lq.x, lq.y,lq.w, lq.h);
	settextcolor(RGB(65, 105, 225));
	loadimage(&img, "pic/blue.jpg",386,250,true);
	putimage(804,265,&img);
	outtextxy(lq.x+150, lq.y+120, "篮球");
	/*无关紧要栏*/
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
	setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
	settextstyle(40,0,"正楷");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	sprintf(st,"亲爱的，今天你多摄入的calorie为%dkc哦，赶快去运动吧！",Mcalorie);
	outtextxy(100, 595, st);
	/*返回键所在位置*/
	setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
	settextstyle(20,0,"宋体");
	settextcolor(RED);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	d.x = 1090;
	d.y = 10;
	d.w = d.x + 100;
	d.h = d.y + 35;
	setlinecolor(RGB(135, 206, 235));
	rectangle(d.x, d.y, d.w, d.h); 
	settextcolor(RGB(65, 105, 225));
	outtextxy(d.x+30, d.y + 5, "back");
	setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
	settextstyle(30,0,"行楷");
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	while (flag)
	{
		do
		{
			FlushMouseMsgBuffer();
			m = GetMouseMsg();
			//是否选中"返回"按钮
			if (inrect(m.x,m.y,d))
				mouse(d,255,255,255,1120,15,"back");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d.x, d.y, d.w, d.h);
				settextcolor(RGB(65, 105, 225));
				setlocale(LC_ALL,"chs");//解决中文乱码，在头文件locale.h中
				settextstyle(30,0,"行楷");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
			//是否选中"健身器材"按钮
			if (inrect(m.x,m.y,qc))
				mouse(qc,255,255,255,130,120,"健身器材");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(qc.x, qc.y, qc.w, qc.h);
				loadimage(&img, "pic/blue.jpg",386,250,true);
				putimage(10,10,&img);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(qc.x+130, qc.y+120, "健身器材");
			}
			//是否选中"跑步"按钮
			if (inrect(m.x,m.y,kp))
				mouse(kp,255,255,255,150,120,"跑步");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(kp.x, kp.y, kp.w, kp.h);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				loadimage(&img, "pic/blue.jpg",388,250,true);
				putimage(406,10,&img);
				outtextxy(kp.x+150, kp.y+120, "跑步");
			}
			//是否选中"快走"按钮
			if (inrect(m.x,m.y,kz))
				mouse(kz,255,255,255,150,120,"快走");
		
			else
			{
				//setlinecolor(RGB(135, 206, 235));
				//rectangle(kz.x, kz.y, kz.w, kz.h);
				setfillcolor(RGB(4,39,255));
				fillrectangle(kz.x, kz.y, kz.w, kz.h);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				//loadimage(&img, "blue.jpg",386,250,true);
	            ////putimage(804,10,&img);
				outtextxy(kz.x +150,kz.y+120, "快走");
			}
			//是否选中"单车"按钮
			if (inrect(m.x,m.y,dc))
				mouse(dc,255,255,255,150,120,"单车");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(dc.x, dc.y, dc.w, dc.h);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				loadimage(&img, "pic/blue.jpg",386,250,true);
	            putimage(10,265,&img);
				outtextxy(dc.x +150,dc.y+ 120, "单车");
			}
			//是否选中"游泳"按钮
			if (inrect(m.x,m.y,yy))
				mouse(yy,255,255,255,150,120,"游泳");
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(yy.x, yy.y, yy.w, yy.h);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
	            loadimage(&img, "pic/blue.jpg",388,250,true);
	            putimage(406,265,&img);
				outtextxy(yy.x +150,yy.y+120, "游泳");
			}
			//是否选中"篮球"按钮
			if (inrect(m.x,m.y,lq))
				mouse(lq,255,255,255,150,120,"篮球");

			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(lq.x, lq.y, lq.w, lq.h);
				settextstyle(30,0,"行楷");
				settextcolor(WHITE);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				loadimage(&img, "blue.jpg",386,250,true);
	            putimage(804,265,&img);
				outtextxy(lq.x +150,lq.y+120, "篮球");
			}
			} while (m.uMsg != WM_LBUTTONDOWN);
		if (inrect(m.x,m.y, d))
		{
			flag = 0;
			face();         //返回主页面
		}
		if (inrect(m.x,m.y, qc))
		{
			flag = 0;
			fitness_equipment();         //调用函数fitness_equipment()
		}
		if (inrect(m.x,m.y, kp))
		{
			flag = 0;
			running();         //调用函数running()
		}
		if (inrect(m.x,m.y, kz))
		{
			flag = 0;
			fast_walking();         //调用函数fast_walking()
		}
		if (inrect(m.x,m.y, dc))
		{
			flag = 0;
			bicycle();         //调用函数bicycle()
		}
		if (inrect(m.x,m.y, yy))
		{
			flag = 0;
			swimming();         //调用函数swimming()
		}
		if (inrect(m.x,m.y, lq))
		{
			flag = 0;
			basketball();         //调用函数basketball()
		}
	}
}
