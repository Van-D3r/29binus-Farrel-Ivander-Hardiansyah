#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d",&a,&b);

    float persentase = (float)b / a * 100;

    printf("%.4f%%\n", persentase);

    return 0;
}