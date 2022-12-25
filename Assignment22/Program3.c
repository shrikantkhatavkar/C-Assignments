/////////////////////////////////////////////////////////
////////////// Name : Shrikant
///////////// Date : 24-12-22
////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//3. Write a program which accept string from user and return difference between frequency of small 
//characters and frequency of capital characters.

//Input : “MarvellouS”
//Output : 6 (8-2)

#include<stdio.h>
int Difference(char *str)
{
int iCnt = 0;
// Fileter
while(*str != '\0')
{
	if( (*str >= 'A') && ( *str <= 'Z') )
	{
		iCnt--;
	}
	else if( (*str >= 'a') && ( *str <= 'z') ) 
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
iRet = Difference(arr);
printf("%d",iRet);
return 0;
}
