#include<iostream.h>
#include<math.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

float r=60;
float w=1;
float t=-2*M_PI;
float phase=0;
float mx=220,my=200;
int n=50;
//PGraphics pg;
void draw();
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


void main()
{
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "");
  clrscr();
  setbkcolor(0);
  t=0;
  /*
  for(int i=0;i<n;i++)
  {
     c[i]=new circ();
  } */
  cleardevice();
  while(1)
  draw();


}
void draw()
{
//  setbkcolor(0);
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
