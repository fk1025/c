#include <stdio.h>
int add(int x,int y);				//��������
int main()
{
	 int x=add(1,2);					//���ú���
	 printf("%d",x);
	 return 0;
}
int add(int x,int y)					//��������
{
	return x+y;
}
