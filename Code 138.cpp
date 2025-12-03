#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

int main() {
    enum UserRole role;
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    for (int i = ADMIN; i <= GUEST; i++) {
        role = (enum UserRole)i;
        printf("%s = %d\n", roleNames[i], role);
    }

    return 0;
}

