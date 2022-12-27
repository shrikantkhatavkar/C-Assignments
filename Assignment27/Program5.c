/////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 27-12-22
/////////////////////////////////////////////////////

//5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
 	UINT iMask = 0x80000001;
	UINT iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{	return TRUE;}
	else
	{	return FALSE;}
}

int main()
{
	int iNum = 0;
	BOOL iRes = FALSE;
	printf("Enter Number :  ");
	scanf("%d",&iNum);
	iRes = ChkBit(iNum);
	if(iRes == TRUE)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	return 0;
}


