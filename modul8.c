#include <stdio.h>

int main(void) {
    int nilai;
    int *ptr = &nilai;

    scanf("%d", &nilai);

    printf("Nilai Variabel = %d\n", nilai);
    printf("Alamat Variabel = %p\n", (void *)ptr);
    printf("Nilai lewat pointer = %d\n", *ptr);

    *ptr = 14;
    printf("Nilai setelah diubah lewat pointer = %d\n", nilai);
    printf("Alamat Variabel = %p\n", ptr);
}