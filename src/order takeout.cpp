#include"total.h"

void jiedan (food *choice,int stime)
{
		IMAGE about;
		MOUSEMSG m;
		Rect d,d_time;
		int flag = 1;
		int ttime;
		char str[30];

		setlocale(LC_ALL,"chs");//解决中文乱码，函数在头文件locale.h中

		setbkmode(TRANSPARENT);//开启背景透明模式												
		loadimage(&about, "pic/厨师.jpg",WIN_WIDTH-430, WIN_HEIGHT-200);	
		putimage(80, 150, &about);

		/*返回键所在位置*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(RGB(65, 105, 225));
		outtextxy(d.x+30, d.y + 5, "back");
	
		/*提示语*/
		d_time.x = 450;
		d_time.y = 390;
		settextstyle(30,0,"宋体");
		settextcolor(RED);
		outtextxy(d_time.x+70, d_time.y + 5, "您点的外卖是 ");
		outtextxy(d_time.x+80, d_time.y + 45, choice->name);
		outtextxy(d_time.x+90, d_time.y + 85,"卖家已接单，");
		ttime=choice->time+stime;
		sprintf(str,"预计%d分钟后送达!",ttime);
		outtextxy(d_time.x+65, d_time.y + 125,str);



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

				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}
		} while (m.uMsg != WM_LBUTTONDOWN);


	if (inrect(m.x,m.y, d))
		{
		Mtakeout();     //返回上个界面
		flag=0;
		}
	}



}



extern void Mtakeout()

