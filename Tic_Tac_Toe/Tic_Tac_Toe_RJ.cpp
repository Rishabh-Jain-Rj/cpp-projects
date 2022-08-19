#include<graphics.h>

int Theme;

void Selector(int,int,int);
void Function_Execution(int choice,int Theme);
// Loading Game
void Loading_Game(void)
{
	readimagefile("res/game_logo.jpg",250+50,170+50,450-50,370-50);
	rectangle(310,330,390,340);
	setcolor(CYAN);
	for(int i=0;i<=76;i++)
	{
		line(312+i,332,312+i,338);
		delay(50);
	}
	cleardevice();
}

// Game Menu Animation
void Menu(int theme)
{

	setbkcolor(BLACK);
	cleardevice();
    if(theme==2)
    {
	readimagefile("res/title2.jpg",50,20,650,130);
	readimagefile("res/menu2.jpg",235,250,465,520);
	Selector(240,1,1);
	delay(10);
	Theme=2;
	
	}
    else
    {
	readimagefile("res/title1.jpg",50,20,650,130);
	readimagefile("res/menu1.jpg",235,250,465,520);
	Selector(240,1,1);
	delay(10);
	Theme=1;
	}
	
}

// Menu Selector
void Selector(int h,int key,int choice)
{
	if(key==0)
	setcolor(BLACK);
	else
	setcolor(LIGHTRED);
	int d=0;
    if(choice==1)
    {
    	d=0;
	}
	if(choice==2)
	{
		d=20;
	}
	if(choice==3)
	{
		d=50;
	}
	if(choice==4)
	{
		d=80;
	}
	if(choice==5)
	{
		d=100;
	}
	settextstyle(0,HORIZ_DIR,6);
	outtextxy(170-30+d,h,"<");
	outtextxy(480+30-d,h,">");
	
	
}
void Selection(void)
{
	int choice=1;

	while(1)
	{

		if(GetAsyncKeyState(VK_F1))
		{
			Selector(240,1,1);
			Selector(300,0,2);
			Selector(360,0,3);
			Selector(420,0,4);
			Selector(480,0,5);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            choice=1;
		}
		else if(GetAsyncKeyState(VK_F2))
		{
			Selector(240,0,1);
			Selector(300,1,2);
			Selector(360,0,3);
			Selector(420,0,4);
			Selector(480,0,5);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            choice=2;
		}
		else if(GetAsyncKeyState(VK_F3))
		{
			Selector(240,0,1);
			Selector(300,0,2);
			Selector(360,1,3);
			Selector(420,0,4);
			Selector(480,0,5);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            choice=3;
		}
		else if(GetAsyncKeyState(VK_F4))
		{
			Selector(240,0,1);
			Selector(300,0,2);
			Selector(360,0,3);
			Selector(420,1,4);
			Selector(480,0,5);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            choice=4;
	
		}
		else if(GetAsyncKeyState(VK_F5))
		{
			Selector(240,0,1);
			Selector(300,0,2);
			Selector(360,0,3);
			Selector(420,0,4);
			Selector(480,1,5);
           PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		   choice=5;	
		}
		else if(GetAsyncKeyState(VK_F6))
		{
            Menu(1);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            
		}
		else if(GetAsyncKeyState(VK_F7))
		{
			Menu(2);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		}
        else if(GetAsyncKeyState(VK_RETURN))
        {   

         Function_Execution(choice,Theme);
		}

		delay(10);
		
	}

}

// Escape 
void Esc_Theme(int option,int theme)
{
	while(1)
	{
        if(GetAsyncKeyState(VK_ESCAPE))
        {
         Menu(theme);
         PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
	   	 Selection();
		}
		if(GetAsyncKeyState(VK_F6))
		{
			Function_Execution(option,1);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		}
		if(GetAsyncKeyState(VK_F7))
		{
			Function_Execution(option,2);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		}		
	}
	
}
//quit
void Quit(int theme)
{
	POINT cursor;
	while(1)
	{
		GetCursorPos(&cursor);
		if(((cursor.x >=150+150)&&(cursor.x <=220+150))&&((cursor.y >= 310+50)&&(cursor.y <= 340+50)))
		{
			if(GetAsyncKeyState(VK_LBUTTON))
			{
	        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
			closegraph();
			}
		}
		if(((cursor.x >=480+150)&&(cursor.x <=550+150))&&((cursor.y >= 310+50)&&(cursor.y <= 340+50)))
		{
			if(GetAsyncKeyState(VK_LBUTTON))
			{
	        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
            Menu(theme);
            Selection();
			}
		}
        if(GetAsyncKeyState(VK_ESCAPE))
        {
         Menu(theme);
         PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
	   	 Selection();
		}
		if(GetAsyncKeyState(VK_F6))
		{
		  Function_Execution(5,1);
		}
		if(GetAsyncKeyState(VK_F7))
		{
		  Function_Execution(5,2);
		}
		

	}
}

