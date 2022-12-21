////////////////////////////////////////////////////
//////////////// Name : Shrikant
//////////////// Date : 21-12-22////////////////
///////////////////////////////////////////////////

//4. Accept number of rows and number of columns from user and display below pattern.

//Input : iRow = 6 iCol = 5
//Output : 
//* * * * *
//* @ @ @ *   
//* @ @ @ *
//* @ @ @ *
//* @ @ @ *
//* * * * *

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
		for(int i = 1; i<= iRow; i++)
	{
		for(int j = 1; j<= iCol;j++)
		{
			if( (i == 1) || (i == iRow)|| (j == 1) || (j== iCol) )
			{
				printf("* ");
			}
			else
			{
				printf("@ ");
			}
		}
		printf("\n");
	}
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns\n");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}
