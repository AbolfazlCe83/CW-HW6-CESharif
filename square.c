#include <stdio.h>
#include <math.h>

int main()
{
    int n , x;
    printf("please enter n : \n please enter x : ");
    scanf("%d%d" , &n , &x);
    n *= n;
    x *= x;
    double finall = sqrt(x + n);
    printf("The sqrt is %f" , finall);
}

