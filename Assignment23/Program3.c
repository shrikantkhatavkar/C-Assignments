///////////////////////////////////////////////////////////
/////////////////// Name : Shrikant
////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//3.Write a program which accept string from user and toggle the case.

//Input : “Marvellous Multi OS”
//Output : mARVELLOUS mULTI os
#include<stdio.h>
void strtogglex(char *str)
{
	while(*str !='\0')
	{
		if( (*str >='A') && (*str <= 'Z') )
		{
			printf("%c",(*str+32));
		}
		else
		{
			printf("%c",(*str-32));
		}
			
		*str++;
	}
}
int main()
{
char arr[20];
printf("Enter string\n");
scanf("%[^'\n']s",arr);
strtogglex(arr);
//printf("Modified string is %s",arr);
return 0;
}
