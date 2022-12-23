/////////////////////////////////////////////
////////// Name : Shrikant
///////// Date : 23-12-22
/////////////////////////////////////////////

//1. Accept N numbers from user and return the largest number.
//Input : N : 6
//Elements :85 66 3 66 93 88
//Output : 93

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
	int iMax = 0;
	for(int i = 0; i<iLength;i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
}

int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;

int *p = NULL;

printf("Enter number of elements\n");
scanf("%d",&iSize);

p = (int *)malloc(iSize * sizeof(int));

if(p == NULL)
{
printf("Unable to allocate memory\n");
return -1;
}

printf("Enter %d elements\n",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

iRet = Maximum(p, iSize);
printf("Largest Number is %d\n",iRet);

free(p);
return 0;
}
