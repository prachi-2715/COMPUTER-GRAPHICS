#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
  int dx,dy,step,xn,yn,x1,x2,y1,y2,i;
  int gd = DETECT, gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  printf("Enter x1, y1");
  scanf("%d %d",&x1,&y1);
  printf("Enter y1, y2");
  scanf("%d %d",&x2,&y2);
  dx = x2 - x1;
  dy = y2 - y1;
  if(abs(dx) < abs(dy))
  {
    step = dy;
  }
  else
  {
    step = dx;
  }
  xn = dx / step;
  yn = dy / step;
  for(i=1;i<= step;i++)
  {
    putpixel(x1,y1,RED);
    x1 = x1 + xn;
    y1 = y1 + yn;
  }
  getch();
  closegraph();
}