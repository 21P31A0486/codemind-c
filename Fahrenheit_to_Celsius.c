
#include<stdio.h>
int main()
{
    float Fahrenheit,celsius;
    scanf("%f",&Fahrenheit);
    celsius=((Fahrenheit-32)*5)/9;
    printf("%.2f",celsius);
    return 0;
}
