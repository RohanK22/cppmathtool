#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<errno.h>
#include<dos.h>
#include<process.h>
#include<string.h>
int sx;
int sy;
void initialize_graphics(int c=2)
{
	int gdriver = EGA, gmode = EGAHI, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	setbkcolor(2);
	sx=getmaxy()/2;
	sy=getmaxx()/2;

}
void draw_graph(int c=5)
{
	for(int xa=0;xa<getmaxx();xa++)
		putpixel(xa,getmaxy()/2,c);
	for(int ya=0;ya<getmaxy();ya++)
		putpixel(getmaxx()/2,ya,c);
	putpixel(getmaxx()/2,getmaxy()/2,c+1);
}

void initialize_background(int c=5)
{
    clrscr();
    cleardevice();
    setbkcolor(c);

}

void plotg(double x,double y,int c,double sx,double sy)
{
	setcolor(7);
	if(fabs(x)<getmaxy())
	{
		if(y>0)
		{
			if(sx+1>fabs(y))
			{
				putpixel(sy+x,sx-y,c);
				lineto(sy+x,sx-(y));
			}
		}
		if(y<0)
		{
			if(sx+1>fabs(y))
			{
				putpixel(sy+x,sx+fabs(y),c);
				lineto(sy+x,sx+fabs(y));
			}
		}
	}
}
void plot(double x=0,double y=0,int c=5,int ed=0,double len=10,int sx=500,int sy=500,double m=0)
{
	char msg[30];
	setcolor(c);
	double theta=atan(m);
	if(fabs(x)<sy)
	{	if(y>0)
		{     	if(sx>=fabs(y))
			{       putpixel(sy+x,sx-y,c);
				lineto(sy+x,sx-(y));
				/*
				if(x%10==0)
				{
					sprintf(msg, "(%d, %d)",x,y);
					outtextxy(sy+1+x,sx+1-(fabs(y)),msg);
				}
				*/
				if(ed==1)
					line(sy+x-len*sin(theta),sx-y-len*cos(theta),sy+x+len*sin(theta),sx-y+len*cos(theta));

			}
		}
		if(y<0)
		{       if(sx>=fabs(y))
			{       putpixel(sy+x,sx+fabs(y),c);
				lineto(sy+x,sx+fabs(y));
				/*
				if(asdf%1000==0)
				{

				sprintf(msg, "(%d, %d)",x,y);
				outtextxy(sy+1+x,sx+1+(fabs(y)),msg);
				}
				*/
				if(ed==1)
				line(sy+x-len*sin(theta),sx+fabs(y)-len*cos(theta),sy+x+len*sin(theta),sx+fabs(y)+len*cos(theta));
			}
		}


	}

}

