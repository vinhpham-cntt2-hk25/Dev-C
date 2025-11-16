#include <stdio.h>

int main() {
    int a = 10;    
    int *p = &a;  

    printf("Gia tri cua a (dung bien a): %d\n", a);
    printf("Dia chi cua a (dung &a): %p\n", (void*)&a);

    printf("Gia tri cua a (thong qua con tro *p): %d\n", *p);
    printf("Dia chi cua a (thong qua con tro p): %p\n", (void*)p);

    return 0;
}
