////////////////////////////////////////////////////////////////
/////////////////////// Name : Shrikant
////////////////////// Date : 27-12-22
/////////////////////////////////////////////////////////////

//Complete below code snippets it contains only service provider function.

//Write entry point function to call below helper functions separately.

//3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

//Input : 137
//Output : 201

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0x00000040;
	
	iNo = (iNo^iMask);

	return iNo;
}
int main()
{
	int iNum = 0, iRes = 0;
	printf("Enter Number :  ");
	scanf("%d",&iNum);
	
	iRes = ToggleBit(iNum);
	printf("modified NUmber is : %d", iRes);

	return 0;
}