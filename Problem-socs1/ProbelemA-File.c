#include<stdio.h>
#include<string.h>

struct data{
    char nama[101];
    char pohon[101];
};

int search(struct data phn[], int jumPhn, char key[]){
    for(int i=0; i<jumPhn; i++){
        if(strcmp(key, phn[i].nama)==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int jumPhn;
    int jumCase;

    FILE *p;
    p = fopen("testdata.in", "r");
    // proses
    fscanf(p, "%d\n",&jumPhn);
    // printf("%d", jumTan);

    struct data phn[jumPhn];
    for(int i=0; i<jumPhn; i++){
        fscanf(p, "%[^#]#%[^\n]\n", phn[i].nama, phn[i].pohon);
        //printf("%s %s\n", phn[i].nama, phn[i].pohon);
    }

    fscanf(p, "%d\n", &jumCase);
    //printf("%d", jumCase);

    for(int i=1; i<=jumCase; i++){
        char key[100];
        fscanf(p, "%s\n", key);
        int idx=search(phn, jumPhn, key);
        if(idx==-1){
            printf("Case #%d: N/A\n", i);
        } else{
            printf("Case #%d: %s\n", i, phn[idx].pohon);
        }
    }

    fclose(p);

    return 0;
}