#include<stdio.H>
int main()
{
char alpha;
printf("Enter the character to check\n");
scanf(" %c",&alpha);
if ((alpha>='A') && (alpha<='Z'))
{
printf("Character %c is upercase",alpha);
}  
else if ((alpha>='a') && (alpha<='z'))
{
printf("Character %c is lowercase",alpha);
}  
else if ((alpha>=48) && (alpha<=57))
{
printf("Character %c is digit",alpha);
}  
else 
{
printf("Character %c is special character",alpha);

}
return 0;
}
