/////////////////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 26-12-22
////////////////////////////////////////////////////////////

//2.Write a program which accept string from user and accept one character. Return frequency of that character.

//Input : “Marvellous Multi OS”
//M
//Output : 2

//Input : “Marvellous Multi OS”
//W
//Output : 0

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{		int iCnt = 0;
	while( *str != '\0')
	{
		if(*str == ch)
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
char cValue;
int iRet = 0;
printf("Enter string\n");
scanf("%[^'\n']s",arr);

fflush(stdin);

printf("Enter the character");
scanf("%c",&cValue);
iRet = CountChar(arr, cValue);
printf("Character frequency is %d\n",iRet);
return 0;
}
