#include <stdio.h>

int main(void) {
    int i, j, k, l;

    for (i = 0; i <= 99; i++) {
        for (j = 0; j <= 99; j++) {
            k = i * 100 + j;
            l = j * 100 + i;

            if (k < l) {
                putchar((k / 10) + '0');
                putchar((k % 10) + '0');
                putchar(' ');
                putchar((l / 10) + '0');
                putchar((l % 10) + '0');

                if (i != 98 || j != 99) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

