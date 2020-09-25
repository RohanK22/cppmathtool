#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver = EGA, gmode = EGAHI, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

	float sx=getmaxx();
	float sy=getmaxy();
	float dx=2/sx;
	float dy=2/sy;
	for(float x=-sx/2;x<sx/2;x+=dx)
	{
		for(float y=-sy/2;y<sy/2;y+=dy)
		{

			float a=x,b=y,px=0,py=0,t=0;
			for(int i=0;i<4;i++)
			{
							px=px*px-py*py+a;
				py=2*px*py+y;
			}
			if(px*px+py*py<4)
				putpixel(int(px*dx),int(py*dy),5);
		}
	}
	getch();
}
