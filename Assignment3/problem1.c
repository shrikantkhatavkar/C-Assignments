//////////////////////////////////////////////////
/////////// Name : Shrikant
/////////// Date : 16/12/2022
////////////////////////////////////////////////
//1.Write a program which accept one number from user and print that number of even numbers on screen.
//Input : 7
//Output: 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
if(iNo <= 0)
{
return;
}
 for(int iNum = 2; (iNo*2)>=iNum; iNum++)
 {
	 if(iNum%2 == 0)
		printf("%d   ",iNum);
 }
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);
return 0;
}
