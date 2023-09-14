#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int r,xc,yc,x,y,pk;
  int gd = DETECT;
  int gm;
  printf("Enter the Radius and Center Co-ordinate");
  scanf("%d %d %d",&r,&xc,&yc);
  initgraph(&gd,&gm,"..//bgi");
  x = 0;
  y = r;
  pk = 1 - r;
  while( x <= y)
  {
    putpixel(xc+x,yc+y,1);
    putpixel(xc+x,yc-y,2);
    putpixel(xc-x,yc+y,3);
    putpixel(xc-x,yc-y,4);
    putpixel(yc+y,xc+x,5);
    putpixel(yc+y,xc-x,6);
    putpixel(yc-y,xc+x,7);
    putpixel(yc-y,xc-x,8);
    if(pk < 0)
    {
      pk = pk + 2*x+3;
    }
    else
    {
      pk=pk+2*(x - y)+5;
      y=y-1;
    }
    x = x+1;
  }
  getch();
  closegraph();
  return 0;
}