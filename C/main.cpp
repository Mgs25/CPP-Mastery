#include <stdio.h>

int r() {
    static int num = 7;
    return num--;
}

int main() {
    int k;
    for (r(); r(); r())
        k = r();
    printf("%d", k);
    return 0;
}