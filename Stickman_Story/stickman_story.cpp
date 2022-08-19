#include<graphics.h>

// stickman open legs with rose

void stickman_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);

	
	}
	
}

// stickman close legs with rose

void stickman_close(int speed,int color)
{	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);


	}
	
	
}

// stickwomen open legs 

void stickwomen_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

//stickman with rose
void stickman_rose(int speed,int color)
{
		int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
}

// stickman rose break
void stickman_rose_break(int speed,int color)
{
		int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
    {
		line(100+i+s,360,100+i+s,350);
		line(100+s,350+i,110+s,350+i);
	}
	setcolor(LIGHTRED);
	for(int i=1,h=0;i<=10;i++,h++)
	{
		line(110+s+i,350-i,110+i+s,350+i);
	}
}
// stickwomen close legs 

void stickwomen_close(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

// stickman chat
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(-20+s,210,"I Love");
	outtextxy(-5+s,240,"You");
	
}

void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"Sorry, I love");
	outtextxy(100+s,240,"Raj");
	
}
// road

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}

// cloud
void cloud(int speed,int cloud_color)
{setcolor(LIGHTGRAY);
 int a=speed;
    int i=2;
		//up
		arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		//down
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    //left
		arc(25+5+a,65,90+10,270-10,20+i);     
	    // right  
		arc(125-5+a,65,270,90,20+i);              
		
	
	setfillstyle(1,cloud_color);
	floodfill(50+a,75,LIGHTGRAY);
}

// rain 

void rain(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

void rose_fall(int speed,int height_speed)
{
	int s=speed;
	int hf=height_speed;
	setcolor(LIGHTGREEN);
	// rose
	for(int i=0;i<2;i++)
	line(100+i+s,360+hf,120+i+s,360+hf);
	setcolor(LIGHTRED);
	for(int i=1;i<=10;i++)
	{
		line(120+s+i,360-i+hf,120+i+s,360+i+hf);
	}

}
void subscribe()
{
	setcolor(LIGHTGREEN);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,150,"like our page and channel");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	setcolor(LIGHTBLUE);
	outtextxy(100,230,"Cool Programming Projects");
}
// driver program
int main()
{

	initwindow(700,550,"Stickman",150,50);
	int page=0;
	int sm=4;
	int sw=4;
	int n=0;
	int cs=650;
	int rf=0;
	while(n<=420)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
	// rest position
		
	    if(n<20)
	    {  	road(13);
	  		stickman_open(sm,14);
	    	stickwomen_open(280,15);
		}
		
	// stick_man walk 40
		if(n>=20&&n<=60)
		{
		road(13);
		if(n%2==0)
		stickman_open(sm,14);
		else
		stickman_close(sm,14); 
		stickwomen_open(280,15);	
		sm+=4;

		}
		
	//stick man propose 10
	
	    if(n>60&&n<=70)
	    {
	    	if(n==61)
	    	delay(300);
		    road(13);
			stickman_rose(sm,14);
			if(n==61)
			stickman_chat(sm,14,14);
			if(n==62)
			delay(4000);
	    	stickwomen_open(280,15);
	    	if(n==63)
	    	stickwomen_chat(280,15,15);
	    	if(n==64)
	    	delay(4000);
		}
		
	//stick women walk 70
	
		if(n>70&&n<=170)
		{
		    road(13);
			stickman_rose(sm,14);
			if(n%2==0)
			stickwomen_open(280+sw,15);
			else
			stickwomen_close(280+sw,15);
			sw+=4;
		}
    //cloud move 50
    
		if(n>170&&n<220)
		{
		    road(13);
			stickman_rose(sm,14);
			cloud(cs,15);
			cs-=10;
			
		}
		
	//rose break and starting rain
	
		if(n>=220&&n<=280)
		{
		    road(13);
			stickman_rose_break(sm,14);
			cloud(sm,15);
			rain(sm,2);
		}
		
	// rose fall
	
		if(n>280&&n<=330)
		{
		road(13);
		cloud(sm,15);
		rain(sm,2);
		rose_fall(200,rf);
		stickman_open(sm,14);
		rf+=2;

		}
		
	// stick man walk
	
		if(n>330&&n<420)
		{
		road(13);
		cloud(sm,15);
		rain(sm,2);
		rose_fall(200,rf);
		if(n%2==0)
		stickman_open(sm,14);
		else
		stickman_close(sm,14);
		sm-=4;
		}
		
		page=1-page;
		delay(100);
		
		n++;
		
	}
		

			setactivepage(1);
			subscribe();

	getch();
	closegraph();

}
