#include <stdio.h>

int main() {
    char name[101]; // Menampung nama hingga 100 karakter

    scanf("%s", name); // Membaca input string tanpa spasi

    printf("Halo %s\n", name);

    return 0;
}
