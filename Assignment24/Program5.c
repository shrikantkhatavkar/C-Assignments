/////////////////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 26-12-22
////////////////////////////////////////////////////////////

//5. Write a program which accept string from user reverse that string in place.

//Input : “abcd”
//Output : “dcba”

//Input : “abba”
//Output : “abba”

#include<stdio.h>
#include<stdlib.h>

int CharLen(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

void StrRevX(char *str)
{
	char i = '\0';
	for(i = (CharLen(str)-1);i>=0;i--)
	{
		printf("%c",(str[i]));
	}
	
}
int main()
{
char arr[20];
printf("Enter string\n");
scanf("%[^'\n']s",arr);
fflush(stdin);
printf("Modified string is : ");
StrRevX(arr);
return 0;
}
