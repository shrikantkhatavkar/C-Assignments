/////////////////////////////////////////////////////
////////////////// Name : Shrikant
///////////////// Date 26-12-22
////////////////////////////////////////////////////

//2. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

//Input : “Marvellous Multi OS”
//10
//Output : “Marvellous
//Note : If third parameter is greater than the size of source string then copy whole string into destination.

#include<stdio.h>
#include<stdlib.h>

char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string
void StrNCpyX(char *src, char *dest, int iCnt)
{
// Fileter
	while((*src != '\0') && (iCnt != 0) )
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	 dest = '\0';
}
int main()
{
int iValue = 0;
printf("Enter number : ");
scanf("%d",&iValue);
StrNCpyX(arr,brr,iValue);
printf("%s",brr); // Marvellous
return 0;
}
