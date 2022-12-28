////////////////////////////////////////////////////////////
////////////////////// Name : Shrikant
///////////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

//Input : 10 15 (1010 1111)
//Output : 2 4

#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	int iCnt = 1;
	UINT iResult = 0;
	iResult = iNo1 & iNo2; 
	while(iResult>0)
	{
		if((iResult&1) == 1)
		{
			printf("%d\t",iCnt);
		}
		iCnt++;
		iResult = iResult>>1;
	}
}

int main()
{
	UINT iValue1 = 0, iValue2 = 0;

	printf("Enter Number 1: ");
	scanf("%d",&iValue1);
	
	printf("Enter Number 2: ");
	scanf("%d",&iValue2);
	
	CommonBits(iValue1, iValue2);
	
	return 0;
}
