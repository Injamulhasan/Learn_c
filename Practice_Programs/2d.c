#include <stdio.h>
#include <string.h>

void checkEmail(const char *email) {
    const char *atSymbol = strchr(email, '@');
    if (atSymbol == NULL || strcmp(atSymbol + 1, "kaaj.com") != 0) {
        printf("Email address is okay\n");
    } else {
        printf("Email address is outdated\n");
    }
}

int main() {
    const char *emails[] = {"fahmid@kaaj.com", "zaki@sheba.xyz"};
    for (int i = 0; i < sizeof(emails) / sizeof(emails[0]); i++) {
        printf("Email: %s\n", emails[i]);
        checkEmail(emails[i]);
        printf("\n");
    }
    return 0;
}