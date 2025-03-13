#include <stdio.h>

int main() {
    char a[] = "A4B1C3f3";
    int len = 0;
    while (a[len] != '\0') len++;
    
    char result[(len / 2) * 9 + 1];
    int res_index = 0;
    
    for (int i = 0; i < len; i += 2) {
        char c = a[i];
        int count = a[i + 1] - '0';
        for (int j = 0; j < count; j++) {
            result[res_index++] = c;
        }
    }
    result[res_index] = '\0';
    printf("%s\n", result);
    return 0;
}
