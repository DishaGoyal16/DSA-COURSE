#include <stdio.h>
#include <string.h>

int main() {
    char word[100], temp;
    int i, j;

    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (word[i] > word[j]) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    printf("Sorted word: %s\n", word);
    return 0;
}

