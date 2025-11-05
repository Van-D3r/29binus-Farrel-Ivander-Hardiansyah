#include <stdio.h>
int main(){

    int a, b;
    char plus, equal;
    
    for (int i = 0;i < 3; i++)
    {
    scanf("%d %c %d %c", &a, &plus, &b, &equal);

    
    printf("%d\n",a + b);

    }
    
    


    return 0;
}