/////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 20-12-22
////////////////////////////////////////////////

//2. Accept number from user and display below pattern.

//Input : 5
//Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>
void Pattern(int iNo)
{
	for(int i = iNo; 0<i; i--)
	{
		printf("%d # ",i);
	}
}
int main()
{
int iValue = 0;
printf("Enter number of elements\n");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}
