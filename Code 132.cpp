#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    const char *actions[] = { "Stop", "Wait", "Go" };

    for (int i = RED; i <= GREEN; i++) {
        light = (enum TrafficLight)i;
        printf("%d -> %s\n", light, actions[i]);
    }

    return 0;
}

