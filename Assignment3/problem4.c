//////////////////////////////////////////////////
/////////// Name : Shrikant
/////////// Date : 16/12/2022
////////////////////////////////////////////////

//4. Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

#include<stdio.h>
void DisplayConvert ( char CValue)
{
if( (CValue >= 'A') && (CValue <= 'Z') )
{
printf("%c", CValue+32);
}
else if( (CValue >= 'a') && (CValue <= 'z') )
{
printf("%c", CValue-32);
}
}
int main()
{
char cValue = '\0';
printf("Enter character\n");
scanf("%c",&cValue);
DisplayConvert(cValue );
return 0;
}

