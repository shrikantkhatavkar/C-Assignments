////////////////////////////////////////////////////////////
////////////////////// Name : Shrikant
///////////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//4. Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

//Input : 10 3 7
//Output : TRUE

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask = 0x00000001;
	if(  ((iNo&(iMask<<(iPos1-1))) == (iMask<<(iPos1-1))) || ((iNo&(iMask<<(iPos2-1))) == (iMask<<(iPos2-1))) )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT iValue1 = 0, iP1 = 0, iP2 = 0;
	BOOL bRet = 0;
	
	printf("Enter Number 1: ");
	scanf("%d",&iValue1);
	
	printf("Enter Pos 1: ");
	scanf("%d",&iP1);
	
	printf("Enter Pos 2: ");
	scanf("%d",&iP2);
	
	bRet = ChkBit(iValue1, iP1, iP2);
	
	if(bRet = TRUE)
	{
		printf("Bit is ON ");
	}
	else
	{
		printf("Bit is OFF ");
	}	
	return 0;
}
