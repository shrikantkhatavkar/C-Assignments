/////////////////////////////////////
///////// Name : Shrikant
//////// Date : 16-12-22
////////////////////////////////////

//4.Write a program which accept number from user and return summation of all its non factors.
//Input : 12
//Output : 50

//Input : 10
//Output : 37

#include<stdio.h>
int SumNonFact(int iNo)
{
	int iMulFact = 0;
	for(int i = 1; iNo>i;i++)
	{
		if(iNo%i != 0)
		{
			iMulFact = i+iMulFact;
		}
	}
	return iMulFact;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = SumNonFact(iValue);
printf("%d\n",iRet);
return 0;
}
