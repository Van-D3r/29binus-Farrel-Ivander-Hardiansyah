#include<stdio.h>
int main(){

    for (int i = 0; i < 3; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);

        float hasil = (2*a)/1 + (4*b)/2 + (6*c)/3 + (4*d)/4;
        printf("%.2f\n", hasil);

    }
    

    return 0;
}