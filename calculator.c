#include<stdio.h>
int main ()
{
int num1,num2;
char operator;
printf("Enter the first number\n");
scanf("%d",&num1);
printf("Enter the operation to perform ('+''-''*''/')\n");
scanf(" %c",&operator);
printf("Enter the second number\t");
scanf("%d",&num2);
if (operator=='+')
{
printf("%d",num1+num2);
}
else if (operator=='-')
{
printf("%d",num1-num2);
}
else if (operator=='*')
{
printf("%d",num1*num2);
}
else if (operator=='/')
{
    if((num1<=0)||(num2<=0)) 

      {
 printf("Warning:Can't divide negative numbers or 0");

}
else
{ 
printf("%d",num1/num2);

}
      }
else 
{
printf("Invalid operator");
}

return 0;
}