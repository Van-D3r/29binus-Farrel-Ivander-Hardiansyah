#include <stdio.h>
#include <math.h>

int main() {
    double X, Y;
    scanf("%lf %lf", &X, &Y);

    double total = X * pow(1 + (Y / 100), 3);
    printf("%.2f\n", total);

    return 0;
}