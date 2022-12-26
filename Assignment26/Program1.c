//////////////////////////////////////////////////////////////////
//////////////////// Name : Shrikant
//////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////////////

//1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.

//Input : “Marvellous Python”
//Output : “nohtyP suollevraM”

#include<stdio.h>

char arr[30] = "Marvellous Python";
char brr[30]; // Empty string

void StrCpyRev(char *src, char *dest)
{
	char *p = NULL;
	p = src;
	while(*(p+1) != '\0')
	{
		p++;
	}
	
	while(src <= p)
	{
		*dest = *p;
		dest++;
		p--;
	}
	*dest = '\0';
}

int main()
{

StrCpyRev(arr,brr);
printf("%s",brr); // nohtyP suollevraM
return 0;
}
