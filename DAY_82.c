#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight light;

    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    int val;
    scanf("%d", &val);
    light = val;

    switch(light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
        default:     printf("Invalid input\n");
    }

    return 0;
}
