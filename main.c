#include <stdio.h>

int hours, minutes, seconds;

void printStdTime();
int validate ();
int readUserInput ();

int main() {
    readUserInput();

    if (!validate()) {
        printf ("Your input values are inapplicable") ;
    }

    printStdTime();
//    printRegTime();

    return 0;
}

void printStdTime() {
    printf("%d : %d : %d",hours, minutes, seconds);
}

int validate () {
    if (hours>24 || hours<0 || minutes>60 || minutes<0 || seconds>60 || seconds<0) {
        return 0;
    }
    return 1;
}

int readUserInput () {
    printf(" ");
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);
}