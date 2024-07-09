#include <stdio.h>
int main()
{
	int x=0;
	printf("%d\n",x++);  //先取x的值进行输出，输出了0，然后再将x的值加1
	printf("%d",x);   	  //因为x的值增加了1，所以再输出x的值，为1
	return 0;
}
