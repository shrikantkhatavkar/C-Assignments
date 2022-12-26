//////////////////////////////////////////////////////////////////
//////////////////// Name : Shrikant
//////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////////////

//2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

//Input : “Marvel lous Pyth on”
//Output : “MarvellousPython”

#include<stdio.h>

char arr[30] = "Marvel lous Pyth on";
char brr[30]; // Empty string

void StrCpyX(char *src, char *dest)
{
	while((*src != '\0'))
	{
		if(*src != ' ')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
}
int main()
{

StrCpyX(arr,brr);
printf("%s",brr); // MarvellousPython
return 0;
}
