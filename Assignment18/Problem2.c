///////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 23-12-22
//////////////////////////////////////////////////

//2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

//Input : N : 6
//NO: 66
//Elements :85 66 3 66 93 88
//Output : 1 //First occurrence of number is 1

//Input : N : 6
//NO: 12
//Elements :85 11 3 15 11 111
//Output : -1  //There is no such number

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
	for(int i = 0; i<iLength;i++)
	{
		if(Arr[i] == iNo)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;

int *p = NULL;

printf("Enter number of elements\n");
scanf("%d",&iSize);

printf("Enter the number which want to search\n");
scanf("%d",&iValue);

p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}

printf("Enter %d elements\n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter %d element of: %d\n",iCnt+1, iSize);
scanf("%d",&p[iCnt]);
}
iRet = FirstOcc(p, iSize,iValue);

if(iRet == -1)
{
printf("There is no such number\n");
}
else
{
printf("First occurrence of number is %d\n",iRet);
}

free(p);
return 0;
}
