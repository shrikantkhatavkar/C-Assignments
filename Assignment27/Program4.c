/////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 27-12-22
/////////////////////////////////////////////////////

//4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
 	UINT iMask = 0x000001C0;     // 0000 0000 0000 0000 0000 0001 1100 0000 
	UINT iResult = 0;            //                             1  c   0
	
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


