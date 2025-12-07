#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight light;

    for (light = RED; light <= GREEN; light++) {
        switch(light) {
            case RED:    printf("RED=%d\n", light); break;
            case YELLOW: printf("YELLOW=%d\n", light); break;
            case GREEN:  printf("GREEN=%d\n", light); break;
        }
    }

    return 0;
}
