/////////////////////////////////////////////////
////////////// Name : Shrikant
///////////// Date : 21-12-22
////////////////////////////////////////////////

//2. Accept number of rows and number of columns from user and display below pattern.

//Input : iRow = 4 iCol = 4
//Output : 
//A B C D
//a b c d
//A B C D
//a b c d

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	for(int i = 0; i<iRow;i++)
	{
		for(int j = 0; j<iCol;j++)
		{
			if((i%2) == 0)
			{
				printf("%c ",j+65);
			}
			else
			{
				printf("%c ",j+97);
			}
		}
		printf("\n");
	}
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}
