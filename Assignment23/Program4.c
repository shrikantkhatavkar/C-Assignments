///////////////////////////////////////////////////////////
/////////////////// Name : Shrikant
////////////////// Date : 25-12-22
//////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//4. Write a program which accept string from user and display only digits from that string.

//Input : “marve89llous121”
//Output : 89121

//Input : “Demo”
//Output :
#include<stdio.h>
void DisplayDigit(char *str)
{
	while(*str !='\0')
	{
		if( (*str >='A') && (*str <= 'Z') || (*str >='a') && (*str <= 'z')  ){}
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
DisplayDigit(arr);
return 0;
}
