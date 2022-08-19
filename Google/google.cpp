#include"google_box.h"
#include<graphics.h>
#include<stdlib.h>
int main()
{
	int window1,window2,window3;
   // Graphics window created (WHITE)	
       	int width=GetSystemMetrics(SM_CXSCREEN);
       	int height=GetSystemMetrics(SM_CYSCREEN);
   	    window1=initwindow(width,height,"RJ CREATION",-3);
   	  
	GOOGLE google;         
	SEARCH search1 ;           
	SEARCH search2;
	SEARCH search3;	 
	
	WHITE_THEME:	    //   goto white_Theme
	
	delay(500);
    google.Draw(15);          
    search1.Box(200,315,393,353,0);
    search2.Box(586,315,779,353,0);
    search3.Box(972,315,1165,353,0);
    search1.Text("Paint",55,7,0);
    search2.Text("Theme",55,7,0);
    search3.Text("Game",60,7,0);
    setcolor(GREEN);
    settextstyle(1,HORIZ_DIR,2);
    outtextxy(150,700,"(press 'f1' for paint)             (press 'f2' for Theme)            (press 'F3' for Game)");
    
    // searches start 
    // f1 for paint
    // f2 for theme(black)
    // f3 for exit
	
	while(1)
	{
   
	if(GetAsyncKeyState(VK_F2))
	{
		delay(500);
    google.Draw(0);          
    search1.Box(200,315,393,353,15);
    search2.Box(586,315,779,353,15);
    search3.Box(972,315,1165,353,15);
    search1.Text("Paint",55,7,15);
    search2.Text("Theme",55,7,15);
    search3.Text("Game",60,7,15);
    setcolor(LIGHTGREEN);
    settextstyle(1,HORIZ_DIR,2);
    outtextxy(150,700,"(press 'f1' for paint)             (press 'f2' for Theme)            (press 'F3' for Game)");
    	while(1)
    	{
			if(GetAsyncKeyState(VK_F2))
			goto WHITE_THEME;
			
			if(GetAsyncKeyState(VK_ESCAPE))
			goto EXIT;
			if(GetAsyncKeyState(VK_F1))
			goto PAINT;	
			if(GetAsyncKeyState(VK_F3))
			goto GAME;
    	}
	
    }
    
	if(GetAsyncKeyState(VK_ESCAPE))
	{
		EXIT:                      // goto exit
	break;
	
    }
    if(GetAsyncKeyState(VK_F1))
    {
    	PAINT:
    		int p=1;
    
    		window3=initwindow(width,height,"PAINT",-3);
    		setcurrentwindow(window3);
    		int Brush_Size=2;
    		cleardevice();
    	    setbkcolor(0);
    	    cleardevice();
    		POINT cursor;
    		setcolor(GREEN);
    	    settextstyle(0,HORIZ_DIR,2); 
            outtextxy(100,670,"(Draw- 'leftclick')     (Colors- 'F1-F6')    (Brush- 'F7-F9')    (Eraser- 'RightClick')   ");
            outtextxy(440,710,"(Back- 'ESC')    (Save- 'Enter')");
                 
    		setcolor(WHITE); 
    	
    		  
    		  
    		while(1)
    		{   
    			GetCursorPos(&cursor);
    			if(GetAsyncKeyState(VK_LBUTTON))
    			circle(cursor.x,cursor.y,Brush_Size);
    		
    			if(GetAsyncKeyState(VK_F1))
    			{
    				setcolor(WHITE);
				}
				if(GetAsyncKeyState(VK_F2))
				{
					setcolor(YELLOW);
				}
				if(GetAsyncKeyState(VK_F3))
				{
					setcolor(LIGHTBLUE);
				}
				if(GetAsyncKeyState(VK_F4))
				{
					setcolor(LIGHTGREEN);
				}
				if(GetAsyncKeyState(VK_F5))
				{
					setcolor(LIGHTRED);
				}
				if(GetAsyncKeyState(VK_F6))
				{
					setcolor(LIGHTCYAN);
				}
			
				if(GetAsyncKeyState(VK_F7))
				{
					Brush_Size=2;
				}
				if(GetAsyncKeyState(VK_F8))
				{
					Brush_Size=4;
				}
				if(GetAsyncKeyState(VK_F9))
				{
					Brush_Size=8;
				}
			
				if(GetAsyncKeyState(VK_RETURN))
				{
					writeimagefile("img.jpg");
					delay(100);
					break;
				}
				if(GetAsyncKeyState(VK_RBUTTON))
				{
					setcolor(BLACK);
				}
				
				
				if(GetAsyncKeyState(VK_ESCAPE))
				{ 
				    setcurrentwindow(window1);
					closegraph(window3);
					break;
				}
				if(GetAsyncKeyState(VK_F1))
				{
			     
             
                 
				}
				
			
			}
			goto WHITE_THEME;
    		
    	
    	
    	
	}
	
	if(GetAsyncKeyState(VK_F3))
	{       GAME:
		    int h=0,page=0;
    int circle1x = 100,circle2x =250;
    int  poly_upline=150,poly_lowerline=100,poly_leftline=100,poly_rightline=225;
    int handle_1=250,handle_2=225,handle_3 =200 ;
    int sheet_1=150,sheet_2=145;
    int speed =1;
    int n=0;
    int Cycle_Color=14;
    window2=initwindow(width,height,"GAME",-3);
    setcurrentwindow(window2);
    

     char s[30]="Loading...";
     setbkcolor(0);
     cleardevice();
    while(1)
    {


        if(n==0)
        {

            setcolor(WHITE);

            rectangle(550+25,320,700+25,340);


            for(int i=0; i<148; i++)
            {
                setcolor(GREEN);
                line(551+i+25,321,551+i+25,339);
                setcolor(WHITE);
                settextstyle(0,HORIZ_DIR,1);
                outtextxy(615,350,s);
                delay(10);

            }
        }



       if(n!=0)
       {


           setactivepage(page);
            setvisualpage(1-page);
        }
      
        cleardevice();
        setcolor(DARKGRAY);

        line(0,500,1400,500);
        line(0,501,1400,501);
        //cycle tires

        setcolor(Cycle_Color);
        circle(circle1x,450,50);    //first circle left side
        circle(circle2x,450,50);    //second circle risht side
         circle(circle1x,450,49);    //first circle left side
         circle(circle2x,450,49);    //second circle risht side



        //cycle polygon

        line(poly_lowerline,450,poly_lowerline+75,450); //lower line of cycle
        line(poly_leftline,450,poly_leftline+50,390); //left line of cycle
        line(poly_upline,390,poly_upline+75,390); //upper line of cycle
        line(poly_rightline,390,poly_rightline-50,450); //right line of cycle

        //cycle handle

        line(handle_1,450,handle_1-25,390);
        line(handle_2,390,handle_2-25,340);
        line(handle_3,340,handle_3-20,340);

        //cycle sheet

        line(sheet_1,390,sheet_1,380);
        line(sheet_2,380,sheet_2+10,380);


        

        if(n==1)
        {
         setcolor(RED);
         rectangle(550,570,600,620);
         setcolor(RED);
         line(560,595,590,595);
         int points[8]={560,595,570,590,570,600,560,595};
         setfillstyle(SOLID_FILL,RED);
         fillpoly(4,points);

         rectangle(720,570,770,620);
         line(730,595,760,595);
         int points2[8]={760,595,750,590,750,600,760,595};
         fillpoly(4,points2);
      
       }

        if(n==0)
        {


            setcolor(GREEN);

            settextstyle(0,HORIZ_DIR,2);
            outtextxy(440,570,"Press Any Key To Continue... ");
            getch();
            n++;

        }

         if(GetAsyncKeyState(VK_F1))
         {
		 
     setcolor(GREEN);
    settextstyle(0,HORIZ_DIR,2);
    outtextxy(160,700,"(Speed- 'F2-F4')            (Colors- 'F5-F8')            (Back- 'ESC')");
    
        }

        if(GetAsyncKeyState(VK_LEFT))
        {

            circle1x       -= speed ;
            circle2x       -= speed ;
            poly_upline    -= speed ;
            poly_lowerline -= speed ;
            poly_leftline  -= speed ;
            poly_rightline -= speed ;
            handle_1       -= speed ;
            handle_2       -= speed ;
            handle_3       -= speed ;
            sheet_1        -= speed ;
            sheet_2        -= speed  ;
        }


        if(GetAsyncKeyState(VK_RIGHT))
        {

            circle1x       += speed ;
            circle2x       += speed ;
            poly_upline    += speed ;
            poly_lowerline += speed ;
            poly_leftline  += speed ;
            poly_rightline += speed ;
            handle_1       += speed ;
            handle_2       += speed ;
            handle_3       += speed ;
            sheet_1        += speed ;
            sheet_2        += speed  ;
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {  setcurrentwindow(window1);
            closegraph(window2);
            
       
        	
        	 goto WHITE_THEME;
		}
	
		if(GetAsyncKeyState(VK_F2))
		{
			speed=1;
		}
		if(GetAsyncKeyState(VK_F3))
		{
			speed=2;
		}
		if(GetAsyncKeyState(VK_F4))
		{
			speed =3;
		}
		if(GetAsyncKeyState(VK_F5))
		{
			Cycle_Color=14;
		}
		if(GetAsyncKeyState(VK_F6))
		{
			Cycle_Color=9;
		}		
		if(GetAsyncKeyState(VK_F7))
		{
			Cycle_Color=10;
		}
		if(GetAsyncKeyState(VK_F8))
		{
			Cycle_Color=13;
		}     

      page=1-page;
        
    }
   
	}
    
    
    }

}
