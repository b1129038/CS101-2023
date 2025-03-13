#include <stdio.h>

int main() {
    char a[] = "AABBBCCCCddd";
    int len = 0;
    while (a[len] != '\0') len++;
    
    char result[2 * len + 1];
    int res_index = 0;
    
    if (len == 0) {
        printf("\n");
        return 0;
    }
    
    char current = a[0];
    int count = 1;
    
    for (int i = 1; i <= len; i++) {
        if (i < len && a[i] == current && count < 9) {
            count++;
        } else {
            res_index += sprintf(result + res_index, "%c%d", current, count);
            if (i < len) {
                current = a[i];
                count = 1;
            }
        }
    }
    printf("%s\n", result);
    return 0;
}
