#include<stdio.h>
int main(){
    int damage, megical, pure;
    scanf("%d %d %d",&damage,&megical,&pure);

    double total = (damage * 0.2) + (megical * 0.3) + (pure * 0.5);


    printf("%.2f",total);

    return 0;
}