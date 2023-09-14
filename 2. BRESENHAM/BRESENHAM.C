#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int x1,y1,x2,y2,dx,dy,pk,x,y,i;
  int gd=DETECT;
  int gm;
  printf("Enter the x1 and y1");
  scanf("%d %d",&x1,&y1);
  printf("Enter the x2 and y2");
  scanf("%d %d",&x2,&y2);
  initgraph(&gd,&gm,"..//bgi");
  dx=x2-x1;
  dy=y2-y1;
  pk=2*dy-dx;
  x=x1;
  y=y1;
  for(i=0;i<=dx;i++)
  {
    putpixel(x,y,9);
    while(pk>=0)
    {
      y=y+1;
      pk=pk-2*dx;
    }
    x=x+1;
    pk=pk+2*dx;
  }
  getch();
  closegraph();
  return 0;
}


