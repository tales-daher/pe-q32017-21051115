#include <stdio.h>

unsigned int mdc (unsigned int m, unsigned int n) {
    if (n == 0) return m;
    return mdc(n,(m%n));
}

void main() {
    int m, n,md;
    scanf("%d %d", &m, &n);
    md = mdc(m,n);
    printf("%d", md);
}
