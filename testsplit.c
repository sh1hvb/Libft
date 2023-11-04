#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
char** split(const char* str, char delimiter, int* count) {
    // Count the number of substrings
    *count = 0;
    for (size_t i = 0; str[i]; i++) {
        if (str[i] == delimiter) {
            (*count)++;
        }
    }
    (*count)++; // Account for the last substring

    // Allocate memory for the array of substrings
    char** substrings = (char**)malloc(*count * sizeof(char*));
    if (substrings == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int substringIndex = 0;
    int substringStart = 0;

    // Iterate through the string to split it
    for (int i = 0; i <= strlen((char *)str); i++) {
        if (str[i] == delimiter || str[i] == '\0') {
            // Calculate the length of the current substring
            int substringLength = i - substringStart;

            // Allocate memory for the substring and copy it
            substrings[substringIndex] = (char*)malloc(substringLength + 1);
            if (substrings[substringIndex] == NULL) {
                fprintf(stderr, "Memory allocation failed\n");
                exit(1);
            }
            strncpy(substrings[substringIndex], str + substringStart, substringLength);
            substrings[substringIndex][substringLength] = '\0';

            // Update indices for the next substring
            substringIndex++;
            substringStart = i + 1;
        }
    }

    return substrings;
}

int main() {
    const char* input = "apple,banana,cherry";
    char delimiter = ',';

    int count;
    char** substrings = split(input, delimiter, &count);

    printf("Original String: %s\n", input);
    printf("Number of Substrings: %d\n", count);
    printf("Substrings:\n");
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i + 1, substrings[i]);
        free(substrings[i]);
    }

    free(substrings);
    return 0;
}