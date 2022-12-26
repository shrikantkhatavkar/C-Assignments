/////////////////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 26-12-22
////////////////////////////////////////////////////////////

//4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

//Input : “Marvellous Multi OS”
//M
//Output : 11

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


int LastChar(char *str, char ch)
{	char i = '\0';
	for(i = CharLen(str);i>0;i--)
	{
		if(str[i] == ch)
		{
			printf("%c\n",(str[i]));
			break;
		}
	}
	
	if(str[i]== '\0')
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
char arr[20];
char cValue;
int iRet = 0, iBet = 0;
printf("Enter string\n");
scanf("%[^'\n']s",arr);
fflush(stdin);
printf("Enter the character\n");
scanf("%c",&cValue);

iRet = LastChar(arr, cValue);
printf("Character location is %d\n",iRet);

return 0;
}
