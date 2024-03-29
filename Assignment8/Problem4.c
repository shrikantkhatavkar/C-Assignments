////////////////////////////////////////////////////
//////////////// Name : Shrikant
/////////////// Date : 19-12-22
////////////////////////////////////////////////////

//Calculate Time Complexity of each program.

//4.Write a program which accept range from user and return addition of all even numbers in between that range. 
//(Range should contains positive numbers only)

//Input : 23 30
//Output : 108

//Input : 10 18
//Output : 70

//Input : -10 2
//Output : Invalid range

//Input : 90 18
//Output : Invalid range

#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
	int iAdd = 0;
	if ((iStart > iEnd) || (iStart <= 0 ) || (iEnd <= 0) )
	{
		return 0;
	}
	
	for(int i = iStart; i<=iEnd; i++)
	{
		if((i%2) == 0)
		{
			iAdd+=i;
		}
	}
	return iAdd;
}
int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point\n");
scanf("%d",&iValue1);
printf("Enter ending point\n");
scanf("%d",&iValue2);
iRet = RangeSumEven(iValue1, iValue2);
if(iRet == 0)
{
	printf("Invalid range\n");
}
else
{
	printf("Addition is %d\n",iRet);
}
return 0;
}
