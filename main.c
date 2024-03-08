#include <stdio.h>

int main() {
    float x;
    printf("digite sua temperatura em Celsius: ");
    scanf("%f",& x);
    float a = (x*9/5)+32;
    printf("em fahrenheit o valor eh:%.1f",a);
}
