#include <stdio.h>

int main() {
    char id[11];        
    char name[101];     
    char class;
    int num;

    scanf("%s", id);            
    getchar();                  
    //fgets(name, sizeof(name), stdin);  
    scanf(" %c %d", &class, &num); 
    scanf(" %[^\n]");    

    
    int i = 0;
    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Id    : %s\n", id);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", class);
    printf("Num   : %d\n", num);

    return 0;
}