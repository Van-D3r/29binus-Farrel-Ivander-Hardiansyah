#include <stdio.h>

int main() {
    char kata1[21], kata2[21], kata3[21];

    // baca tiga kata yang dipisahkan spasi
    scanf("%20s %20s %20s", kata1, kata2, kata3);

    // cetak tiga kata yang dipisahkan spasi dan diakhiri enter
    printf("%s %s %s\n", kata3, kata2, kata1);

    return 0;
}