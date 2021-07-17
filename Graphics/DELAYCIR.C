#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=200;i=i+1)
{
circle(200,300,i);
//sleep(1);//
delay(1);
}
getch();
closegraph();
}