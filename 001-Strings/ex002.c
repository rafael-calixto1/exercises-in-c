#include <stdio.h>
#include <stdlib.h>

// This program demonstrates basic string input and output in C
int main() {
    char words[100] = {"Hello. Today we're going to learn about Strings"};
    printf("Input your name: ");
    
    scanf("%80[^\n]", words); // 80 characters in maximum till the user presses enter
    printf("Hello, %s\n\n", words);
    
    return 0;
}
