#include <stdio.h>
#include <string.h>

int main() {
    char zybook[100];
    char line[256];

    scanf("%99s", zybook);

    FILE *inputFile = fopen("zybook.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Tidak dapat membuka file %s\n", zybook);
        return 1;
    }

    while (fgets(line, sizeof(line), inputFile)) {
        line[strcspn(line, "\n")] = '\0';
        
        char *photo_pos = strstr(line, "_photo.jpg");
        if (photo_pos != NULL) {
            *photo_pos = '\0';
            printf("%s_info.txt\n", line);
        }
    }
    
    fclose(inputFile);
    return 0;
}


