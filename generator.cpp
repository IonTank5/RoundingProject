//
// Created by jaked on 10/3/2020.
//

#include "generator.h"

int generator::getNumber(int x, int y) {
    int tempPlace = y;
    srand(time(0));
    int random = rand();
    srand(random*x%time(0));
    if (tempPlace == 2) {
        return (rand() % 89999 + 10001);
    }
    else if (tempPlace == 3) {
        return (rand() % 89999 + 10001);
    }
    else if (tempPlace == 4) {
        return (rand() % 89999 + 10001);
    }
    else if (tempPlace == 5) {
        return (rand() % 89999 + 10001);
    }
}