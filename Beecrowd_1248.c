#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // consume the newline character

    while (n--) {
        char str[1001], break_fast[501], lunch[501];
        fgets(str, sizeof(str), stdin);
        fgets(break_fast, sizeof(break_fast), stdin);
        fgets(lunch, sizeof(lunch), stdin);

        str[strcspn(str, "\n")] = '\0'; // remove the newline character
        break_fast[strcspn(break_fast, "\n")] = '\0';
        lunch[strcspn(lunch, "\n")] = '\0';

        char add[1001];
        sprintf(add, "%s%s", break_fast, lunch);

        int chet = 0;
        for (int i = 0; i < strlen(add); i++) {
            int x = 0;
            for (int j = 0; j < strlen(str); j++) {
                if (str[j] == add[i]) {
                    x = 1;
                    break;
                }
            }
            if (!x) {
                chet = 1;
                break;
            }
        }

        if (chet) {
            printf("CHEATER\n");
        } else {
            char dinner[1001];
            int dinnerIndex = 0;
            for (int i = 0; i < strlen(str); i++) {
                int x = 0;
                for (int j = 0; j < strlen(add); j++) {
                    if (str[i] == add[j]) {
                        x = 1;
                        break;
                    }
                }
                if (!x) {
                    dinner[dinnerIndex++] = str[i];
                }
            }
            dinner[dinnerIndex] = '\0';

            for (int i = 0; i < dinnerIndex - 1; i++) {
                for (int j = i + 1; j < dinnerIndex; j++) {
                    if (dinner[i] > dinner[j]) {
                        char temp = dinner[i];
                        dinner[i] = dinner[j];
                        dinner[j] = temp;
                    }
                }
            }

            printf("%s\n", dinner);
        }
    }

    return 0;
}

