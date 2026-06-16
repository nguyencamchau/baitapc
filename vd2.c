#include<stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;   // con trỏ trỏ đến phần tử đầu tiên của mảng
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, *(p + i));
    }
}
