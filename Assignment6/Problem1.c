////////////////////////////////////////////////
///////////////// Name : Shrikant
//////////////// Date : 18-12-22
///////////////////////////////////////////////

//Calculate Time Complexity of each program.

//1.Write a program which accept number from user and return the count of even digits.

//Input : 2395
//Output : 1

//Input : 1018
//Output : 2

//Input : -1018
//Output : 2

//Input : 8462
//Output : 4

#include<stdio.h>
int CountEven(int iNo)
{
	if(iNo<=0)
	{
		iNo = -iNo;
	}
	
	int iCount = 0;
	while(iNo != 0)
	{
		if( ((iNo%10)%2) == 0)
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
printf("Enter number\n");
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("%d",iRet);
return 0;
}
