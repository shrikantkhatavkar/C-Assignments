/////////////////////////////////////////////////////////
////////////// Name : Shrikant
///////////// Date : 24-12-22
////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//5. Write a program which accept string from user and display it in reverse order.

//Input : “MarvellouS”
//Output : “SuollevraM”

#include<stdio.h>
void Reverse(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{	iCnt++;
		*str++;
	}
	
	while((iCnt) != 0)
	{
		printf("%C",*(str-1));
		*str--;
		iCnt--;
	}	
}
int main()
{
char arr[20];
int iRet = 0;
printf("Enter string\n");
scanf("%[^'\n']s",arr);
Reverse(arr);
return 0;
}
