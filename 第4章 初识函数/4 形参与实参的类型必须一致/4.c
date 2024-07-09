#include <stdio.h>
int add(int x,int y)
{
	return x+y;
}
int main()
{
	double i=1.5,j=2.3;
	double a=add(i,j);
	printf("%f\n",a);
	return 0;
}
