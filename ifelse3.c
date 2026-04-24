#include <stdio.h>
int main()
{
int x,y,z;
printf("Enter first number\n");
scanf("%d",&x);
printf("Enter second number\n");
scanf("%d",&y);
printf("Enter third number\n");
scanf("%d",&z);

if(x>=y && x>=z)
      
{
printf("Largest = %d",x);
}
else if(y>=x && y>=z)
{
printf("Largest = %d",y);
}
else 
         {
printf("Largest = %d",z);
         }
return 0;
}