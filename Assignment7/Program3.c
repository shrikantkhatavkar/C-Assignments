///////////////////////////////////////////////////
//////////////////// Name : Shrikant
/////////////////// Data : 19-12-2022
//////////////////////////////////////////////////

//Calculate Time Complexity of each program.

//3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)

//Input : 5
//Output : 5000

//Input : 12
//Output : 12000

#include<stdio.h>
int KMtoMeter(int iNo)
{
	int iKm = 0;
	iKm = iNo*1000;
	return iKm;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance in KMtoMeter\n");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("Distance in Meter is %d\n", iRet);
return 0;
}
