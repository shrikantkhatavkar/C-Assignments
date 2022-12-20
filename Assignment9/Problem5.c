/////////////////////////////////////////////////
////////////// Name : Shrikant
////////////// Date : 20-12-22
////////////////////////////////////////////////

//5. Accept number from user and display below pattern.

//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>
void Pattern(int iNo)
{
	for(int i = 2; i <=(2*iNo); i= (i+2))
	{
		if((i%2) == 0)
		{
			printf("%d  ", i);
		}
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
