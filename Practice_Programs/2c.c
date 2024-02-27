#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isSpecialChar(char ch) {
    return (ch == '_' || ch == ',' || ch == '$' || ch == '#' || ch == '@');
}

void checkPassword(char *password) {
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; password[i] != '\0'; i++) {
        if (islower(password[i]))
            hasLower = true;
        else if (isupper(password[i]))
            hasUpper = true;
        else if (isdigit(password[i]))
            hasDigit = true;
        else if (isSpecialChar(password[i]))
            hasSpecial = true;
    }

    bool anyRuleBroken = false;
    if (!hasLower) {
        printf("Lowercase character missing\n");
        anyRuleBroken = true;
    }
    if (!hasUpper) {
        printf("Uppercase character missing\n");
        anyRuleBroken = true;
    }
    if (!hasDigit) {
        printf("Digit missing\n");
        anyRuleBroken = true;
    }
    if (!hasSpecial) {
        printf("Special character missing\n");
        anyRuleBroken = true;
    }
    if (!anyRuleBroken)
        printf("OK\n");
}

int main() {
    char passwords[3][20] = {"BR@CUspring", "bracuspring", "BR@CU20spring22"};

    for (int i = 0; i < 3; i++) {
        printf("Password: %s\n", passwords[i]);
        checkPassword(passwords[i]);
        printf("\n");
    }

    return 0;
}