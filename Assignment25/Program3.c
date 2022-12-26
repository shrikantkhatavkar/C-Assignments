/////////////////////////////////////////////////////
////////////////// Name : Shrikant
///////////////// Date 26-12-22
////////////////////////////////////////////////////

//3. Write a program which accept string from user and copy capital characters of that string into another string.

//Input : “Marvellous Multi OS”
//Output : “MMOS”

#include<stdio.h>

char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string

void StrCpyCap(char *src, char *dest)
{
// Fileter
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	dest = '\0';
}

int main()
{

StrCpyCap(arr,brr);
printf("%s",brr); // MMOS
return 0;
}
