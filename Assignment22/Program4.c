/////////////////////////////////////////////////////////
////////////// Name : Shrikant
///////////// Date : 24-12-22
////////////////////////////////////////////////////////

//Create separate visual Studio project for each problem statement separately.

//4. Write a program which accept string from user and check whether it contains vowels in it or not.

//Input : “marvellous”
//Output : TRUE

//Input : “Demo”
//Output : TRUE

//Input : “xyz”
//Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	while( *str != '\0')
	{
		if( (*str =='A') || (*str =='E') || (*str =='I') || (*str =='O') || (*str =='U') || (*str =='a') || (*str =='e') || (*str =='i') || (*str =='o') || (*str =='u') )
		{
			return 1;
		}
		*str++;
	}
}
int main()
{
char arr[20];
BOOL bRet = FALSE;
printf("Enter string\n");
scanf("%[^'\n']s",arr);
bRet = ChkVowel(arr);
if(bRet == TRUE)
{
printf("Contains Vowel");
}
else
{
printf("There is no Vowel");
}
return 0;
}
