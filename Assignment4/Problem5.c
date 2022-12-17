/////////////////////////////////////
///////// Name : Shrikant
//////// Date : 16-12-22
////////////////////////////////////

//5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

//Input : 12
//Output : -34 (16 - 50)

//Input : 10
//Output : -29 (8 - 37)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iDiff = 0;
	for(int i = 1; iNo>i; i++)
	{
		if(iNo%i == 0)
		{
			iDiff = iDiff+i;
		}
		else
			iDiff = iDiff-i;
	}
	return iDiff;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d\n",iRet);
return 0;
}