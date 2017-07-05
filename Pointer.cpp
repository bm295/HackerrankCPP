#include <stdio.h>
#include <stdlib.h> 

void update(int *pa,int *pb) {
    int tmp = *pa;
    *pa = *pa + *pb;
    *pb = abs(tmp - *pb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
