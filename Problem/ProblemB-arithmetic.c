#include <stdio.h>
int main(){

    double A, B;
    scanf("%lf %lf", &A, &B);
    
    double discount = ((A - B) / A) * 100;
    printf("%.2f%%\n", discount);
    
    return 0;
}