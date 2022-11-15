#include<stdio.h>
int myfunction(int x,int y)
{
return x+y;
}

int main()
{
int a,b;
printf("enter 2 number :");
scanf("%d%d",&a,&b);
int result=myfunction(a,b);
printf("result is = %d\n", result);
return 0;
}