{
	setlocale(LC_ALL,"chs");//解决中文乱码，函数在头文件locale.h中

	int i;
	int flag = 1;
	food waimai[4]={0};
	FILE *fp;
	if((fp=fopen("data/外卖数据.txt","r"))==0)
	{
		MessageBox(0,TEXT("ERROR:cannot open the 外卖数据 file!"),TEXT("我叫对话框"),MB_OK);
		exit(1);
	}
	for(i=0;i<4;i++)
	{
		fscanf(fp,"%s%f%d%hd",waimai[i].name,&waimai[i].price,&waimai[i].calorie,&waimai[i].time);
	}
	fclose(fp);



	//时间有关变量声明

	time_t timer= time(NULL);     
	struct tm *tblock= localtime(&timer);    

	int hour =tblock->tm_hour;
	int stime;										//  time of sending an out-take(min)
	char *timetext;								//要输的文字


	//其他变量声明
		Rect d_time,d_remain,d_total,d1,d2,d3,d4,d;
		IMAGE about,f1,f2,f3,f4;
		MOUSEMSG m;

		
		setbkmode(TRANSPARENT);//开启背景透明模式												
		loadimage(&about, "pic/外卖背景.jpg",WIN_WIDTH, WIN_HEIGHT);	// 读取图片到 about 对象中
		loadimage(&f1, "pic/黄焖鸡米饭.jpg",300, 200);
		loadimage(&f2, "pic/黑椒牛肉炒饭.jpg",300, 200);
		loadimage(&f3, "pic/烤肉饭.jpg",300, 200);
		loadimage(&f4, "pic/汉堡套餐.jpg",300, 200);
		putimage(0, 0, &about);


	/*时间显示*/

	timer= time(NULL);     
	tblock= localtime(&timer); 


	if((hour>=13&&hour<16)||hour>=21)
	{
		timetext="太迟了惹，卖家已经下班鸟";

	}
	else if(hour<11||hour==16||hour==20)
	{
		timetext="现在这个时段卖家闲得很";
		stime=8;
	}
	else
	{
		timetext="现在这个时段略有点忙啊";
		stime=15;
	}
	

		d_time.x = 100;
		d_time.y = 50;
		d_time.w = d_time.x + 400;
		d_time.h = d_time.y + 400;
		settextstyle(30,0,"幼圆");
		settextcolor(RGB(65, 105, 225));
		outtextxy(d_time.x+30, d_time.y + 5, "Local time is: ");
		outtextxy(d_time.x+40, d_time.y + 45, asctime(tblock));	//实现printf("Local time is: %s\n", asctime(tblock));功能 
		outtextxy(d_time.x+500, d_time.y + 45, timetext);
	
		
		
		/*返回键所在位置*/
		d.x = 1000;
		d.y = 50;
		d.w = d.x + 100;
		d.h = d.y + 35;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d.x, d.y, d.w, d.h); 
		settextcolor(RGB(65, 105, 225));
		settextstyle(30,0,"宋体");
		outtextxy(d.x+30, d.y + 5, "back");
	




		
		/*点单按钮位置*/
		d_remain.x = 1000;
		d_remain.y = 600;
		d_remain.w =d_remain.x + 120;
		d_remain.h = d_remain.y + 60;
		setlinecolor(RGB(135, 206, 235));
		rectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h); 
		settextcolor(RGB(65, 105, 225));
		outtextxy(d_remain.x+30, d_remain.y + 15, "下单");


		char  s[4][30];
		for(i=0;i<4;i++)
			sprintf(s[i],"%d.%s    ￥%.1f",i+1,waimai[i].name ,waimai[i].price);
		


		/*图片1*/
		d1.x = 80;
		d1.y = 200;
		d1.w =d1.x + 300;
		d1.h = d1.y +200;
		putimage(d1.x, d1.y , &f1);

		settextstyle(20,0,"宋体");
		settextcolor(BLACK);
		outtextxy(d1.x+30,d1.y - 25, s[0] );
		/*图片2*/
		d2.x = 500;
		d2.y = 200;
		d2.w =d2.x + 300;
		d2.h = d2.y +200;
		putimage(d2.x, d2.y , &f2);

		settextstyle(20,0,"宋体");
		settextcolor(BLACK);
		outtextxy(d2.x+30,d2.y - 25, s[1]);
		/*图片3*/
		d3.x = 80;
		d3.y = 450;
		d3.w =d3.x + 300;
		d3.h = d3.y + 200;
		putimage(d3.x, d3.y , &f3);
		settextstyle(20,0,"宋体");
		settextcolor(BLACK);
		outtextxy(d3.x+30,d3.y - 25, s[2]);
		/*图片4*/
		d4.x =500;
		d4.y = 450;
		d4.w =d4.x + 300;
		d4.h = d4.y + 200;
		putimage(d4.x, d4.y , &f4);
		settextstyle(20,0,"宋体");
		settextcolor(BLACK);
		outtextxy(d4.x+30,d4.y - 25,s[3]);
		while (flag)
	{
			//变色功能
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

				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d.x+30, d.y + 5, "back");
			}

			//是否选中"点单"按钮
			if (inrect(m.x,m.y,d_remain))
			
				mouse(d_remain,34,139,34,30,15,"下单");																		
		
			else
			{
				setlinecolor(RGB(135, 206, 235));
				rectangle(d_remain.x, d_remain.y, d_remain.w, d_remain.h);
				

				settextstyle(30,0,"宋体");
				settextcolor(BLACK);
				setbkmode(TRANSPARENT);/*处理文字后面的黑色，使文字后的背景为图片*/
				outtextxy(d_remain.x+30, d_remain.y + 15, "下单");
			}


		} while (m.uMsg != WM_LBUTTONDOWN);


		if (inrect(m.x,m.y, d))
			face();     //返回主页面

		if (inrect(m.x,m.y, d_remain))
		{	
			if((hour>=13&&hour<16)||hour>=21)
				{
					MessageBox(0,TEXT("都跟你说了，卖家已经下班了！（嫌弃脸）"),TEXT("我叫对话框"),MB_OK);
					face();
				}
			else
			{
			char input[2];
			loop:InputBox(input,2, "选择你要点的外卖");
			int choice=input[0]-'1';
//	其实可以用sscanf(input, "%d", &x);
			

			
			switch(choice)
			{
				default:MessageBox(0,TEXT("INPUT ERROR！（再调皮就打你了）"),TEXT("我叫对话框"),MB_OK);goto loop;break;
				case 0:
				case 1:
				case 2:
				case 3:
					
			if(Mmoney<waimai[choice].price)
			{
				MessageBox(0,TEXT("账户余额不足！(快去充值吧孩子)"),TEXT("我叫对话框"),MB_OK);
				Mwallet();
			
			}
			Mmoney-=waimai[choice].price;
			Mcalorie+=waimai[choice].calorie;

			if((fp=fopen("data/账单.txt","a"))==0)
			{
			MessageBox(0,TEXT("ERROR:cannot open the 账单 file!"),TEXT("我叫对话框"),MB_OK);
			exit(1);
			}
			// 格式为：  日期时间  事件  金额变动  账户余额
			fprintf(fp,"\n%-15s消费:%-15s-￥%-12.1f￥%-12.1f",asctime(tblock),waimai[choice].name,waimai[choice].price,Mmoney);
			fclose(fp);
			jiedan(&waimai[choice],stime);													
			}			
			flag=0;
			}
		}
	}		
}
