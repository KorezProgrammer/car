#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

    #define ScreenWidth getmaxx()
    #define ScreenHeight getmaxy()
    #define GroundY ScreenHeight*0.85

class rain_c
{
public:
   void rain(int x)
   {
    int rx,ry;
    for(int i=0;i<400;i++)
    {
    rx=rand() % ScreenWidth;
    ry=rand() % ScreenHeight;
    if(ry<GroundY-4)
    {
   if(ry<GroundY || (ry>GroundY && (rx<x-20 || rx>x+60)))
   setcolor(9);
   line(rx,ry,rx+0.5,ry+4);
    }
    }

    delay(120);
    cleardevice();
}
void abr()
{
for(int i=0;i<100;i++)
{
//arc(i*7,0,180,360,random(50));
//arc(i*7,0,180,360,random(40));
//arc(i*7,0,180,360,random(60));
//arc(i*7,0,180,360,random(20));
//arc(i*7,0,180,360,random(30));
//arc(i*7,0,180,360,random(70));
//circle(i*7,0,random(70));
//setfillstyle(1,9);
//fillellipse(i*7,0,random(45),random(45));
}
}
};

void car()
{
for(int a=1;a<50;a++)
{
setcolor(random(5));
circle(200,370,a);
circle(500,370,a);
}
setcolor(15);
arc(200,370,0,180,60);
arc(500,370,0,180,60);
line(260,370,440,370);
line(50,370,140,370);
line(50,370,50,350);
arc(50,300,80,270,50);
line(400,300,420,300);
line(350,300,350,370);
line(250,150,60,250); //sagfe mashin 
line(250,150,250,250); //sagfe mashin 
line(58,250,300,250);
arc(350,250,180,0,50);
line(590,250,400,250);
line(530,250,450,200); //poshteye mashin
line(450,200,450,250); //poshteye mashin
line(470,250,470,318);
line(590,370,560,370);
line(590,250,590,370);
setfillstyle(1,14); //cheraghe jelo
fillellipse(30,290,20,10); //cheraghe jelo

/*cheraghe agab {*/for(int x=570;x<=590;x++)
for(int y=295;y<=310;y++)
{

setcolor(4);
rectangle(x,y,570,295);
} //}

}


void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"\\turboc3\\bgi");

int r, z=0,b=420,c=153,x=0;

while(!kbhit())
{
rain_c* baran=new rain_c;
baran->rain(x);
baran->abr();
car();
setcolor(15);
line(z,b,c,420);
delay(150);
setcolor(0);
line(z,b,c,420);
r=random(200);
z=c+r;
c=z+r;
if(z>640)
 {
  z=0; c=155;
 }
if(c>640)
 {
  c=159;z=0;
 }
delete baran;
}
getch();
}
