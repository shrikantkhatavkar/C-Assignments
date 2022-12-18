////////////////////////////////////////////////
///////////////// Name : Shrikant
//////////////// Date : 18-12-22
///////////////////////////////////////////////

//Calculate Time Complexity of each program.

//2.Write a program which accept number from user and return the count of odd digits.

//Input : 2395
//Output : 3

//Input : 1018
//Output : 2

//Input : -1018
//Output : 2

//Input : 8462
//Output : 0

#include<stdio.h>

int CountOdd(int iNo)
{
	if(iNo<=0)
	{
		iNo = -iNo;
	}
	
	int iCount = 0;
	while(iNo != 0)
	{
		if( ((iNo%10)%2) != 0)
		{
				iCount++;
		}
		iNo = iNo/10;
	}
	return iCount;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountOdd(iValue);
printf("%d",iRet);
return 0;
}
