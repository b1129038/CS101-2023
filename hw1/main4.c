#include <stdio.h>

int main() {
    char a[] = "Hello";
    int length = 0;
    
    while (a[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - 1 - i];
        a[length - 1 - i] = temp;
    }
    
    printf("%s\n", a);
    return 0;
}
