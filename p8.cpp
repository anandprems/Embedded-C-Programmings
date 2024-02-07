#include <stdio.h>

int main() {
    int num = 10;
    float fnum = 3.14;
    char ch = 'A';

    void *ptr; 
    ptr = &num;
    printf("Value pointed to by void pointer (int): %d\n", *(int*)ptr);

    ptr = &fnum;
    printf("Value pointed to by void pointer (float): %.2f\n", *(float*)ptr);

    ptr = &ch;
    printf("Value pointed to by void pointer (char): %c\n", *(char*)ptr);

    return 0;
}

