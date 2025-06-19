#include <stdio.h>
#include "flowchart_impl.h"

void flowchart_logic(int x) {
    int result = 1;

    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            result += i;
        } else {
            result *= i;
        }

        if (result > 1000) {
            result -= 100;
        }
    }

    printf("Final result for x = %d: %d\n", x, result);
}
