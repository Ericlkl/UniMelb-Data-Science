#include <stdio.h>
#include <stdlib.h>

#define I 7
#define STRINGLEN 2
#define NULLBYTE 1

int main(int argc, char **argv){
    char A[I][STRINGLEN + NULLBYTE];
    int i, j;

    for (i = 0; i < I; i++) {
        for (j = 0; j < STRINGLEN; j++) {
            scanf("%c", &A[i][j]);
        }
        A[i][STRINGLEN] = '\0';
    }

	printf("%s, %s, %s\n", A[0], A[2], A[5]);

    return 0;
}