#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    const char *messages[] = { "Operation Successful", "Operation Failed", "Operation Timed Out" };

    for (int i = SUCCESS; i <= TIMEOUT; i++) {
        s = (enum Status)i;
        printf("%d -> %s\n", s, messages[i - SUCCESS]);
    }

    return 0;
}