class figurecal
{
	public:
	    char ch1,ch,ch2,ch3,ch4;
	    char ans;
	    int a,b,c,res,cir,cho,cu,cub,con,cyl,sph,y0,l;
	    int color;
	    int bottom1;
	    int midx, midy;
	    int stangle , endangle;
	    int xradius,yradius;
	    int x1,y1;
	    int left,top,right,bottom;
	    int a1,a2,a3,a4,b1,b2,b3,b4;
	    float x,y,z,d,w,side,area,pm,len,bre,rad,circum;
	    long double lo;
};
void intro()
{
		class figurecal
{
	public:
	    char ch1,ch,ch2,ch3,ch4;
	    char ans;
	    int a,b,c,res,cir,cho,cu,cub,con,cyl,sph,y0,l;
	    int color;
	    int bottom1;
	    int midx, midy;
	    int stangle , endangle;
	    int xradius,yradius;
	    int x1,y1;
	    int left,top,right,bottom;
	    int a1,a2,a3,a4,b1,b2,b3,b4;
	    float x,y,z,d,w,side,area,pm,len,bre,rad,circum;
	    long double lo;
};
		figurecal o;
		o.color=0;
		o.bottom1=0;
		o.stangle = 0, o.endangle = 360;
		o.xradius = 280, o.yradius = 180;
		setbkcolor(4);
		for(;o.bottom1<=470;o.bottom1++)
		{
			setcolor(15);
			delay(6);
			rectangle(0,10,650,o.bottom1);
		}
		o.midx = getmaxx() / 2;
		o.midy = getmaxy() / 2;
		setcolor(13);
		setbkcolor(15);
		for(o.x1=160,o.y1=0;o.y1<190;o.y1++,o.color++)
		{
			delay(15);
			cleardevice();
			setcolor(o.color);
			settextstyle(4,0,7);
			outtextxy(o.x1,o.y1,"WELCOME");
		}
		for(;o.xradius>131,o.yradius>81;o.xradius--,o.yradius--,o.color++)
		{
			setcolor(o.color);
			ellipse(o.midx, o.midy, o.stangle, o.endangle,o.xradius, o.yradius);
			delay(20);
			cleardevice();
			settextstyle(4,0,7);
			outtextxy(160,190,"WELCOME");
		}
		setbkcolor(4);
		setcolor(14);
		settextstyle(4,0,7);
		outtextxy(160,190,"WELCOME");
		clrscr();
		setbkcolor(5);
		settextstyle(4,0,4);
		outtextxy(80,30,"TOPIC:");
		for( o.w=15;o.w>0;o.w--)
		{
			settextstyle(4,0,7);
			setcolor(o.w);
			delay(300);
			outtextxy(50,100,"Graph Calculator");

		}
		setcolor(0);
		settextstyle(6,0,2);
		outtextxy(50,300,"Guided by: Mrs.Sona Maria");
		delay(500);
}
void trig()
{
	float s=0;
	initialize_graphics();
	initialize_background(0);
	draw_graph(5);
	int sx=getmaxy()/2;
	int sy=getmaxx()/2;
	double x,y;

	for(x=-sy;x<sy;x+=0.00005)
	{
		y=sin(x);
		plotg(x*100,y*50,7,sx,sy);
		       //	plot(x*50,y*80,7,sx,sy);
	}
	int dec,sign;
	do{
		char choice;
		cout<<"\n\t Do you wish to continue (Y/N)";
		cin>>choice;
		if(choice=='n'||choice=='N')
		{
			 cout<<"\n\t Thank You for using our software";
			 break;
		}
	       else
		{
		 {
					  cout<<"\n\t Do you wish to view the previous graph too?";
					  cin>>choice;

					   if(choice=='N'||choice=='n')
					   {

						 cleardevice();
					  }

					}
					setcolor(BLACK );
					outtextxy(100, 60, "Enter the function");
					setfillstyle( SOLID_FILL, WHITE );
					       bar3d( 0, 0, 100, 100, 1, 1) ;

					int x1 = 100, index = 0 ;
					       char Func[10], ch[2] ;
				       ch[1] = '\0' ;
				       ch[0] = getch() ;


				       while( ch[0] != '\r')
				       {
						Func[index++] = ch[0] ;
					       outtextxy( x1, 105, ch ) ;
					       x1 += 8 ;
					       ch[0]=getch();
						if(ch[0]==8)
						{
							ch[0]=getch();
						       cout<<"backspace noted";
							Func[--index]=ch[0];
					       }
					       Func[index] = '\0';
				      }
				//       cout<<Func;

				       draw_graph(5);
				       int flag=0;


				     cout<<Func;
				      if(strcmpi(Func,"x^n") == 0 )
					{
						int n;
						n=0;
						cout<<"\n\t Enter the value of n";
						cin>>n;
						for(x=-sy;x<sy;x+=0.00005)
						{
							y=pow(x,n);
						       plotg(x*100, y*100, 8, sx, sy);
							flag=1;
						}
					}

				  for(x=-sy;x<sy;x+=0.00005)
				     {


				if(strcmpi(Func,"sin(x)") == 0 )
					{
						  y=sin( x ) ;
						plotg(x*100,y*100,7,sx,sy);
						flag=1;
					}
				else

			  if(strcmpi(Func,"cos(x)")==0)
			{
			y=cos(x);
			plotg(x*100, y*100, 7, sx, sy);
	flag=1;
					       }
					       else

							if(strcmpi(Func,"tan(x)")==0)

						       {
							       y=tan(x);
							       plotg(x*100, y*50, 8, sx, sy);
							       flag=1;
						       }
						       else

								if(strcmpi(Func,"cot(x)")==0)
								{
									 y=1/tan(x);
									 plotg(x*100, y*100, 8, sx, sy);
									 flag=1;
								}
							       else

								       if(strcmpi(Func,"sec(x)")==0)
								       {
										y=1/cos(x);
										plotg(x*100, y*100, 8, sx, sy);
										flag=1;
								       }
									else
										if(strcmpi(Func,"cosec(x)")==0)
										{
											y=1/sin(x);
											plotg(x*100, y*100, 8, sx, sy);
											flag=1;
										}
										else


					if(strcmpi(Func,"sin(x)+cos(x)")==0)
					{
						y=sin(x)+cos(x);
					       plotg(x*100, y*100, 8, sx, sy);
						flag=1;
					}
					else
					if(strcmpi(Func,"e^-x")==0)
					{
						y=exp(-x);
						plotg(x*100, y*100, 8, sx, sy);
						flag=1;
					}
					else
						if(strcmpi(Func,"sin(cos(x))")==0)
						{
						      y=sin(cos(x));
						      plotg(x*100, y*100, 8, sx, sy);
						      flag=1;
					      }
						else
							if(strcmpi(Func,"cos(sin(x))")==0)
						       {
							       y=cos(sin(x));
							       plotg(x*100, y*100, 8, sx, sy);
							       flag=1;
						       }
						       else
								if(strcmpi(Func,"atan(x)")==0)
								{
									y=atan(x);
									plotg(x*100, y*100, 8, sx, sy);
									flag=1;
								}
								else
									if(strcmpi(Func,"gint(x)")==0)
									 {
										 y=floor(x);
										 plotg(x*100, y*100, 8, sx, sy);
										 flag=1;
									 }
									 else
										 if(strcmpi(Func,"ceil(x)")==0)
										 {
											 y=ceil(x);
											 plotg(x*100, y*100, 8, sx, sy);
											 flag=1;
										 }
										 else
											  if(strcmpi(Func,"log(x)")==0)
											 {
												 y=log(fabs(x));
												 plotg(x*100, y*100, 8, sx, sy);
												 flag=1;
											 }
											else
												  if(strcmpi(Func,"x")==0)
												  {
													  y=x;
													  plotg(x*100, y*100, 8, sx, sy);
													  flag=1;
												  }
												else
													   if(strcmpi(Func,"x^2")==0)
													   {
														   y=x*x;
														   plotg(x*100, y*100, 8, sx, sy);
														   flag=1;
													   }
													   else
														   if(strcmpi(Func,"e^2x")==0)
														   {
															   y=exp(2*x);
															   plotg(x*100, y*100, 8, sx, sy);
															   flag=1;
														   }
														   else
															   if(strcmpi(Func,"2x")==0)
															    {
																   y=2*x;
																   plotg(x*100, y*100, 8, sx, sy);
																   flag=1;
															    }
															   else
																   if(strcmpi(Func,"e^8x")==0)
																    {
																	   y=exp(8*x);
																	   plotg(x*100, y*100, 8, sx, y);
																	   flag=1;
																   }
																   else
																	   if(strcmpi(Func,"2^x")==0)
																	   {
																		    y=pow(2,x);
																		   plotg(x*100, y*100, 8, sx, y);
																		   flag=1;
																	   }
																	   else
																		    if(strcmpi(Func,"-2^x")==0)
																		    {
																			    y=pow(-2,fabs(x));
																			    plotg(x*100, y*100, 8, sx, y);
																			flag=1;
																		    }
																		else
																			if(strcmpi(Func,"e^x")==0)
																			   {
																				   y=exp(x);
																				   plotg(x*100, y*100, 8, sx, sy);
																				   flag=1;
																			   }
																			   else
																				   if(strcmpi(Func,"sin(x)-cos(x)")==0)
																				   {
																					   y=sin(x)-cos(x);
																					   plotg(x*100, y*100, 8, sx, sy);
																						flag=1;
																				   }
																				   else
																					   if(strcmpi(Func,"e^e^x")==0)
																					   {
																						   y=exp(exp(x));
																						plotg(x*100, y*100, 8, sx, sy);
																						   flag=1;
																					   }
																					   else
																						  if(strcmpi(Func,"sinh(x)") == 0 )
																						    {
																							     y=sinh(x);
																							     plotg(x*100,y*100,8,sx,sy);
																							     flag=1;
																						    }
																						  else
																							if(strcmpi(Func,"cosh(x)") == 0 )
																							{
																								y=cosh(x) ;
																								plotg(x*100,y*100,8,sx,sy);
																								flag=1;
																							 }
																							 else
																								  if(strcmpi(Func,"tanh(x)") == 0 )
																								{
																									  y=tanh(x) ;
																									plotg(x*100,y*100,8,sx,sy);
																									flag=1;
																								  }
																								  else
																									 if(strcmpi(Func,"coth(x)") == 0 )
																									   {
																										y=1/tanh(x) ;
																										plotg(x*100,y*100,8,sx,sy);
																										 flag=1;
																									   }
																									  else
																										  if(strcmpi(Func,"cosech(x)") == 0 )
																										  {
																											   y=1/sinh(x) ;
																											   plotg(x*100,y*100,8,sx,sy);
																													 flag=1;
																										   }
																										    else
																											  if(strcmpi(Func,"sech(x)") == 0 )
																											{
																												  y=1/cosh(x) ;
																													plotg(x*100,y*100,8,sx,sy);
																													flag=1;
																											    }
																											    else
																												   if(strcmpi(Func,"cos(e^x)") == 0 )
																												     {

																													 y=(cos(exp(x)));
																													plotg(x*100,y*100,8,sx,sy);
																													flag=1;

																													}
																												     else

					if(strcmpi(Func,"tan(e^x)") == 0 )
					{
						  y=tan(exp(x));
						plotg(x*100,y*100,7,sx,sy);
						flag=1;
					}
					else

					if(strcmpi(Func,"cot(e^x)") == 0 )
					{
						  y=1/tan(exp(x)) ;
						plotg(x*100,y*100,7,sx,sy);
						flag=1;
					}

														}//close for


							   if(flag==0)
							    {
							     cout<<"\n\t Sorry....Looks like the function doesn't exist \n\t or you didn't enter it in the prescribed format \n\t Apologise for inconvenience caused";
							    }


		getch();
		  }//close else
	     }while(1);//close do
}
void outro()
{   initialize_graphics();
	initialize_background(5);
	class figurecal
{
	public:
	    char ch1,ch,ch2,ch3,ch4;
	    char ans;
	    int a,b,c,res,cir,cho,cu,cub,con,cyl,sph,y0,l;
	    int color;
	    int bottom1;
	    int midx, midy;
	    int stangle , endangle;
	    int xradius,yradius;
	    int x1,y1;
	    int left,top,right,bottom;
	    int a1,a2,a3,a4,b1,b2,b3,b4;
	    float x,y,z,d,w,side,area,pm,len,bre,rad,circum;
	    long double lo;
}o;
	for(o.left=0,o.top=0,o.right=640,o.bottom=480,o.y0=0,o.l=0,o.color=0;o.left<149,o.right>501,o.top<149,o.bottom>356;o.left++,o.top++,o.right--,o.bottom--,o.y0+=2,o.l++,o.color++)
	{
		setcolor(o.color);
		rectangle(o.left,o.top,o.right,o.bottom);
		delay(2);
		settextstyle(4,0,4);
		outtextxy(151,147,"************************* ");
		outtextxy(151,300,"************************* ");
		settextstyle(10,0,4);
		outtextxy(170,210,"THANK YOU");
		delay(8);
	}
	setcolor(10);
	settextstyle(4,0,4);
	outtextxy(151,147,"************************* ");
	outtextxy(151,300,"************************* ");
	settextstyle(10,0,4);
	outtextxy(170,210,"THANK YOU");
	delay(100);
	exit(0);

}

