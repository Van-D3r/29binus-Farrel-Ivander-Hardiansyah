#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &c);

        // Hitung cashback: (B% dari A)
        int cashback = (A * B) / 100;

        // Jika cashback lebih besar dari maksimum, pakai maksimum
        if (cashback > C) {
            cashback = C;
        }

        // Cetak hasil
        printf("Case #%d: %d\n", i, cashback);
    }

    return 0;
}