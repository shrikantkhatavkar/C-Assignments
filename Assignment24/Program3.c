/////////////////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 26-12-22
////////////////////////////////////////////////////////////

//3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

//Input : “Marvellous Multi OS”
//M
//Output : 0

//Input : “Marvellous Multi OS”
//W
//Output : -1

//Input : “Marvellous Multi OS”
//e
//Output : 4

#include<stdio.h>
#include<stdlib.h>

int CharLen(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		iCnt++;
		*str++;
	}
	return iCnt;
}

int FirstChar(char *str, char ch)
{	int iIndex= 0;
	while( *str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		iIndex++;
		*str++;
	}
	if(*str == '\0')
	{
		return -1;
	}
	else
	{
		return iIndex;
	}
}
int main()
{
char arr[20];
char cValue;
int iRet = 0, b = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);

fflush(stdin);

printf("Enter the character\n");
scanf("%c",&cValue);

iRet = FirstChar(arr, cValue);
printf("Character location is %d\n",iRet);

return 0;
}
