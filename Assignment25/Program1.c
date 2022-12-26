/////////////////////////////////////////////////////
////////////////// Name : Shrikant
///////////////// Date 26-12-22
////////////////////////////////////////////////////

//1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)

//Input : “Marvellous Multi OS”
//Output : “Marvellous Multi OS” in another string

#include<stdio.h>
#include<stdlib.h>
char arr[30] = "Marvellous Multi OS";
void StrCpyX(char *src, char *dest)
{
// Fileter
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = '\0';
}
int main()
{
//char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string
StrCpyX(arr,brr);
printf("%s",brr); // Marvellous Multi OS
return 0;
}
