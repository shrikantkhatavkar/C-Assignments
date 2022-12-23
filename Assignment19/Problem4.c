/////////////////////////////////////////////
////////// Name : Shrikant
///////// Date : 23-12-22
/////////////////////////////////////////////

//4. Accept N numbers from user and display all such numbers which contains 3 digits in it.

//Input : N : 6
//Elements :8225 665 3 76 953 858
//Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{	int iCnt, iNum = 0;
	for(int i = 0; i<iLength;i++)
	{
		iCnt = 1;
		iNum = Arr[i];
		while(iNum != 0)
		{
			if( (iNum/10) != 0)
			{
				iCnt++;
			}
			iNum = iNum/10;
		}
		if(iCnt == 3)
		{
			printf("%d ", Arr[i]);
		}
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

printf("Enter %d elements \n",iSize);

for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of : %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

Digits(p, iSize);

free(p);
return 0;
}
