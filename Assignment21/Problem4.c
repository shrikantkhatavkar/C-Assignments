////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 24-12-22
///////////////////////////////////////////////

//4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

//Input : %
//Output : TRUE

//Input : d
//Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if( (ch >= '!') && (ch <= '*') )
	{
		return 1;
	}
}

int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter the character\n");
scanf("%c",&cValue);
bRet = ChkSpecial(cValue);
if(bRet == TRUE)
{
printf("It is special Character\n");
}
else
{
printf("It is not a special Character");
}
return 0;
}
