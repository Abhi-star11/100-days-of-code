#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

int main() {
    enum UserRole role;
    const char *messages[] = {
        "Welcome Admin! You have full access.",
        "Welcome User! You have limited access.",
        "Welcome Guest! You have view-only access."
    };

    for (int i = ADMIN; i <= GUEST; i++) {
        role = (enum UserRole)i;
        printf("%d -> %s\n", role, messages[i]);
    }

    return 0;
}
n
