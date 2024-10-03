#include <stdio.h>

int readFile() {
     char data[100];
     char file[] = "data.txt";

     FILE *fptr;
     fptr = fopen(file, "r");

     if (fptr != NULL) {
          while (fgets(data, sizeof(data), fptr)) {
               printf("%s", data);
          }
     } else {
          printf("Not able to open file %s", file);
     }

     fclose(fptr);
}

void straightLine() {
     printf("\n-----------------------\n");
}

