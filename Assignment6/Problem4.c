////////////////////////////////////////////////
///////////////// Name : Shrikant
//////////////// Date : 18-12-22
///////////////////////////////////////////////

//Calculate Time Complexity of each program.

//4.Write a program which accept number from user and return multiplication of all digits.

//Input : 2395
//Output : 270

//Input : 1018
//Output : 8

//Input : 9440
//Output : 144

//Input : 922432
//Output : 864

#include<stdio.h>

int MultDigits(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	int iMult = 1;
	while(iNo!=0)
	{
		if((iNo%10) != 0)
		{
			iMult = iMult*(iNo%10);
		}
		iNo = iNo/10;
	}
	return iMult;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = MultDigits(iValue);
printf("%d",iRet);
return 0;
}
