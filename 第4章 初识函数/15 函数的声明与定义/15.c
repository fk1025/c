#include <stdio.h>
int add(int x,int y);				//函数声明
int main()
{
	 int x=add(1,2);					//调用函数
	 printf("%d",x);
	 return 0;
}
int add(int x,int y)					//函数定义
{
	return x+y;
}
