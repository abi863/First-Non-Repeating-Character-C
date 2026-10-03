#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%999s", str);

    int n = strlen(str);

    // Count the frequency of each character
    for (int i = 0; i < n; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First Non-Repeating Character: %c\n",
                   str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}