/////////////////////////////////////////////////////
////////////////// Name : Shrikant
///////////////// Date 26-12-22
////////////////////////////////////////////////////

//4. Write a program which accept string from user and copy small characters of that string into another string.

//Input : “Marvellous multi OS”
//Output : “arvellous multi”

#include<stdio.h>
char arr[30] = "Marvellous multi OS";
char brr[30]; // Empty string

void StrCpySmall(char *src, char *dest)
{
// Fileter
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <='z') || (*src == ' '))
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

StrCpySmall(arr,brr);
printf("%s",brr); // arvellous multi
return 0;
}
