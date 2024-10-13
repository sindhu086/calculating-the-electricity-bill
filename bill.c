#include<stdio.h>
void main()
int unit;
float t;
printf("enter the unit:");
scanf("%d",&unit);
if(unit<=50)
{ 
     t=unit*0.5;
     printf("total electicity bill is %f",t);
}
else if(unit<=150)
{
      t=unit*0.75;
      printf("total electricity bill is %f",t);
}
else if(unit<=250)
{
      t=unit*1.2;
      printf("total electricity bill is %f",t);
}
else
{
      t=unit*1.5;
      printf("total electricity bill is %f",t);
}
}




