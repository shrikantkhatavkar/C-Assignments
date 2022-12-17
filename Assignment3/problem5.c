//////////////////////////////////////////////////
/////////// Name : Shrikant
/////////// Date : 16/12/2022
////////////////////////////////////////////////

//5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
//Input : E Output : TRUE
//Input : d Output : FALSE

#include<stdio.h>

typedef int BOOL ;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel ( char Cchar)
{
if( ( Cchar == 'A' ) || ( Cchar == 'E' ) || ( Cchar == 'I' ) ||( Cchar == 'O' ) || ( Cchar == 'U' ) ||( Cchar == 'a' ) || ( Cchar == 'e' ) ||( Cchar == 'i' ) || ( Cchar == 'o' ) || ( Cchar == 'u' ) )
{
 return TRUE;
 }
else
{
 return FALSE;
 }
}

int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter character\n");
scanf("%c",&cValue);
bRet = ChkVowel(cValue );
if (bRet == 1)
{
printf("It is Vowel");
}
else
{
printf("It is not Vowel");
}
return 0;
}
