#include<graphics.h>
int main()
{
	
	// ---------Color Filling Programm------
	
	
	int width=GetSystemMetrics(SM_CXSCREEN);
	int height=GetSystemMetrics(SM_CYSCREEN);
	initwindow(width,height,"Color Fill",-3);
   
	int Control_Box_Color=10;   // Light Green
	int Drawing_Color=15;       // white 
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	
	// drawing 1st- 
	DRAWING:
	FIRST_DRAWING:
	setcolor(LIGHTGRAY);
     circle(350+110,300-50,150);
     circle(500+110,300-50,150);
     circle(415+110,450-50,150);
     circle(350+110,300-50,149);
     circle(500+110,300-50,149);
     circle(415+110,450-50,149);
     circle(350+110,300-50,148);
     circle(500+110,300-50,148);
     circle(415+110,450-50,148);
     setcolor(15);
     
    // drawing 2nd
    SECOND_DRAWIGN:
    if(a==1)
    {
	 
     setcolor(LIGHTGRAY);
     
     circle(550,340,100);
     circle(550,340,150);
     circle(550,340,200);
     circle(550,340,250);
     circle(550,340,100-1);
     circle(550,340,150-1);
     circle(550,340,200-1);
     circle(550,340,250-1);
     circle(550,340,100-2);
     circle(550,340,150-2);
     circle(550,340,200-2);
     circle(550,340,250-2);
     line(550,242,550,438);
     line(550-1,242,550-1,438);
     line(550+1,242,550+1,438);
     line(550-98,340,550+98,340);
     line(550-98,340+1,550+98,340+1);
     line(550-98,340-1,550+98,340-1);
     
     

     a--;
    }
    
    // drawing 3rd
    THIRD_DRAWING:
    if(b==1)
    {
   	 setcolor(LIGHTGRAY);
   	 
   	 //middle part 
   	 int points_M[8]={250,400,250,320,850,320,850,400};
   	 drawpoly(4,points_M);
   	 int points_M1[8]={250+1,400,250+1,320+1,850-1,320+1,850-1,400};
   	 drawpoly(4,points_M1);
	 int points_M2[8]={250+2,400,250+2,320+2,850-2,320+2,850-2,400};
   	 drawpoly(4,points_M2);

   	
   	 
   	 
   	 int points_LL[8]={300-8,400,250-20,400,250-20,440,300-8,440};
   	 drawpoly(4,points_LL);
   	 int points_LL1[8]={300-8,400+1,250-20+1,400+1,250-20+1,440-1,300-8,440-1};
   	 drawpoly(4,points_LL1);
   	  int points_LL2[8]={300-8,400+2,250-20+2,400+2,250-20+2,440-2,300-8,440-2};
   	 drawpoly(4,points_LL2);
   	 
   	 circle(350,420,60);
   	 circle(350,420,61);
   	 circle(350,420,62);
   	 
   	 int points_LR[8]={800+8,400,850+20,400,850+20,440,800+8,440};
   	 drawpoly(4,points_LR);
   	 int points_LR1[8]={800+8,400+1,850+20+1,400+1,850+20+1,440-1,800+8,440-1};
   	 drawpoly(4,points_LR1);
   	 int points_LR2[8]={800+8,400+2,850+20+2,400+2,850+20+2,440-2,800+8,440-2};
   	 drawpoly(4,points_LR2);
   	 circle(750,420,60);
   	 circle(750,420,61);
   	 circle(750,420,62);
   	 
   	 line(410-5,440,690+5,440);
     line(410-5,440+1,690+5,440+1);
   	 line(410-5,440-1,690+5,440-1);
   	 
   	 // upper part
   	 int points_U[8]={340,320,410,170,650,170,720,320};
   	 drawpoly(4,points_U);
   	  int points_U1[8]={340+1,320,410+1,170+1,650-1,170+1,720-1,320};
   	 drawpoly(4,points_U1);
   	  int points_U2[8]={340+2,320,410+2,170+2,650-2,170+2,720-2,320};
   	 drawpoly(4,points_U2);
   	 int points_WL[10]={340+35,320-20,410+20,170+20,410+115,170+20,410+115,300,340+35,320-20};
   	 drawpoly(5,points_WL);
   	   int points_WL1[10]={340+35+1,320-20-1,410+20+1,170+20+1,410+115-1,170+20+1,410+115-1,300-1,340+35+1,320-20-1};
   	 drawpoly(5,points_WL1);
   	   int points_WL2[10]={340+35+2,320-20-2,410+20+2,170+20+2,410+115-2,170+20+2,410+115-2,300-2,340+35+2,320-20-2};
   	 drawpoly(5,points_WL2);
   	 
   	 int points_WR[10]={410+115+20,170+20,630,170+20,720-35,320-20,410+115+20,320-20,410+115+20,170+20};
   	 drawpoly(5,points_WR);
   	 int points_WR1[10]={410+115+20+1,170+20+1,630-1,170+20+1,720-35-1,320-20+1,410+115+20+1,320-20+1,410+115+20+1,170+20+1};
   	 drawpoly(5,points_WR1);
   	 int points_WR2[10]={410+115+20+2,170+20+2,630-2,170+20+2,720-35-2,320-20+2,410+115+20+2,320-20+2,410+115+20+2,170+20+2};
   	 drawpoly(5,points_WR2);

   	 
   	 

   	 b--;
	}
	
	// drawing 4
	FOURTH_DRAWING:
	if(c==1)
	{  setcolor(LIGHTGRAY);
		int points_Flag[10]={350,340,550,140,750,340,550,340,350,340};
		drawpoly(5,points_Flag);
		int points_Flag1[10]={350+5,340-1,550,140+1,750-5,340-1,550,340-1,350+5,340-1};
		drawpoly(5,points_Flag1);
		int points_Flag2[10]={350+6,340-2,550,140+2,750-6,340-2,550,340-2,350+6,340-2};
		drawpoly(5,points_Flag2);
		
		
		line(550,340,550,380);
		line(550-1,340,550-1,380);	
		line(550+1,340,550+1,380);	
		int points_Boat[10]={300,380,370,480,730,480,800,380,300,380};
		drawpoly(5,points_Boat);
		int points_Boat1[10]={300+2,380+1,370+1,480-1,730-1,480-1,800-2,380+1,300+2,380+1};
		drawpoly(5,points_Boat1);
		int points_Boat2[10]={300+3,380+2,370+2,480-2,730-2,480-2,800-3,380+2,300+3,380+2};
		drawpoly(5,points_Boat2);
		
		circle(550,430,30);
		circle(550,430,29);
		circle(550,430,28);
		
		circle(420,430,30);
		circle(420,430,29);
		circle(420,430,28);
		
		circle(680,430,30);
		circle(680,430,29);
		circle(680,430,28);
		
		c--;
	}
	
	// drawing 5th
	FIFTH_DRAWING:
		if(d==1)
		{     setcolor(LIGHTGRAY);
		int	points_R[8]={350,340,550,140,750,340,350,340};
		drawpoly(4,points_R);
		int	points_R1[8]={350+2,340-1,550+1,140+2,750-2,340-1,350+2,340-1};
		drawpoly(4,points_R1);
		int	points_R2[8]={350+3,340-2,550+2,140+3,750-3,340-2,350+3,340-2};
		drawpoly(4,points_R2);

		int points_F[10]={380,340,380,540,720,540,720,340,380,340};
		drawpoly(5,points_F);
		int points_F1[10]={380+1,340+1,380+1,540-1,720-1,540-1,720-1,340+1,380+1,340+1};
		drawpoly(5,points_F1);
		int points_F2[10]={380+2,340+2,380+2,540-2,720-2,540-2,720-2,340+2,380+2,340+2};
		drawpoly(5,points_F2);
	

		line(520,540,520,340);
		line(520-1,540,520-1,340);
		line(520+1,540,520+1,340);
		
		line(530,540,530,340);
		line(530-1,540,530-1,340);
		line(530+1,540,530+1,340);
		
		
		line(580,540,580,340);
		line(580-1,540,580-1,340);
		line(580+1,540,580+1,340);
		
		line(570,540,570,340);
		line(570+1,540,570+1,340);
		line(570-1,540,570-1,340);
		
		
		rectangle(410,420,490,460);
		rectangle(410+1,420+1,490-1,460-1);
		rectangle(410+2,420+2,490-2,460-2);
		
		rectangle(610,420,690,460);
		rectangle(610+1,420+1,690-1,460-1);
		rectangle(610+2,420+2,690-2,460-2);
			d--;
		}
	
	
     
     
	setcolor(Control_Box_Color);
	rectangle(1100,20,1350,600);
	rectangle(1100+1,20+1,1350-1,600-1);
	rectangle(1100+2,20+2,1350-2,600-2);
	
	int Box_Dis=16;

	int Box_Width=101;
	int top_1=40;
	int left_1=1100+Box_Dis;
	int right_1=left_1+Box_Width;
	int bottom_1=90;
	int top_2=top_1;
	int bottom_2=bottom_1;
	int left_2=left_1+117;
	int right_2=right_1+117;
	int box_L_left=1100+Box_Dis;
	int box_L_top=40;
	int box_L_bottom=90;
	int box_L_right=left_1+Box_Width;
	int box_R_left=left_1+117;
	int box_R_top=top_1;
	int box_R_bottom=bottom_1;
	int box_R_right=right_1+117;
	
	setcolor(Drawing_Color);
	
	for(int i=0;i<5;i++,top_1+=80,bottom_1+=80)
	{
		rectangle(left_1,top_1,right_1,bottom_1);
	}

	
	for(int i=0;i<5;i++,top_2+=80,bottom_2+=80)
	{
		rectangle(left_2,top_2,right_2,bottom_2);
	}
	
	
     
     // box colors
       
        //  left boxes
     
         setfillstyle(SOLID_FILL,BLUE);
         floodfill(box_L_left+20,box_L_top+20,15);
         
         setfillstyle(SOLID_FILL,GREEN);
         floodfill(box_L_left+20,box_L_top+20+80,15);    
         
         setfillstyle(SOLID_FILL,CYAN);
         floodfill(box_L_left+20,box_L_top+20+160,15);   
         
         setfillstyle(SOLID_FILL,RED);
         floodfill(box_L_left+20,box_L_top+20+240,15);   
         
         setfillstyle(SOLID_FILL,MAGENTA);
         floodfill(box_L_left+20,box_L_top+20+320,15);   
         
         // right boxes
         
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        floodfill(box_R_left+20,box_R_top+20,15);   
        
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(box_R_left+20,box_R_top+20+80,15);   
        
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(box_R_left+20,box_R_top+20+160,15);   
        
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(box_R_left+20,box_R_top+20+240,15);   
          
         
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(box_R_left+20,box_R_top+20+320,15);   
        
    // instruction
      setcolor(LIGHTGREEN);
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+80,"---INSTRUTIONS---");
       setcolor(LIGHTBLUE);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+105,"Colorpick-'Rclick'");
       outtextxy(box_L_left+20,box_L_top+320+130,"Relaunch-'F1'");
       outtextxy(box_L_left+30,box_L_top+320+155,"Save-'Enter'");
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       setcolor(LIGHTGREEN);
       outtextxy(box_L_left+10,box_L_top+320+180,"----PATTERNS----");
       setcolor(LIGHTBLUE);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+205,"f1 , f2 , f3 , f4, f5");
       
       
  
    
   int Pick_Color=15;
    while(1)
    {
    	POINT cursor;
    	Start:
    	
        	GetCursorPos(&cursor);
    //  left boxes
    
         // Blue box
       
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=1;
		}
		// Green box 
		
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+80))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+80)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=2;
		}	
		
		// cyan
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+160))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=3;
		}
		
		// RED
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+240))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+240)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=4;
		}
		
		// Magenta
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+320))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=5;
		}
		
    
	
	
	// Right boxes
	
	    // light cyan
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=11;
		}
		
		// dark gray
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+80))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+80)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=8;
		}
		//yellow
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+160))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=14;
		}
		// white
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+240))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+240)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=15;
		}
		
		// BLack
		
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+320))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=0;
		}
		
		
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			writeimagefile("img.jpg",0,0,1000,700);
		}
	
		
		if(GetAsyncKeyState(VK_F1))
		{
			cleardevice();
			delay(400);
			goto DRAWING;
		}
		if(GetAsyncKeyState(VK_F2))
		{
			cleardevice();
			delay(400);
			a++;
			goto  SECOND_DRAWIGN;
		}
		if(GetAsyncKeyState(VK_F3))
		{
			cleardevice();
			delay(400);
			b++;
			goto THIRD_DRAWING;
		}
		if(GetAsyncKeyState(VK_F4))
		{
			cleardevice();
			delay(400);
			c++;
			goto FOURTH_DRAWING;
		}
		if(GetAsyncKeyState(VK_F5))
		{
			cleardevice();
			delay(400);
			d++;
			goto FIFTH_DRAWING;
		}
    	if(GetAsyncKeyState(VK_LBUTTON))
    	{
		    if(cursor.x >= 1000)
		    {
		    	goto Start;
			}
	        else
	    	{
    		setfillstyle(SOLID_FILL,Pick_Color);
    		floodfill(cursor.x,cursor.y,LIGHTGRAY);
        	}
		}
	}
	getch();
	closegraph();
}
