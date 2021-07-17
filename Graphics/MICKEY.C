#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    circle(150,150,50);
    arc(100,100,0,270,30);
    arc(200,100,270,540,30);
    circle(130,135,10);
    circle(175,135,10);
    arc(150,160,180,360,30);
    getch();
    closegraph();
}