#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0) {
        return "positive";
    } else if (x == 0) {
        return "zero";
    } else {
        return "negative";
    }
}

int main() {
    int values[] = {10, 0, -5, 42, -1};
    int count = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < count; i++) {
        int val = values[i];
        printf("sign_of(%d) = %s\n", val, sign_of(val));
    }

    return 0;
}
