/////////////////////////////////////////////
////////// Name : Shrikant
///////// Date : 23-12-22
/////////////////////////////////////////////

//2. Accept N numbers from user and return the smallest number.
//Input : N : 6
//Elements :85 66 3 66 93 88
//Output : 3

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
	int iMin;
	for(int i = 0; i<iLength;i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
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

printf("Enter %d elements",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

iRet = Minimum(p, iSize);
printf("Smallest Number is %d\n",iRet);

free(p);
return 0;
}
