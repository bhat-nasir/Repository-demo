#include<stdio.h>
int main()
{
    int number;
    char *byakh;
    printf("Enter the number \n");
    scanf("%d",&number);
   byakh= (number%11==0)? "Divisible" : "Not divisible" ;
   printf("%s",byakh);

   return 0; 
}