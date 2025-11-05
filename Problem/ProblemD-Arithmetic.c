#include <stdio.h>
int main(){

    int a, b, hasil;
    char operators[5] = {'+', '-', '*', '/', '%'};

    scanf("%d %d", &a ,&b);

    if (a < 1 || a > 1000 || b < 1 || b > 1000) {
        printf("Error\n");
    }
    
    for (int i = 0; i < 5; i++) {  
        if (operators[i] == '+') {
            hasil = a + b;
            printf("%d\n",hasil);
        }
        else if (operators[i] == '-') {
            hasil = a - b;
            printf("%d\n",hasil);
        }
        else if (operators[i] == '*') {
            hasil = a * b;
            printf("%d\n",hasil);
        }
        else if (operators[i] == '/') {
            hasil = a / b;
            printf("%d\n",hasil);
        }
        else if (operators[i] == '%') {
            hasil = a % b;
            printf("%d\n",hasil);
        }
    }
    return 0;
}