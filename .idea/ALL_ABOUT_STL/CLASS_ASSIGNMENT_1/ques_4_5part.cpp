#include <stdio.h>

int main() {
    char word[100];
    int i;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        }
    }

    printf("Lowercase word: %s\n", word);
    return 0;
}
//
// Created by disha on 12-08-2025.
//