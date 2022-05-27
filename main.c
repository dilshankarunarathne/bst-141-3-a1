#include <stdio.h>

int hours, minutes, seconds;

void printStdTime();
int validate ();
int readUserInput ();
void printRegTime();

int main() {
    readUserInput();

    if (!validate()) {
        printf ("Your input values are inapplicable") ;
    }

    printStdTime();
    printRegTime();

    return 0;
}

void printRegTime() {
    int regHours = hours;
    char period [] = "am";
    if (hours>12) {
        period [0] = 'p';
        regHours -= 12;
    }
    printf(" %d : %d : %d %s", regHours, minutes, seconds, period);
}

void printStdTime() {
    printf("%d : %d : %d \n",hours, minutes, seconds);
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