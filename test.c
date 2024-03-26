#include <stdio.h>
 
int add(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int div(int a, int b);
int main()
{
    int a,b;
    int result=0;
    scanf("%d %d",&a ,&b);
    result = add(a,b);
    printf("%d + %d = %d\n", a,b,result);
    result = minus(a,b);
    printf("%d - %d = %d\n", a,b,result);
    result = multi(a,b);
    printf("%d * %d = %d\n", a,b,result);
    result = div(a,b);
    printf("%d / %d = %d\n", a,b,result);


    return 0;
}
int add(int a, int b)
{
    return a+b;
}
int minus(int a, int b)
{
    return a-b;
}
int multi(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}

