///////////////////////////////////////////////////////
/////////////////// Name : Shrikant
////////////////// Date : 22-12-22
//////////////////////////////////////////////////////

//5. Accept number of rows and number of columns from user and display below pattern.

//Input : iRow = 4 iCol = 4
//Output : 
//1 2 3 4
//2 3 4
//3 4
//4

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	for(int i = iRow;i>=1;i--)
	{
		for(int j = 1; j<=i;j++)
		{
			printf("%d ",j);
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
