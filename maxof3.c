#include <stdio.h>
int main()
{
int x,y,z,max;
printf("Enter first number\n");
scanf("%d",&x);
printf("Enter second number\n");
scanf("%d",&y);
printf("Enter third number\n");
scanf("%d",&z);
max=(x>y)? (x>z ? x:z) : (y>z? y:z);
printf("Largest = %d",max);
return 0;
}