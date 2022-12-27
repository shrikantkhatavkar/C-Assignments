////////////////////////////////////////////////////////////////
/////////////////////// Name : Shrikant
////////////////////// Date : 27-12-22
/////////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//1.Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

//Input : 79
//Output : 15

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	iMask = iMask<<(iPos-1);
	UINT iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{	
		iNo = iNo&(~iMask);
	}
	return iNo;
	
}
int main()
{
	int iNum = 0, iValue = 0, iRes = 0;
	printf("Enter Number :  ");
	scanf("%d",&iNum);
	
	printf("Enter position :  ");
	scanf("%d",&iValue);
	
	iRes = OffBit(iNum, iValue);
	printf("modified NUmber is : %d", iRes);

	return 0;
}
