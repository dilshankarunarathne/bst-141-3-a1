#include <stdio.h>

int hours, minutes, seconds;

int validate() {
    if(hours>24 || hours<0)
}

int main() {
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    printf("Time: %d : %d : %d",hours, minutes, seconds);

    return 0;
}

