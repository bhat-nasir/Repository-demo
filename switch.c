#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("MENU\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtractio\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Press any other number for remainder\n");
 scanf("%d",&choice);
switch (choice)
{
case 1:
   result=num1+num2;
    break;
case 2:
result=num1-num2;
break;
case 3:
result=num1*num2;
break;
case 4:
result=num1/num2;
break;
default:
result=num1%num2;
    break;
}
printf("%d",result);
return 0;

}