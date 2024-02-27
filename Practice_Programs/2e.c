#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        while (!isalnum(*start) && start < end)
            start++;
        while (!isalnum(*end) && start < end)
            end--;
        char ch1 = tolower(*start);
        char ch2 = tolower(*end);
        if (ch1 != ch2)
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    if (isPalindrome(input))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}