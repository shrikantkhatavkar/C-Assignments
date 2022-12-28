/////////////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions separately.

//1.Write a program which accept one number and position from user and
//check whether bit at that position is on or off. If bit is On return TURE
//otherwise return FALSE.

//Input : 10 2
//Output : TRUE

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001, iValue1 = 0;
	iMask  = iMask<<(iPos-1);
	iValue1 = iNo & iMask;
	if(iValue1 == iMask)
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
	UINT iValue = 0, iPos = 0, iResult = FALSE;
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	printf("Enter Position : ");
	scanf("%d",&iPos);
	
	iResult = ChkBit(iValue, iPos);
	
	if(iResult == TRUE)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is ON\n");
	}
	return 0;
}
