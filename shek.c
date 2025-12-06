#include <stdio.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    gets(sentence);   // Unsafe function, use only for learning purposes

    printf("You entered: %s\n", sentence);

    return 0;
}

