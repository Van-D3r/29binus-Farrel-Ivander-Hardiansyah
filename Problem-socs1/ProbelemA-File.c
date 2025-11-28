#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_STUDENTS 100
#define ID_LENGTH 11
#define NAME_LENGTH 25

typedef struct {
    char id[ID_LENGTH];
    char name[NAME_LENGTH];
} Student;

void createInputFile() {
    printf("Membuat file problemAfile.in...\n");
    
    FILE *file = fopen("problemAfile.in", "w");
    if (file == NULL) {
        printf("Error: Tidak bisa membuat file!\n");
        exit(1);
    }
    
    fprintf(file, "13\n");
    fprintf(file, "2020123456 Liam\n");
    fprintf(file, "2020123457 Noah\n");
    fprintf(file, "2020123458 William\n");
    fprintf(file, "2020123459 James\n");
    fprintf(file, "2020123460 Logan\n");
    fprintf(file, "2020123461 Benjamin\n");
    fprintf(file, "2020123462 Mason\n");
    fprintf(file, "2020123463 Elijah\n");
    fprintf(file, "2020123464 Oliver\n");
    fprintf(file, "2020123465 Jacob\n");
    fprintf(file, "2020123466 Lucas\n");
    fprintf(file, "2020123467 Michael\n");
    fprintf(file, "2020123468 Alexander\n");
    fprintf(file, "4\n");
    fprintf(file, "2020123456\n");
    fprintf(file, "2020123468\n");
    fprintf(file, "2020123462\n");
    fprintf(file, "2020100000\n");
    
    fclose(file);
    printf("File problemAfile.in berhasil dibuat!\n\n");
}

int binarySearch(Student students[], int n, char target[]) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(students[mid].id, target);
        if (cmp == 0) return mid;
        else if (cmp < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf("📁 Current folder: %s\n\n", cwd);
    
    // Coba buka file
    FILE *file = fopen("problemAfile.in", "r");
    if (file == NULL) {
        printf("File problemAfile.in tidak ditemukan di:\n");
        printf("%s/\n\n", cwd);
        createInputFile();
        file = fopen("problemAfile.in", "r");
    }
    
    Student students[MAX_STUDENTS];
    int n, t;
    
    fscanf(file, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }
    fscanf(file, "%d", &t);
    
    printf("Output:\n");
    for (int i = 0; i < t; i++) {
        char target[ID_LENGTH];
        fscanf(file, "%s", target);
        
        int index = binarySearch(students, n, target);
        if (index != -1) {
            printf("Case #%d: %s\n", i + 1, students[index].name);
        } else {
            printf("Case #%d: N/A\n", i + 1);
        }
    }
    
    fclose(file);
    return 0;
}