/////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 20-12-22
////////////////////////////////////////////////

//1. Accept number from user and display below pattern.

//Input : 5
//Output : A B C D E

#include<stdio.h>
void Pattern(int iNo)
{
	for(int i = 0;i<iNo;i++)
	{
		printf("%c ",i+65);     // for capital letters i+65  // for small letters i+97
	}
}
int main()
{
int iValue = 0;
printf("Enter number of elements\n");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}