class myCircle
{
	private:
	int x,y,r,d,x1,y1;
	public:
	myCircle();
	void showCircle();
};

myCircle::myCircle()
{
		x=0;y=0;
		cout<<endl<<endl<<"Enter The Co-Ordinates Of The Circle :=";
		cin>>x>>y;
		y=-y;
		cout<<endl<<endl<<"Enter The Radius Of The Circle =";
		cin>>r;
		cleardevice();
		cout<<"\n\t The equation of the circle is (x-"<<x<<")^2-(y-"<<y<<")^2="<<r*r;
}

void myCircle::showCircle()
{

		char *s;
		x1=0;y1=r;
		y1=r;
		d=3+(2*r);
		while(x1<=y1)
			{
			putpixel((x+x1+320),(y+y1+240),5);
			putpixel((x-x1+320),(y+y1+240),5);
			putpixel((x+x1+320),(y-y1+240),5);
			putpixel((x-x1+320),(y-y1+240),5);
			putpixel((x+y1+320),(y+x1+240),5);
			putpixel((x-y1+320),(y+x1+240),5);
			putpixel((x+y1+320),(y-x1+240),5);
			putpixel((x-y1+320),(y-x1+240),5);
			if(d<0)
			d+=4*x1+6;
			else
				{
				d+=4*(x1-y1)+10;
				y1--;
				}
			x1++;
			}
		setcolor(5);
		outtextxy(318+x,235+y,".");
		setcolor(15);
		sprintf(s,"Center(%d,%d)",x,y*-1);
		outtextxy(20,10,"The Center Is At");
		outtextxy(20,20,s);
		sprintf(s,"Radius=%d",r);
		outtextxy(20,30,s);
		getch();
}

