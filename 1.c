#include<stdio.h>
int add(int ,int);
int main()
{

int a,sum,n1,n2;
printf("hellow world\n");

//ADDING SCANF FUNCTION 
scanf("%d",&a);
printf("%d\n",a);

//ADDING ADDITION FUNCTION ON THE CODE IN THE NEW BRANCH 2.0
printf("enter two number\n");
scanf("%d%d",&n1,&n2);
sum = add(n1,n2);
printf("sum:%d\n",sum);


return 0;
}

int add(int n1,int n2)
{
return n1+n2;
}