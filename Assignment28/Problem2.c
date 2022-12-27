////////////////////////////////////////////////////////////////
/////////////////////// Name : Shrikant
////////////////////// Date : 27-12-22
/////////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.

//Input : 577
//Output : 1

#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
	UINT iMask = 0x00000240;
	
	iNo = iNo&(~iMask);

	return iNo;
}
int main()
{
	int iNum = 0, iRes = 0;
	printf("Enter Number :  ");
	scanf("%d",&iNum);
	
	iRes = OffBit(iNum);
	printf("modified NUmber is : %d", iRes);

	return 0;
}
