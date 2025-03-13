#include <stdio.h>

int main() {
    char a[] = "10001111";
    int len = 0;
    while (a[len] != '\0') len++;
    if (len != 8) {
        printf("Input must be 8 bits.\n");
        return 1;
    }
    
    int first = 0;
    for (int i = 0; i < 4; i++) {
        first = (first << 1) | (a[i] - '0');
    }
    
    int second = 0;
    for (int i = 4; i < 8; i++) {
        second = (second << 1) | (a[i] - '0');
    }
    
    printf("0x%X%X\n", first, second);
    return 0;
}
