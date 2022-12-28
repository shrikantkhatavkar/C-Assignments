/////////////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions separately.

//2. Write a program which accept one number and position from user and off that bit. Return modified number.

//Input : 10 2
//Output : 8

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001, iValue1 = 0;
	iMask  = iMask<<(iPos-1);
	iValue1 = iNo & iMask;
	if(iValue1 == iMask)
	{
		return (iNo^iMask);
	}
}

int main()
{
	UINT iValue = 0, iPos = 0, iResult = 0;
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	printf("Enter Position : ");
	scanf("%d",&iPos);
	
	iResult = OffBit(iValue, iPos);
	printf("Modified number is : %d ", iResult);
	return 0;
}
