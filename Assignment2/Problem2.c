///////////////////////////////////////////////////////////
//////////// NAME : Shrikant
//////////// DATE : 16-12-2022
///////////////////////////////////////////////////////////

//2. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
 while( iNo > 0 )
 {
 printf("*");
 iNo--;
 }
}
int main()
{
 int iValue = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 Display(iValue);
 return 0;
}
