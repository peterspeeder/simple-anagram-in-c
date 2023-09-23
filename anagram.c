#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>  // Include the header for bool

int main(void) {
    int charCount[256] = {0};  // Initialize an array to count character occurrences
    char s[] = "hi";
    char t[] = "ih";

    /* Check if the lengths of the two arrays are the same */
    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; ++i) {
        /* Take the char, convert to integer, and save to charCount */
        charCount[(int)s[i]]++;
    }

    for (int i = 0; t[i] != '\0'; ++i) {
        /* We are going to decrement the values of t from charCount in order to see if there is a remainder, if so, then it is not an anagram */
        charCount[(int)t[i]]--;
    }

    for (int i = 0; i < 256; ++i) {
        if (charCount[i] != 0) {
            return false;
        }
    }

    printf("Anagram\n");
    return true;
}
