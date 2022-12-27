////////////////////////////////////////////////////////////////
/////////////////////// Name : Shrikant
////////////////////// Date : 27-12-22
/////////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//5. Write a program which accept one number from user and on its first 4 bits. Return modified number.

//Input : 73
//Output : 79

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask = 0x0000000F;
	
	iNo = iNo|iMask;

	return iNo;
}
int main()
{
	int iNum = 0, iRes = 0;
	printf("Enter Number :  ");
	scanf("%d",&iNum);
	
	iRes = OnBit(iNum);
	printf("modified NUmber is : %d", iRes);

	return 0;
}
