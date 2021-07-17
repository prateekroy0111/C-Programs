#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=200;i=i+10)
{
setcolor(i);
circle(200,200,i);
delay(1);
}
getch();
closegraph();
}