#include<stdio.h>
int main(){
    int damage, megical, pure;
    scanf("%d %d %d",&damage,&megical,&pure);

    double total = (damage * 0.2) + (megical * 0.3) + (pure * 0.5);
    
    if (total < 0) total = 0;
    if (total > 100) total = 100;

    printf("%.2f\n",total);

    return 0;
}