////////////////////////////////////////////////////
//////////////////// Name : Shrikant
/////////////////// Date : 18-12-22
//////////////////////////////////////////////////

//Calculate Time Complexity of each program.

//3.Write a program which accept number from user and count frequency of 2 in it.

//Input : 2395
//Output : 1

//Input : 1018
//Output : 0

//Input : 9000
//Output : 0

//Input : 922432
//Output : 3

#include<stdio.h>
int CountTwo(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	int iCount = 0;
	
	while(iNo != 0)
	{
		if( (iNo%10) == 2)
		{
			iCount++;
		}
		iNo = iNo/10;
	}
	return iCount;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = CountTwo(iValue);
printf("%d",iRet);
return 0;
}
