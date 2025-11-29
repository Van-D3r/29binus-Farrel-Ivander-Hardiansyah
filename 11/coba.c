#include <stdio.h>
#include <string.h>

typedef struct {
  char name[21];
  char nim[11];
} mhs;

int binarySearch(mhs data[], int n, char target[]) {
  int left = 0, right = n - 1;

  while (left <= right) {
    int mid = (left + right) / 2;
    int cmp = strcmp(data[mid].nim, target);

    if (cmp == 0) {
      return mid; // Found
    } else if (cmp < 0) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1; // Not found
}

int main() {
  int n;
  int nq;
  FILE *fp;  
  fp = fopen("testdata.in", "r");
  fscanf(fp, "%d", &n);
  mhs data_mahasiswa[n];
  for (int i = 0; i < n; i++) {
    fscanf(fp, "%s %s", data_mahasiswa[i].nim, data_mahasiswa[i].name);
  }
  
  fscanf(fp, "%d", &nq);
  for (int t = 1; t <= nq; t++) {
    char nimSearch[11];
    fscanf(fp, "%s", nimSearch);

    int idx = binarySearch(data_mahasiswa, n, nimSearch);

    if (idx != -1) {
      printf("Case #%d: %s\n", t, data_mahasiswa[idx].name);
    } else {
      printf("Case #%d: N/A\n", t);
    }
  }
  fclose(fp);
  // for(int i = 0; i < n; i++){
  //     printf("%s -> %s\n", data_mahasiswa[i].name, data_mahasiswa[i].nim);
  // }
  return 0;
}