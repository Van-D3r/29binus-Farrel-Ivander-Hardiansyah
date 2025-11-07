#include<stdio.h>
int main(){
    int damage, megical, pure;
    scanf("%d %d %d",&damage,&megical,&pure);

    double total = (damage * 0.20) + (megical * 0.30) + (pure * 0.50);
    
    if (total < 0) total = 0;
    if (total > 100) total = 100;

    printf("%.2f",total);

    return 0;
}