///////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 23-12-22
//////////////////////////////////////////////////

//5. Accept N numbers from user and return product of all odd elements.

//Input : N : 6
//Elements :15 66 3 70 10 88
//Output : 45
//Input : N : 6
//Elements :44 66 72 70 10 88
//Output : 0

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int iSum = 1, iCnnt = 0;
	for(int i = 0; i<iLength;i++)
	{
		if(Arr[i]%2 != 0)
		{
			iSum *= Arr[i];
			iCnnt++;
		}
	}
	if(iCnnt == 0)
	{
		return 0;
	}
	else
	{
		return iSum;
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
printf("Enter %d element of: %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}

iRet = Product(p, iSize);
printf("Product is %d\n",iRet);

free(p);
return 0;
}
