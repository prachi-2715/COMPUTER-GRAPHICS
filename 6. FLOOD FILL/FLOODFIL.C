#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void floodFill(int x,int y,int newcolor,int oldcolor)
{
  if(getpixel(x,y) == oldcolor)
  {
    putpixel(x,y,newcolor);
    delay(10);
    floodFill(x+1,y,newcolor,oldcolor);
    floodFill(x,y+1,newcolor,oldcolor);
    floodFill(x-1,y,newcolor,oldcolor);
    floodFill(x,y-1,newcolor,oldcolor);
    floodFill(x-1,y-1,newcolor,oldcolor);
    floodFill(x-1,y+1,newcolor,oldcolor);
    floodFill(x+1,y-1,newcolor,oldcolor);
    floodFill(x+1,y+1,newcolor,oldcolor);
  }
}
void main()
{
  int gm,gd=DETECT,radius;
  int x,y;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter x and y positions for circle\n");
  scanf("%d%d",&x,&y);
  printf("Enter the radius of circle\n");
  scanf("%d",&radius);
  circle(x,y,radius);
  floodFill(x,y,3,15);
  getch();
  closegraph();
}
