#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
int i;
setbkcolor(WHITE); // Set the background color
for(i=0;i<350;i++)
{
settextstyle(3,0,1); //used to change text appearance.
outtextxy(200,40,"SCIENCE");
setcolor(BLUE);
outtextxy(100,40+i,"COMPUTER"); //Display text on screen with y coordinate.
delay(25);
cleardevice();
}
for(i=0;i<350;i++)
{
outtextxy(100,400,"COMPUTER");
setcolor(BLUE);
outtextxy(200,40+i,"SCIENCE"); //Display text on screen w

delay(25);
cleardevice();
}
outtextxy(100,400,"COMPUTER");
outtextxy(200,400,"SCIENCE");
getch();
closegraph();}
