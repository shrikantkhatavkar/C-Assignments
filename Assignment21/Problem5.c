////////////////////////////////////////////////
///////////////// Name : Shrikant
///////////////// Date : 24-12-22
///////////////////////////////////////////////

//5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

//Input : A
//Output : Decimal 65

//Octal 0101
//Hexadecimal 0X41

#include<stdio.h>

void Display (char ch)
{
	if( (ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z') )
	{
		printf("Decimal :%d\nOctal : %o\nHexadecimal :%X ", ch, ch,ch);
	}
}

int main()
{
char cValue = '\0';
printf("Enter the character\n");
scanf("%c",&cValue);
Display(cValue);
return 0;
}
