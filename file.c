#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fclose(fp);

    return 0;
}

