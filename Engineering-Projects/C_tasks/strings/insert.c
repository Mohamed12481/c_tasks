#include <stdio.h>
#include <string.h>

void insertString(char *target, char *insert, int pos) {
    int targetLen = strlen(target);
    int insertLen = strlen(insert);

    for (int i = targetLen; i >= pos; i--) {
        target[i + insertLen] = target[i];
    }

    for (int i = 0; i < insertLen; i++) {
        target[pos + i] = insert[i];
    }
}

int main() {
    char str[100];
    char sub[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = ',';
    printf("Enter string you want ot insert: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';
    int position = 2;

    printf("Original: %s\n", str);

    insertString(str, sub, position);

    printf("Modified: %s\n", str);

    return 0;
}