#include <stdio.h>
#include <string.h>

void splitString(char *str, char *evenIndexes, char *oddIndexes) {
    int i, evenIndex = 0, oddIndex = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            if (i % 2 == 0) {
                evenIndexes[evenIndex++] = str[i];
            } else {
                oddIndexes[oddIndex++] = str[i];
            }
        }
    }

    evenIndexes[evenIndex] = '\0';
    oddIndexes[oddIndex] = '\0';
}

int main(int argc, char *argv[]) {
    char evenIndexes[128], oddIndexes[128];
  
    if (argv[1][strlen(argv[1]) - 1] == '\n') {
        argv[1][strlen(argv[1]) - 1] = '\0';
    }

    splitString(argv[1], evenIndexes, oddIndexes);

    printf("Символы с четными индексами: %s\n", evenIndexes);
    printf("Символы с нечетными индексами: %s\n", oddIndexes);

    return 0;
}
