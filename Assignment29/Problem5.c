/////////////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 28-12-22
///////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions separately.

//5. Write a program which accept one number from user and toggle contents
//of first and last nibble of the number. Return modified number. (Nibble is a
//group of four bits)

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0x0000000f;
	return (iNo^iMask);
}

int main()
{
	UINT iValue = 0, iResult = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iResult = ToggleBit(iValue);
	printf("Modified number is : %d ", iResult);
	return 0;
}
