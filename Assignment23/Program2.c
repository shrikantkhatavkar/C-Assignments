///////////////////////////////////////////////////////////
/////////////////// Name : Shrikant
////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//2.Write a program which accept string from user and convert it into upper case.

//Input : “Marvellous Multi OS”
//Output : MARVELLOUS MULTI OS
#include<stdio.h>
void struprx(char *str)
{
	while(*str !='\0')
	{
		if( (*str >='a') && (*str <= 'z') )
		{
			printf("%c",(*str-32));
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
struprx(arr);
//printf("Modified string is %s",arr);
return 0;
}