void circle()
{
	initialize_graphics();


	initialize_background(5);
	setbkcolor(0);
	int i,j;
	window(1,1,40,25);
	myCircle a;
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(i=130;i<=510;i+=10)
		for(j=50;j<=430;j+=10)
		putpixel(i,j,15);
	      for(i=130;i<=510;i+=10)
		{
		if(i==320)
		continue;	outtextxy(i,237,"-");
		}
	for(i=50;i<=430;i+=10)
		{
		if(i==240)
		continue;
		outtextxy(317,i,"_");
		}
	outtextxy(310,230,"O");
	outtextxy(530,240,"X");
	outtextxy(320,450,"-Y");
	outtextxy(100,240,"-X");
	outtextxy(320,30,"Y");
	a.showCircle();

}
void ellipse()

{
       clrscr();
	initialize_graphics();
	initialize_background(5);
	setbkcolor(0);
	int xc,yc,x,y;
	float p;
	long rx,ry;
	xc=getmaxx()/2;
	yc=getmaxy()/2;
	cout<<"Enter a:";
	cin>>rx;
	cout<<"Enter b:";
	cin>>ry;
	cleardevice();
	if(rx>ry)
		cout<<"The equation of the ellipse is x^2/"<<rx*rx<<" +  y^2/"<<ry*ry<<"=1";
	else
		cout<<"The equation of the ellipse is y^2/"<<ry*ry<<" + x^2/"<<rx*rx<<"=1";
	p=ry*ry-rx*rx*ry+rx*rx/4;
	x=0;y=ry;
	while(2.0*ry*ry*x<=2.0*rx*rx*y)
	{
		if(p < 0)
		{
		x++;
		p = p+2*ry*ry*x+ry*ry;
		}
		else
		{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y-ry*ry;
		}
	putpixel(xc+x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc-x,yc-y,RED);
	}
	p=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
	while(y > 0)
	{
		if(p <= 0)
		{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y+rx*rx;
		}
		else
		{
		y--;
		p = p-2*rx*rx*y+rx*rx;
		}
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
	}
	int i,j;
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(i=130;i<=510;i+=10)
		for(j=50;j<=430;j+=10)
		putpixel(i,j,15);
		for(i=130;i<=510;i+=10)
		{
		if(i==320)
		continue;
		outtextxy(i,237,"-");
		}
	for(i=50;i<=430;i+=10)
		{
		if(i==240)
		continue;
		outtextxy(317,i,"_");
		}
	outtextxy(310,230,"O");
	outtextxy(530,240,"X");
	outtextxy(320,450,"-Y");
	outtextxy(100,240,"-X");
	outtextxy(320,30,"Y");

}

