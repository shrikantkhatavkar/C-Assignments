///////////////////////////////////////////////////////////
/////////////////// Name : Shrikant
////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//1.Write a program which accept string from user and convert it into lower case.

//Input : “Marvellous Multi OS”
//Output : marvellous multi os

#include<stdio.h>
void strlwrx(char *str)
{
	while(*str !='\0')
	{
		if( (*str >='A') && (*str <= 'Z') )
		{
			printf("%c",(*str+32));
		}
		else
		{
			printf("%c",*str);
		}
			
		*str++;
	}
}

int main()
{
char arr[20];
printf("Enter string\n");
scanf("%[^'\n']s",arr);
strlwrx(arr);
//printf("Modified string is %s",arr);
return 0;
}