// game intergace
void Game_Interface(int Theme)
{    int board_color,  box_color;

  if(Theme==1)
    {
    	board_color=10;          // green
    	box_color=10;	
	}
	else
    {
    	board_color=9;           // blue
    	box_color=9;   	
    }
    setcolor(board_color);
    for(int i=0;i<5;i++)
    {
    	// vertical
    	line(148+i,75,148+i,525);
    	line(298+i,75,298+i,525);
    	//horizontal
    	line(25,223+i,425,223+i);
    	line(25,373+i,425,373+i);	
	}
	setcolor(box_color);
	for(int i=0;i<5;i++)
	{
		rectangle(450+i,25+i,675-i,575-i);
	}
}

// position of x_o
	int p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;  // one thing at one place
	int n=0;
	int a[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int flag=0;
	
void Check_Multi_Winner(int);
// x 
void X_O(int Theme,int place)
{   
	int l,t,r,b;
	char ch;
	  
    if(Theme==1)
    {
      if(a[place-1]==-1)
      {
      if(n%2==0)
      {
      readimagefile("res/player21.jpg",450+35,150,600+35,170);     	
	  }
	  else
	  {
     readimagefile("res/player11.jpg",450+35,150,600+35,170);	  	
	  }
	  }
    	
	}
  if(Theme==2)
	{
		
	if(a[place-1]==-1)
	{
			
      if(n%2==0)
      {
       readimagefile("res/player22.jpg",450+35,150,600+35,170);      	
	  }
	  else
	  {
     readimagefile("res/player12.jpg",450+35,150,600+35,170);	  	
	  }
	  
	}
		
	}
	if(place==1 && p1==1)
	{
		l= 25 ; t= 100 ;r=125  ;b=200   ;
		p1++;
		n++;

	}
	else if(place==2 && p2==1)
	{
		l=175 ; t=100  ;r=275  ;b=200   ;	
		p2++;
		n++;	
	
	}
	else if(place==3 && p3==1)
	{
		l= 325 ; t=100  ;r=425  ;b=200   ;	
		p3++;
		n++;	
	
	}
	else if(place==4 && p4==1)
	{
		l= 25  ; t=250 ;r=125  ;b= 350  ;	
		p4++;
		n++;	

	}
	else if(place==5 && p5==1)
	{
		l=175  ; t=250  ;r=275  ;b= 350   ;	
		p5++;
		n++;	

	}
	else if(place==6 && p6==1)
	{
		l=325  ; t=250  ;r=425  ;b=350   ;	
		p6++;
		n++;	
	
	}
	else if(place==7 && p7==1)
	{
		l=25  ; t=400  ;r=125  ;b=500   ;	
		p7++;
		n++;
		
	}
	else if(place==8 && p8==1)
	{
		l=175  ; t=400  ;r=275  ;b=500   ;	
		p8++;
		n++;	
		
	}
	else if(place==9 && p9==1)
	{
		l=325  ; t=400  ;r=425  ;b=500   ;	
		p9++;
		n++;
		
	}
	
    if(a[place-1]==-1)
    {
    	if(n%2==0)
        ch='o';
        else
        ch='x';
	}

    if(ch=='o')
    {
    a[place-1]=0;
    Check_Multi_Winner(0)	;
	}
    if(ch=='x')
    {
    	
    a[place-1]=1;
    Check_Multi_Winner(1)	;
	}

	if(Theme==1&&ch=='o')
	readimagefile("res/o1.jpg",l,t,r,b);
	else if(Theme==1&&ch=='x')
	readimagefile("res/x1.jpg",l,t,r,b);	
	else if(Theme==2&&ch=='o')
	readimagefile("res/o2.jpg",l,t,r,b);	
	else if(Theme==2&&ch=='x')
	readimagefile("res/x2.jpg",l,t,r,b);

	delay(500);		
}
// check winning 
void Check_Multi_Winner(int no)
{
	if((a[0]==no &&a[1]== no )&& (a[2]==no))
	{
    flag++;
	}
    if((a[3]==no &&a[4]==no )&& (a[5]==no))
    {
    flag++;   
	}
	if((a[6]==no &&a[7]==no )&& (a[8]==no))
    {
    flag++;    
	}
	if((a[0]==no &&a[3]==no )&& (a[6]==no))
    {
    flag++;    
	}
	if((a[1]==no &&a[4]==no )&& (a[7]==no))
    {
    flag++;    
	}
	if((a[2]==no &&a[5]==no )&& (a[8]==no))
    {
    flag++;    
	}
	if((a[0]==no &&a[4]==no )&& (a[8]==no))
    {
    flag++;   
	}
	if((a[2]==no &&a[4]==no )&& (a[6]==no))
    {
    flag++;    
	}
    
    if(flag==1)
    {
    	if(no==0&&Theme==1)
    	readimagefile("res/player21.jpg",450+35,260+20,600+35,280+20);
    	if(no==0&&Theme==2)
    	readimagefile("res/player22.jpg",450+35,260+20,600+35,280+20);
    	if(no==1&&Theme==1)
    	readimagefile("res/player11.jpg",450+35,260+20,600+35,280+20);
    	if(no==1&&Theme==2)
    	readimagefile("res/player12.jpg",450+35,260+20,600+35,280+20);
	}
}
// multiplayer logic
void Multiplayer(int Theme)
{
	if(Theme==1)
    {
     readimagefile("res/turn1.jpg",450+65,90,600,120);
     readimagefile("res/player11.jpg",450+35,150,600+35,170);
     readimagefile("res/winner1.jpg",450+35,200+20,600+35,230+20);
     readimagefile("res/-1.jpg",450+100,260+20,600-25,270+20);
    	
	}
	else
	{
     readimagefile("res/turn2.jpg",450+65,90,600,120);
     readimagefile("res/player12.jpg",450+35,150,600+35,170);
     readimagefile("res/winner2.jpg",450+35,200+20,600+35,230+20);	
     readimagefile("res/-2.jpg",450+100,260+20,600-25,270+20);	 	
	}
	int place=0;
	while(1)
	{
		if(GetAsyncKeyState(VK_F1))
		{
			place=1;
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F2))
		{
			place=2;
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F3))
		{
			place=3;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F4))
		{			
			place=4;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F5))
		{			
			place=5;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F6))
		{		
			place=6;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F7))
		{
     		place=7;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F8))
		{		
			place=8;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_F9))
		{			
			place=9;			
			X_O(Theme,place);			
		}
		if(GetAsyncKeyState(VK_ESCAPE))
		{	
          p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;
          n=0;	
          flag=0;
         for(int i=0;i<9;i++)
         {
         	a[i]=-1;
		 }
	     	Menu(Theme);
           PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
			break;
		}

		
	}
	
}
// Fucntions Execution
void Function_Execution(int choice,int Theme)
{
	if(choice==1)
	{
		cleardevice();
		setcolor(LIGHTGREEN);
	    settextstyle(0,HORIZ_DIR,4);
		outtextxy(150,250,"COMING SOON...");
        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        Esc_Theme(1,Theme);
	}
	if(choice==2)
	{
		cleardevice();
		Game_Interface(Theme);
		Multiplayer(Theme);
		
	}
	if(choice==3)
	{

		cleardevice();
		if(Theme==1)
		{
		readimagefile("res/menu_controls1.jpg",250,20,450,50);
        readimagefile("res/menucontrols1.jpg",210+10,80,490-10,200);
		readimagefile("res/game_controls1.jpg",250,250,450,280);         
        readimagefile("res/gamecontrols1.jpg",120,300+10,580,330);
    	readimagefile("res/other_controls1.jpg",260,380,440,410);
        readimagefile("res/othercontrols1.jpg",210-10,440,490+10,560);
		}
		if(Theme==2)
		{
		readimagefile("res/menu_controls2.jpg",250,20,450,50);
        readimagefile("res/menucontrols2.jpg",210,80,490,200);
		readimagefile("res/game_controls2.jpg",250,250,450,280);         
        readimagefile("res/gamecontrols2.jpg",120,300+10,580,330);
    	readimagefile("res/other_controls2.jpg",260,380,440,410);
        readimagefile("res/othercontrols2.jpg",210-10,440,490+10,560);			
		}       
        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        
        Esc_Theme(3,Theme);		
	}
	if(choice==4)
	{   int page=0;
        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        cleardevice();
		for(int i=100;i<1200;i++)
		{
        setfillstyle(SOLID_FILL,BLACK);
         if(Theme==1)
         {
            readimagefile("res/title1.jpg",50,620-i,650,730-i);        
            readimagefile("res/about_g.jpg",50,800-i,650,1320-i);
            bar(50,1320-i,650,2000-i);
		 }
		 if(Theme==2)
		{
        readimagefile("res/title2.jpg",50,620-i,650,730-i);        
        readimagefile("res/about_b.jpg",50,800-i,650,1320-i);		
        bar(50,1320-i,650,2000-i);		
		}
        if(GetAsyncKeyState(VK_ESCAPE))
        {
        break;
		}
		if(GetAsyncKeyState(VK_F6))
		{
			Function_Execution(4,1);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		}
		if(GetAsyncKeyState(VK_F7))
		{
			Function_Execution(4,2);
            PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
		}
        page=1-page;
        delay(1);
		}

         Menu(Theme);
         PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
	   	 Selection();	
		
	}
	if(choice==5)
	{
		
		cleardevice();
		if(Theme==1)
		{
		readimagefile("res/quitmsg1.jpg",50,200,650,250);
		readimagefile("res/yes1.jpg",100+50,300+10,170+50,330+10);
		readimagefile("res/no1.jpg",530-50,300+10,600-50,330+10);	
		}
		if(Theme==2)
		{
		readimagefile("res/quitmsg2.jpg",50,200,650,250);
		readimagefile("res/yes2.jpg",100+50,300+10,170+50,330+10);
		readimagefile("res/no2.jpg",530-50,300+10,600-50,330+10);
		}
        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        Quit(Theme);

	}
	
}
// Driver Program 
int main()
{
	initwindow(700,600,"Game",150,50);
	Loading_Game();
	Menu(1);
	Selection();
	getch();
	closegraph();
}
