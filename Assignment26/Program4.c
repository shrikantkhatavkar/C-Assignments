//////////////////////////////////////////////////////////////////
//////////////////// Name : Shrikant
//////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////////////

//4. Write a program which accept string from user and copy that characters of that string into another string by converting all capital
//characters into small case.

//Input : “Marvellous Python 2”
//Output : “marvellous python 2”

#include<stdio.h>

char arr[30] = "Marvellous Python 2";
char brr[30]; // Empty string

void StrCpySmall(char *src, char *dest)
{
		while((*src != '\0'))
	{
		if((*src >= 'A') && (*src <='Z'))
		{
			*dest = (*src+32);
		}
		else
		{
			*dest = *src;
		}
		dest++;
		src++;
	}
	*dest = '\0';
}
int main()
{

StrCpySmall(arr,brr);
printf("%s",brr); // marvellous python 2
return 0;
}
