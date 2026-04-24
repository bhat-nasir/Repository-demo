#include<stdio.h>
int main()
{
float radius;
double  circumference, area, pie;
pie=3.14159265359;
printf("Enter the radius of the circle\n");
scanf("%f",&radius);
circumference =2*pie*radius;
area=pie*radius*radius;
printf("Circumference of the circle = %lf\n ",circumference);
printf("Area of the circle = %lf",area);
return 0;
}
