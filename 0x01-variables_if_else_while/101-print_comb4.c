#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                putchar((i % 10) + '0');
                putchar((j % 10) + '0');
                putchar((k % 10) + '0');
                putchar((i != 7 || j != 8 || k != 9) ? ',' : '\n');
            }
        }
    }

    return 0;
}

