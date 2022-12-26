/////////////////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 26-12-22
////////////////////////////////////////////////////////////

//1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

//Input : “Marvellous Multi OS”
//e
//Output : TRUE

//Input : “Marvellous Multi OS”
//W
//Output : FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
	while( *str != '\0')
	{
		if(*str == ch)
		{
			return 1;
		}
		*str++;
	}
	return 0;
}

int main()
{
char arr[20];
char cValue;
BOOL bRet = FALSE;

printf("Enter string\n");
scanf("%[^'\n']s",arr);
fflush(stdin);
printf("\nEnter the character\n");
scanf("%c",&cValue);
bRet = ChkChar(arr, cValue);
if(bRet == TRUE)
{
printf("Character found");
}
else
{
printf("Character not found");
}
return 0;
}
