#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
#define PI acos(-1)
void line_t();
void circle_t();
void triangle_t();
void square_rectangle();
void linetranslation();
void linescaling();
void linerotation();
void title();
void linereflection();
void graphpage();
void circletranslation(int radius);
void circlescaling(int radius);
void circlereflection(int radius);
void rectangletranslation();
void rectanglescaling();
void rectangleshearing();
void rectanglerotation();
void rectanglereflection();
int x1,y1,x2,y2;
int xc,yc;
int xs1,xs2,ys1,ys2;

void main()
{
  clrscr();
  int gd=DETECT,gm;
  int option;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
      cleardevice();
      title();

      do{
	 title();
	 cout<<"\n\n\n\n\n\n\n";
	 cout<<"Choose the shape:";
       cout<<"\n1.Normal line";
       cout<<"\n2.Circle";
       cout<<"\n3.Square or Rectangle";
       cout<<"\n4.Exit";
       cout<<"\nEnter the valid option:";
       cin>>option;
       switch(option){
       case 1:
	clrscr();
       title();
       line_t();
       getch();
       clrscr();

       break;

	case 2:
	clrscr();
	title();
	circle_t();
	getch();
	clrscr();

	break;

	case 3:
	clrscr();
	title();
	square_rectangle();
	getch();
	clrscr();

	break;



	case 4:
	cout<<"\nThank you";
	break;
  }
     }while(option!=4);
      }

       void line_t()
       {
	 int option;
	 cout<<"\n\n\n\n\n\n";
	 cout<<"\nEnter the start co-ordinates:";
	 cin>>x1>>y1;
	 cout<<"\nEnter the end co-ordinates:";
	 cin>>x2>>y2;


	   title();

	     do{
		title();
		cout<<"\n\n\n\n\n\n";
		cout<<"\nFor Normal line";
	       cout<<"\n1.Translation";
	       cout<<"\n2.Scaling";
	       cout<<"\n3.Rotation";
	       cout<<"\n4.Reflection";
	       cout<<"\n5.Exit";
	       cout<<"\nEnter the choice:";
	       cin>>option;
		switch(option)
		{
		  case 1:
		  clrscr();
		   title();

		  linetranslation();
		  getch();
		  clrscr();

		  break;

		  case 2:
		  clrscr();
		   title();

		  linescaling();
		  getch();
		  clrscr();

		  break;


		  case 3:
		  clrscr();
		  title();

		  linerotation();
		  getch();
		  clrscr();

		  break;

		  case 4:
		  clrscr();
		  title();

		  linereflection();
		  getch();
		  clrscr();
		  break;


		  case 5:
		  cout<<"Thankyou";
		  break;
		}
	       }while(option!=5);



	 }

	  void title()
	  {
	    rectangle(100,0,600,100);
	    circle(130,50,10);
	    circle(160,50,10);
	    circle(190,50,10);
	    circle(220,50,10);
	    circle(250,50,10);
	    circle(280,50,10);
	    circle(570,50,10);
	    circle(540,50,10);
	    circle(510,50,10);
	    circle(480,50,10);
	    circle(450,50,10);
	    circle(420,50,10);
	    settextstyle(2,HORIZ_DIR,4);
	    outtextxy(300,45,"2D Transformations");




	  }

	 void circle_t()
	 {
	  title();
	  int option,radius;
	  cout<<"\n\n\n\n\n\n\n";
	  cout<<"Enter the radius:";
	  cin>>radius;
	  cout<<"\nEnter the centre:";
	  cin>>xc>>yc;
	  getch();
	  clrscr();
	   do
	   {
	    title();
	    cout<<"\n\n\n\n\n\n\n";
	    cout<<"\nFor Circle";
	    cout<<"\n1.Translation of the centre";
	    cout<<"\n2.Scaling of the radius";
	    cout<<"\n3.Reflection";
	    cout<<"\n4.Exit";
	    cout<<"\nEnter the option:";
	    cin>>option;

	    switch(option)
	    {
	      case 1:
	      clrscr();
	      title();
	      circletranslation(radius);
	      getch();
	      clrscr();
	      break;

	      case 2:
	      clrscr();
	      title();
	      circlescaling(radius);
	      getch();
	      clrscr();
	      break;

	      case 3:
	      clrscr();
	      title();
	      circlereflection(radius);
	      getch();
	      clrscr();
	      break;

	      case 4:
	      cout<<"\nThankyou";
	      break;
	     }
	    }while(option!=4);

	  }

	   void circletranslation(int radius)
	   {
	    int tx,ty;
	    title();
	    cout<<"\n\n\n\n\n\n\n";
	    cout<<"Enter tx and ty:";
	    cin>>tx>>ty;
	    clrscr();
	    circle(xc,yc,radius);
	    circle(xc+tx,yc+ty,radius);
	    getch();
	    clrscr();
	  }

	  void circlescaling(int radius)
	  {
	     int factor;
	    title();
	    cout<<"\n\n\n\n\n\n\n";
	    cout<<"Enter the factor by which circle to be resized:";
	    cin>>factor;
	    clrscr();
	    circle(xc,yc,radius);
	    circle(xc,yc,radius*factor);
	    getch();
	    clrscr();
	    }

	    void circlereflection(int radius)
	    {
	     int option,a,b;
	     title();
	     cout<<"\n\n\n\n\n\n\n";
	     cout<<"Enter the centre of the circle:";
	     cin>>a>>b;
	     getch();
	     clrscr();
	     do
	     {
	       title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\n1.Reflection about x-axis";
		    cout<<"\n2.Reflection about y-axis";
		    cout<<"\n3.Reflection about origin";
		    cout<<"\n4.Exit";
		    cout<<"\nEnter the option:";
		    cin>>option;

		    switch(option)
		    {
		     case 1:
		     cleardevice();
		     graphpage();
		     circle(a,b,radius);
		     circle(a,getmaxy()-b,radius);
		     getch();
		     clrscr();
		     break;

		     case 2:
		     cleardevice();
		     graphpage();
		     circle(a,b,radius);
		     circle(getmaxx()-a,b,radius);
		     getch();
		     clrscr();
		     break;

		     case 3:
		     cleardevice();
		     graphpage();
		     circle(a,b,radius);
		     circle(getmaxx()-a,getmaxy()-b,radius);
		     getch();
		     clrscr();
		     break;





		     case 4:
		     cout<<"\nThankyou";
		     break;
		   }
		 }while(option!=4);
	       }


	   void square_rectangle()
	   {
	    int option;
	    title();
	    cout<<"\n\n\n\n\n\n\n";
	    cout<<"Enter co-ordinates of both the ends of the rectangle:";
	    cin>>xs1>>ys1>>xs2>>ys2;
	    getch();
	    clrscr();
	    do
	    {
	      title();
	      cout<<"\n\n\n\n\n\n\n";
	      cout<<"\nFor Rectangle";
	      cout<<"\n1.Translation";
	      cout<<"\n2.Scaling";
	      cout<<"\n3.Rotation";
	      cout<<"\n4.Reflection";
	      cout<<"\n5.Shearing";
	      cout<<"\n6.Exit";
	      cout<<"\nEnter the option:";
	      cin>>option;

	      switch(option)
	      {
		case 1:
		clrscr();
		title();
		rectangletranslation();
		getch();
		clrscr();
		break;

		case 2:
		clrscr();
		title();
		rectanglescaling();
		getch();
		clrscr();
		break;

		case 3:
		clrscr();
		title();
		rectanglerotation();
		getch();
		clrscr();
		break;

		case 4:
		clrscr();
		title();
		rectanglereflection();
		getch();
		clrscr();
		break;

		case 5:
		clrscr();
		title();
		rectangleshearing();
		getch();
		clrscr();
		break;

		case 6:
		cout<<"\nThankyou";
		break;
	       }
	     }while(option!=6);
	    }

	    void rectangletranslation()
	    {
	     int tx,ty;
	     title();
	     cout<<"\n\n\n\n\n\n\n";
	     cout<<"Enter tx and ty:";
	     cin>>tx>>ty;
	     clrscr();
	     rectangle(xs1,ys1,xs2,ys2);
	     rectangle(xs1+tx,ys1+ty,xs2+tx,ys2+tx);
	     }

	      void rectanglescaling()
	      {
	      int sx,sy;
	      title();
	      cout<<"\n\n\n\n\n\n\n";
	      cout<<"Enter sx and sy:";
	      cin>>sx>>sy;
	      clrscr();
	      rectangle(xs1,ys1,xs2,ys2);
	      rectangle(xs1*sx,ys1*sy,xs2*sx,ys2*sy);
	      getch();
	      clrscr();
	      }

	      void rectanglerotation()
	      {
	       double s,c,angle;
		  int xr,yr;
		  int option,x1,x2,x3,x4,y1,y2,y3,y4,xr1,xr2,yr1,yr2,xr3,yr3,xr4,yr4;
		  cout<<"\n\n\n\n\n\n\n";
		  cout<<"Enter the rotation angle:";
		  cin>>angle;
		  cout<<"\nEnter the firstpoint:";
		  cin>>x1>>y1;
		 cout<<"\nEnter the secondpoint:";
		 cin>>x2>>y2;
		 cout<<"\nEnter the thirdpoint:";
		 cin>>x3>>y3;
		 cout<<"\nEnter the fourthpoint:";
		 cin>>x4>>y4;
		  c=cos(angle*PI/180);
		  s=sin(angle*PI/180);
		  clrscr();
		  do{
		    title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\n1.Rotation w.r.t origin";
		    cout<<"\n2.Rotation w.r.t a pivot point";
		    cout<<"\n3.Exit";
		    cout<<"\nEnter the option:";
		    cin>>option;

		    switch(option)
		    {
		      case 1:
		      xr1=floor((xs1*c)+(ys1*s));
		      yr1=floor((-xs1*s)+(ys1*c));
		      xr2=floor((xs2*c)+(ys2*s));
		      yr2=floor((-xs2*s)+(ys2*c));
		      clrscr();
		      rectangle(xs1,ys1,xs2,ys2);
		      rectangle(xr1,yr1,xr2,yr2);
		      getch();
		      clrscr();
		      break;

		      case 2:
		      clrscr();
		      title();
		      cout<<"\n\n\n\n\n\n\n";
		      cout<<"Enter the pivot point:";
		      cin>>xr>>yr;
		      xr1=xr+(x1-xr)*c - (y1-yr)*s;
		      yr1=yr+(x1-xr)*s + (y1-yr)*c;
		      xr2=xr+(x2-xr)*c - (y2-yr)*s;
		      yr2=yr+(x2-xr)*s + (y2-yr)*c;
		      xr3=xr+(x3-xr)*c - (y3-yr)*s;
		      yr3=yr+(x3-xr)*s + (y3-yr)*c;
		      xr4=xr+(x4-xr)*c - (y4-yr)*s;
		      yr4=yr+(x4-xr)*s + (y4-yr)*c;
		      clrscr();
		      line(x1,y1,x2,y2);
		      line(x1,y1,x3,y3);
		      line(x2,y2,x4,y4);
		      line(x3,y3,x4,y4);

		      line(xr1,yr1,xr2,yr2);
		      line(xr1,yr1,xr3,yr3);
		      line(xr2,yr2,xr4,yr4);
		      line(xr3,yr3,xr4,yr4);
		      getch();
		      clrscr();
		      break;

		       case 3:
		       cout<<"Thankyou";
		       break;

		       }
		      }while(option!=3);


	      }
		void rectanglereflection()
		{
		  int option,a,b,c,d;
		   title();
		   cout<<"\n\n\n\n\n\n\n";
		   cout<<"Enter one end-point:";
		   cin>>a>>b;
		   cout<<"\nEnter the other end-point:";
		   cin>>c>>d;
		   getch();
		   clrscr();
		   do
		   {
		     title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\n1.Reflection about x-axis";
		    cout<<"\n2.Reflection about y-axis";
		    cout<<"\n3.Reflection about origin";
		    cout<<"\n4.Exit";
		    cout<<"\nEnter the option:";
		    cin>>option;

		    switch(option)
		    {
		     case 1:
		     cleardevice();
		     graphpage();
		     rectangle(a,b,c,d);
		     rectangle(a,getmaxy()-b,c,getmaxy()-d);

		     getch();
		     clrscr();
		     break;

		     case 2:
		     cleardevice();
		     graphpage();
		     rectangle(a,b,c,d);
		     rectangle(getmaxx()-a,b,getmaxx()-c,d);
		     getch();
		     clrscr();
		     break;

		     case 3:
		     cleardevice();
		     graphpage();
		     rectangle(a,b,c,d);
		     rectangle(getmaxx()-a,getmaxy()-b,getmaxx()-c,getmaxy()-d);
		     getch();
		     clrscr();
		     break;



		     case 4:
		     cout<<"\nThankyou";
		     break;
		     }
		    }while(option!=4);

		}

		   void rectangleshearing()
		   {
		    int option,shx,shy,x1,x2,x3,x4,y1,y2,y3,y4;
		    title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\nEnter the first point:";
		    cin>>x1>>y1;
		    cout<<"\nEnter the second point:";
		    cin>>x2>>y2;
		    cout<<"\nEnter the third point:";
		    cin>>x3>>y3;
		    cout<<"\nEnter the fourth point:";
		    cin>>x4>>y4;
		    clrscr();
		    do
		    {
		     title();
		     cout<<"\n\n\n\n\n\n\n";
		     cout<<"\n1.X-direction shear";
		     cout<<"\n2.Y-direction shear";
		     cout<<"\n3.Exit";
		     cout<<"\nEnter the option:";
		     cin>>option;

		     switch(option)
		     {
		      case 1:
		      int xn1,xn2;
		      clrscr();
		      title();
		      cout<<"\n\n\n\n\n\n\n";
		      cout<<"\nEnter shx:";
		      cin>>shx;
		      xn1=x1+shx;
		      xn2=x2+shx;

		      clrscr();
			line(x1,y1,x2,y2);
			line(x1,y1,x3,y3);
			line(x2,y2,x4,y4);
			line(x3,y3,x4,y4);

			line(xn1,y1,xn2,y2);
			line(xn1,y1,x3,y3);
			line(xn2,y2,x4,y4);
			line(x3,y3,x4,y4);

		      getch();
		      clrscr();
		      break;

		      case 2:
		      int yn4,yn2;
		      clrscr();
		      title();
		      cout<<"\n\n\n\n\n\n\n";
		      cout<<"\nEnter shy:";
		      cin>>shy;
		      yn2=y2+shy;
		      yn4=y4+shy;
		      clrscr();
			line(x1,y1,x2,y2);
			line(x1,y1,x3,y3);
			line(x2,y2,x4,y4);
			line(x3,y3,x4,y4);

			line(x1,y1,x2,yn2);
			line(x1,y1,x3,y3);
			line(x2,yn2,x4,yn4);
			line(x3,y3,x4,yn4);

		      getch();
		      clrscr();
		      break;

		      case 3:
		      cout<<"\nThankyou";
		      break;
		     }
		   }while(option!=3);
		 }




	    void linetranslation()
	    {
	      int tx,ty;


	      cout<<"\n\n\n\n\n\n\n";
	      cout<<"Enter tx and ty:";
	      cin>>tx>>ty;
	      clrscr();

	      line(x1,y1,x2,y2);
	      line(x1+tx,y1+ty,x2+tx,y2+ty);
	      getch();
	      clrscr();
	      }

	      void linescaling()
	      {
	       int sx,sy,xs1,xs2,ys1,ys2,xf,yf;
	       cout<<"\n\n\n\n\n\n\n";
	       cout<<"Enter sx and sy:";
	       cin>>sx>>sy;
	       cout<<"\nEnter the fixed point w.r.t to which to be scaled:";
	       cin>>xf>>yf;
	       xs1=xf+(x1-xf)*sx;
	       xs2=xf+(x2-xf)*sx;
	       ys1=yf+(y1-yf)*sy;
	       ys2=yf+(y2-yf)*sy;

	       clrscr();

	       line(x1,y1,x2,y2);
	       line(xs1,ys1,xs2,ys2);
	       getch();
	       clrscr();
	       }

		void linerotation()
		{
		  double s,c,angle;
		  int option,xr,yr,xr1,xr2,yr1,yr2;
		  cout<<"\n\n\n\n\n\n\n";
		  cout<<"Enter the rotation angle:";
		  cin>>angle;
		  c=cos(angle*PI/180);
		  s=sin(angle*PI/180);
		  clrscr();
		  do{
		    title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\n1.Rotation w.r.t origin";
		    cout<<"\n2.Rotation w.r.t a pivot point";
		    cout<<"\n3.Exit";
		    cout<<"\nEnter the option:";
		    cin>>option;

		    switch(option)
		    {
		      case 1:
		      xr1=floor((x1*c)+(y1*s));
		      yr1=floor((-x1*s)+(y1*c));
		      xr2=floor((x2*c)+(y2*s));
		      yr2=floor((-x2*s)+(y2*c));
		      clrscr();
		      line(x1,y1,x2,y2);
		      line(xr1,yr1,xr2,yr2);
		      getch();
		      clrscr();
		      break;

		      case 2:
		      clrscr();
		      title();
		      cout<<"\n\n\n\n\n\n\n";
		      cout<<"Enter the pivot point:";
		      cin>>xr>>yr;
		      xr1=xr+(x1-xr)*c - (y1-yr)*s;
		      yr1=yr+(x1-xr)*s + (y1-yr)*c;
		      xr2=xr+(x2-xr)*c - (y2-yr)*s;
		      yr2=yr+(x2-xr)*s + (y2-yr)*c;
		      clrscr();
		      line(x1,y1,x2,y2);
		      line(xr1,yr1,xr2,yr2);
		      getch();
		      clrscr();
		      break;

		       case 3:
		       cout<<"Thankyou";
		       break;

		       }
		      }while(option!=3);


		 }

		  void linereflection()
		  {
		   int option,a,b,c,d;
		   title();
		   cout<<"\n\n\n\n\n\n\n";
		   cout<<"Enter the start co-ordinates:";
		   cin>>a>>b;
		   cout<<"\nEnter the end co-ordinates:";
		   cin>>c>>d;
		   getch();
		   clrscr();
		   do
		   {
		     title();
		    cout<<"\n\n\n\n\n\n\n";
		    cout<<"\n1.Reflection about x-axis";
		    cout<<"\n2.Reflection about y-axis";
		    cout<<"\n3.Reflection about origin";
		    cout<<"\n4.Exit";
		    cout<<"\nEnter the option:";
		    cin>>option;

		    switch(option)
		    {
		     case 1:
		     cleardevice();
		     graphpage();
		     line(a,b,c,d);
		     line(a,getmaxy()-b,c,getmaxy()-d);

		     getch();
		     clrscr();
		     break;

		     case 2:
		     cleardevice();
		     graphpage();
		     line(a,b,c,d);
		     line(getmaxx()-a,b,getmaxx()-c,d);
		     getch();
		     clrscr();
		     break;

		     case 3:
		     cleardevice();
		     graphpage();
		     line(a,b,c,d);
		     line(getmaxx()-a,getmaxy()-b,getmaxx()-c,getmaxy()-d);
		     getch();
		     clrscr();
		     break;



		     case 4:
		     cout<<"\nThankyou";
		     break;
		     }
		    }while(option!=4);

		  }
		   void graphpage()
		   {
		     line(getmaxx()/2,0,getmaxx()/2,getmaxy());
		     line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
		     }