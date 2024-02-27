#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeExtraSpaces(char *str) {
    int i, j;
    int spaceFound = 0;

    for (i = 0, j = 0; str[i]; i++) {
        if (str[i] == ' ') {
            if (!spaceFound) {
                str[j++] = str[i];
                spaceFound = 1;
            }
        } else {
            str[j++] = str[i];
            spaceFound = 0;
        }
    }
    str[j] = '\0';
}

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[] = "input.txt";
    char outputFileName[] = "output.txt";
    char line[1000];

    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        removeExtraSpaces(line);
        fprintf(outputFile, "%s", line);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("Extra spaces removed and written to %s.\n", outputFileName);
    return 0;
}