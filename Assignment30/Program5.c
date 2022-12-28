////////////////////////////////////////////////////////////
////////////////////// Name : Shrikant
///////////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

//Input : 897 9 13
//Toggle all bits from position 9 to 13 of input number ie 879.

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask = 0x00000001, iMask1 = 0;
	while(iStart<= iEnd)
	{
		iMask1 = iMask1 | (iMask<<(iStart-1));
		iStart++;
	}
	return (iNo^iMask1);
}

int main()
{
	UINT iValue1 = 0, iP1 = 0, iP2 = 0, bRet = 0;
	
	printf("Enter Number 1: ");
	scanf("%d",&iValue1);
	
	printf("Enter Pos 1: ");
	scanf("%d",&iP1);
	
	printf("Enter Pos 2: ");
	scanf("%d",&iP2);
	
		if( (iP1<1) || (iP1>32) || (iP2<1) || (iP2>32) || (iP1>iP2) )
	{
		printf("Invalid Number ");
	}
	else
	{
		bRet =  ToggleBitRange(iValue1, iP1, iP2);

		printf("Modified number is : \n%d", bRet);
	}
	return 0;
}
