#include <stdio.h>

int main() {
    char name[101]; // Menampung nama hingga 100 karakter + null terminator
    fgets(name, sizeof(name), stdin); // Membaca input termasuk spasi

    // Menghapus newline di akhir string jika ada
    int i = 0;
    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);

    return 0;
}