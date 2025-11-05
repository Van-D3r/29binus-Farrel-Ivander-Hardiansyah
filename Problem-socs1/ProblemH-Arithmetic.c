#include<stdio.h>
int main(){
    int damage, megical, pure;
    scanf("%d %d %d",&damage,&megical,&pure);

    float total;
    total =(damage + megical + pure) / 3.0;
    printf("%.2f",total);





    return 0;
}