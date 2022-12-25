/////////////////////////////////////////////////////////
////////////// Name : Shrikant
///////////// Date : 24-12-22
////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//1.Write a program which accept string from user and count number of capital characters.

//Input : “Marvellous Multi OS”
//Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;
// Fileter
	while(*str != '\0')
	{
		if( (*str >= 'A') && (*str <= 'Z') )
		{
			iCnt++;
		}
		*str++;
	}
	return iCnt;
}

int main()
{
char arr[20];
int iRet = 0;
printf("Enter string\n");
scanf("%[^'\n']s",arr);
iRet = CountCapital(arr);
printf("%d",iRet);
return 0;
}
