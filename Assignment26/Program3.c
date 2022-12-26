//////////////////////////////////////////////////////////////////
//////////////////// Name : Shrikant
//////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////////////

//3. Write a program which accept string from user and copy that characters of that string into another string by converting all small
//characters into capital case.

//Input : “Marvellous Python 2”
//Output : “MARVELLOUS PYTHON 2”

#include<stdio.h>

char arr[30] = "Marvellous Python 2";
char brr[30]; // Empty string

void StrCpyCap(char *src, char *dest)
{
	while((*src != '\0'))
	{
		if((*src >= 'a') && (*src <='z'))
		{
			*dest = (*src-32);
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

StrCpyCap(arr,brr);
printf("%s",brr); // MARVELLOUS PYTHON 2
return 0;
}
