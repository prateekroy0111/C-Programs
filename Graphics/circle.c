#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    circle(50,50,50);
    circle(25,35,10);
    circle(65,35,10);
    arc(50,60,180,360,20);
    getch();
    closegraph();
}