void linear()
{       initialize_background(5);
	cout<<"Enter the slope and the y intercept of the line(int,int) :";
	int m,c;
	cin>>m>>c;
	char msg[30];
	initialize_background(0);
	draw_graph(15);
	int y;
	for(int x=-sx;x<sx;x++)
	{
		y=x*m+c;
		if(sy>fabs(y))
		{

			if(x>0)
				lineto(sx+x,sy-y);
			else
				moveto(sx+x,sy-y);

			if(x%10==0)
			{
				putpixel(sx+x-2,sy-y,5);
				sprintf(msg, "(%d, %d)",x,y);
				outtextxy(sx+x,sy-y,msg);

			}
		}
	}



}
void quadratic()
{       initialize_background();
	cout<<"Enter a b and c of Quadratic ax^2+bx+c=0 :";
	int a,b,c;
	cin>>a>>b>>c;
	char msg[30];
	initialize_background(0);
	draw_graph(15);
	int y;
	for(int x=-sx;x<sx;x++)
	{
		y=a*x*x+b*x+c;
		if(sy>fabs(y))
		{

			if(x!=-sx)
				lineto(sx+x,sy-y);
			else
				moveto(sx+x,sy-y);

			putpixel(sx+x-2,sy-y,5);
			if(x%10==0)
			{

				sprintf(msg, "(%d, %d)",x,y);
				outtextxy(sx+x,sy-y,msg);

			}
		}
	}
}

