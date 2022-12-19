///////////////////////////////////////////////////
//////////////////// Name : Shrikant
/////////////////// Data : 19-12-2022
//////////////////////////////////////////////////

//Calculate Time Complexity of each program.
//1.Write a program which accept radius of circle from user and calculate its area.
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)

//Input : 5.3
//Output : 88.2026

//Input : 10.4
//Output : 339.6224

#include<stdio.h>
double CircleArea(float fRadius)
{
	float fPI = 3.14;
	double dArea;
	dArea = fPI*fRadius*fRadius;
	return dArea;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter radius\n");
scanf("%f",&fValue);
dRet = CircleArea(fValue);
printf("%0.4lf\n",dRet);
return 0;
}