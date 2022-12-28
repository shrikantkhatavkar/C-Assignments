////////////////////////////////////////////////////////////
////////////////////// Name : Shrikant
///////////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//1.Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

//Input : 11
//Output : 3

#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	int iCnt = 0;
	while(iNo>0)
	{
		if((iNo&1) == 1)
		{
			iCnt++;
		}
		iNo = iNo>>1;
	}
	return iCnt;
}

int main()
{
	UINT iValue = 0, iResult = 0;

	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iResult = CountOne(iValue);
	printf("Count of ON bit is : %d",iResult);
	
	return 0;
}
