////////////////////////////////////////////////////////////
////////////////////// Name : Shrikant
///////////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

//Input : 257
//Output : TRUE

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00000001;
	if(  ((iNo&(iMask<<8)) == (iMask<<8)) || ((iNo&(iMask<<11)) == (iMask<<11)) )
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
	UINT iValue1 = 0, bRet = 0;

	printf("Enter Number : ");
	scanf("%d",&iValue1);
	
	bRet = ChkBit(iValue1);
	if(bRet = TRUE)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;
}
