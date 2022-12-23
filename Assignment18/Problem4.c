///////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 23-12-22
//////////////////////////////////////////////////

//4. Accept N numbers from user and accept Range, Display all elements from that range

//Input : N : 6
//Start: 60
//End : 90
//Elements :85 66 3 76 93 88
//Output : 85 66 76 88

//Input : N : 6
//Start: 30
//End : 50
//Elements :85 66 3 76 93 88
//Output :

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
	for(int i = 0; i<iLength; i++)
	{
		if( (Arr[i]) < (iEnd) &&  (Arr[i]) > (iStart) )
		{
			printf("%d ", Arr[i]);
		}
	}
}

int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue1 = 0,iValue2 = 0;

int *p = NULL;

printf("Enter number of elements\n");
scanf("%d",&iSize);

printf("Enter the starting point\n");
scanf("%d",&iValue1);

printf("Enter the ending point\n");
scanf("%d",&iValue2);

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

Range(p, iSize,iValue1, iValue2);

free(p);
return 0;
}
