#include <stdio.h>

int hours, minutes, seconds;

int validate () {
    if (hours>24 || hours<0 || minutes>60 || minutes<0 || seconds>60 || seconds<0) {
        return 0;
    }
    return 1;
}

int readUserInput () {

}

int main() {


    return 0;
}

