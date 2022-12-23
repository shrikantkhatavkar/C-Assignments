//////////////////////////////////////////////////////
///////////// Name : Shrikant 
///////////// Date 23-12-22
//////////////////////////////////////////////////////

//1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

//Input : N : 6
//Elements :85 66 3 80 93 88
//Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
	int i = 0, iSum = 0;
	for(i = 0;iLength>i;i++)
	{
		if(((Arr[i])%2) == 0)
		{
			iSum = iSum + Arr[i];
		}
		else
		{
			iSum = iSum - Arr[i];
		}
	}
	return iSum;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;

int *p = NULL;
printf("Enter number of elements\n");
scanf("%d",&iSize);

p = (int *)malloc(iSize * sizeof(int));

if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}

printf("Enter %d elements \n",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d th element  of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

iRet = Difference(p, iSize);

printf("Result is %d",iRet);
free(p);
return 0;
}
