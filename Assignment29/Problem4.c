/////////////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions separately.

//4. Write a program which accept one number and position from user and toggle that bit. Return modified number.

//Input : 10 3
//Output : 14

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	iMask  = iMask<<(iPos-1);
	return (iNo^iMask);
}

int main()
{
	UINT iValue = 0, iPos = 0, iResult = 0;
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	printf("Enter Positin : ");
	scanf("%d",&iPos);
	
	iResult = ToggleBit(iValue, iPos);
	printf("Modified number is : %d ", iResult);
	return 0;
}

