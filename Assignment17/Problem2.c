////////////////////////////////////////////
//////////// Name : Shrikant
//////////// Date : 23-12-22
///////////////////////////////////////////

//2. Accept N numbers from user and return difference between frequency of even number and odd numbers.

//Input : N : 7
//Elements :85 66 3 80 93 88 90
//Output : 1 (4 -3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnnt = 0;
	for(int i = 0; i<iLength;i++)
	{
		if(Arr[i]%2 == 0)
		{
			iCnnt++;
		}
		else
		{
			iCnnt--;
		}
	}
	return iCnnt;
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

printf("Enter %d elements \n",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

iRet = Frequency(p, iSize);
printf("%d",iRet);
free(p);
return 0;
}
