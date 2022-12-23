/////////////////////////////////////////////
////////// Name : Shrikant
///////// Date : 23-12-22
/////////////////////////////////////////////

//5. Accept N numbers from user and display summation of digits of each number.

//Input : N : 6
//Elements :8225 665 3 76 953 858
//Output : 17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int iCnt, iNum = 0;
	for(int i = 0; i<iLength;i++)
	{
		iCnt = 0;
		iNum = Arr[i];
		while(iNum != 0)
		{
			if( (iNum%10) != 0)
			{
				iCnt += (iNum%10);
			}
			iNum = iNum/10;
		}
		printf("%d ", iCnt);

	}
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
printf("Unable to allocate memory\n");
return -1;
}

printf("Enter %d elements\n",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

DigitsSum(p, iSize);

free(p);
return 0;
}
