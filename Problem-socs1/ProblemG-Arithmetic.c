#include<stdio.h>
int main(){
    int N;
    long long total;

    scanf("%d",&N);

    total = 25LL * N * (N +3);

    printf("%lld\n",total);

    return 0;
}