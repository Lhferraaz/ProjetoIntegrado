#include <stdio.h>

int main(void) {
    int f, n, aux = 0;

    scanf("%d", &f);

    int i = 0;

    while (i < f) {
        scanf("%d", &n);

        aux += n;

        i++;
    }

    printf("%d", aux);
}