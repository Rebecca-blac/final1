#include<stdio.h>
main(){
    double a;
    double b;
    double c;
    printf("please input two numbers(divided by space)\n");
    scanf("%lf %lf",&a,&b);
    c=(a-b)*(a-b);
    printf("%.2lf\n",c);
}