////////////////////////////////////////////////////
//////////////////// Name : Shrikant
/////////////////// Date : 18-12-22
//////////////////////////////////////////////////

//Calculate Time Complexity of each program.

//5.Write a program which accept number from user and count frequency of such a digits which are less than 6.

//Input : 2395
//Output : 3

//Input : 1018
//Output : 3

//Input : 9440
//Output : 3

//Input : 96672
//Output : 1

#include<stdio.h>

int Count(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	int iCount = 0;
	
	while(iNo != 0)
	{
		if((iNo%10) < 6)
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
iRet = Count(iValue);
printf("%d",iRet);
return 0;
}