void cubic()
{       initialize_background();
	cout<<"Enter a b c and d of the Cubic Eqaution a^3+bx^2+cx+d=0 : ";
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	char msg[30];
	initialize_background(0);
	draw_graph(15);
	int y;
	for(int x=-sx;x<sx;x++)
	{
		y=a*x*x*x+b*x*x+c*x+d;
		if(sy>fabs(y))
		{

			if(x!=-sx)
				lineto(sx+x,sy-y);
			else
				moveto(sx+x,sy-y);

			putpixel(sx+x-2,sy-y,5);
			if(x%10==0)
			{

				sprintf(msg, "(%d, %d)",x,y);
				outtextxy(sx+x,sy-y,msg);

			}
		}
	}
}

void sine()
{
	initialize_background();
	int scx,scy;
	cout<<"Enter scale along x axis and y axis : ";
	cin>>scx>>scy;
	char msg[30];
	initialize_background(2);
	draw_graph(15);
	int y;
	for(int x=-sx*scx;x<sx*scx;x+=scx)
	{
		y=sin(x)*scy;
		if(sy>fabs(y)&&sx>fabs(x))
		{

			if(x!=-sx)
				lineto(sx+x,sy-y);
			else
				moveto(sx+x,sy-y);

			putpixel(sx+x-2,sy-y,5);
			if(x%10==0)
			{

				sprintf(msg, "(%d, %d)",x,y);
				outtextxy(sx+x,sy-y,msg);

			}
		}
	}
}

void bubble()
{       initialize_background(0);
	int sx=getmaxx();
	int sy=getmaxy();
	int a[1000];
	int dx=25;
	int n=sx/dx;
	for(int i=0;i<n;i++)
	{
		a[i]=random(sy);
		rectangle(i*dx,sy-a[i],(i+1)*dx,sy);
	       //	getimage

	}

	cout<<"Number of elments to sort in 1D Array : "<<n;
	getch();
	initialize_background(0);
	int com=0;
	int c=0;
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				com++;

			}
		clrscr();
		cleardevice();
		cout<<"No of Array Accesses :"<<com;
		cout<<"\nNo of computations "<<c;
		for(int K=0;K<n;K++)
		{

			setcolor(5);

			rectangle(K*dx,sy-a[K],(K+1)*dx,sy);
		}

		c++;
		}

	}
	getch();

}
int matherr (struct exception *a)
{

  if (errno==EDOM)
  {    return 1;
    }
  return 0;
}
int asdf=0;



void g()
{
	#define f(x) exp(x)
	extern int errno;
	initialize_graphics();
	initialize_background(0);
	draw_graph();
	int sx=getmaxx()/2;
	int sy=getmaxy()/2;
	double x,y,dx,s=0,scx,scy,m,d;
	int c=3,ed;
	double len=30;
	int u,l;
	dx=0.001;
	l=-50;
	u=100;
	scx=100;
	scy=100;
	for(x=-sx;x<sx;x+=dx)
	{
		if(fabs(x*scx)<sx)
		{       y=f(x);
			if(errno!=EDOM)
			{
			y*=scy;
			x*=scx;
			if(x>=l&&x<=u)
			{
				s+=y*dx;
				line(sx+x,sy,sx+x,sy-y);
			}
			plot(x,y,c,0,len,sx,sy,m);
			asdf++;

			delay(1);


			m=(f(x+dx)-f(x))/dx;
			m=-1/m;
			y/=scy;
			x/=scx;

		}
		}
	}
	cout<<"The value of the integral is"<<s;
	getch();
}
/*
#define ifunc(x) sin(x)
double integral(double l,double u)
{
	double dx=0.001;
	double sum=0;
	for(double x=l,x<=u;x+=dx)
	{
		sum+=ifunc(x);
	}
	return sum;
}
*/



//#define g(x) tan(x)
double coeff(int n,double f,double T,double x)
{
	double c;
	double dx=0.1;
	double sum=0;
	for(double p=0;p<=T;p+=dx)
	{
		sum+=sin(2*M_PI*f*n*x)*dx;
	}
	return sum/T;
}


void fourier()
{
	initialize_graphics();
	initialize_background();
	float r=60;
	float w=1;
	float t=-2*M_PI;
	float phase=0;
	float mx=220,my=200;
	int n=50;
	void draw();
	class circ
	{
		public:
		float radius,cx,cy,w,x,y;
		void draw_circ()
		{

			circle(cx,cy,radius);

		}
	}c[100];
	t=0;
	while(1)
	{
		draw();
		if(kbhit()!=0)
			break;

	}
}

float r=60;
float w=1;
float t=-2*M_PI;
float phase=0;
float mx=220,my=200;
int n=50;
class circ
{
   public:
   float radius,cx,cy,w,x,y;
   void draw_circ()
   {
   //	setbkcolor(0);
       circle(cx,cy,radius);

   }
}c[100];
void draw()
{
  if(t==0)
  {
      t=-2*M_PI;
  }
  float px=mx;
  float py=my;
  float pr=r;
  float pw=w;
  c[0].radius=pr;
  c[0].cx=mx;
  c[0].cy=my;
  c[0].w=pw;
  c[0].x=c[0].radius*cos(c[0].w*t)+c[0].cx;
  c[0].y=-c[0].radius*sin(c[0].w*t)+c[0].cy;
  c[0].draw_circ();
  float sx=c[0].radius*cos(c[0].w*t);
  float sy=c[0].radius*sin(c[0].w*t);

  for(int i=1;i<n;i++)
  {
      pr=r/((i+1));
      pw=2*(i+1)-1;
      px=c[i-1].x;
      py=c[i-1].y;
      c[i].radius=pr;
      c[i].cx=px;
      c[i].cy=py;
      c[i].w=pw;
      c[i].x=c[i].radius*cos(c[i].w*t)+c[i].cx;
      c[i].y=-c[i].radius*sin(c[i].w*t)+c[i].cy;
      c[i].draw_circ();
      sx=sx+c[i].radius*cos(c[i].w*t);
      sy=sy+c[i].radius*sin(c[i].w*t);

  }
  circle(mx+100+10*t,my-sy,3);
  line(mx+100,my-sy,mx+100+10*t,my-sy);
  delay(50);
  t+=0.1;
  cleardevice();
}
void selection_sort()
{
	int gdriver = EGA, gmode = EGAHI, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	const int sx=getmaxx();
	const int sy=getmaxy();
	int a[1000];
	int dx=100;
	setcolor(3);

	int n=sx/dx;
	for(int i=0;i<n;i++)
	{
		a[i]=random(sy);
		for(int j=i*dx;j<dx+i*dx;j++)
		{
			line(j,sy,j,sy-a[i]);

		}
	}

	cout<<n;
	getch();

	int c=1;int position;
	int small=0;
	for(i=0;i<n;i++)
	{       small=a[i];
		position=i;
		for(int j=i+1; j<n; j++)
		{


			if(a[j]<small)
			{
				small=a[j];
				position=j;
				a[position]=a[i];
				a[i]=small;

			}
			cleardevice();
		clrscr();
		for(int k=0;k<n;k++)
		{
			for(int j=k*dx;j<dx+k*dx;j++)
			{
				line(j,sy,j,sy-a[k]);

			}
		}
		delay(10);



		}

	}//outer for
	getch();
}

