//
// Created by jaked on 10/3/2020.
//

#ifndef MATHROUNDINGFORMOM_SCORE_H
#define MATHROUNDINGFORMOM_SCORE_H
#include<iostream>
using std::string, std::cout, std::endl, std::cin;

class score {
public:
    score(int x){
        points = x;
    }
    void updateScore(bool y);
private:
    int points = 0, multiplier = 0, streak = 0, notStreak = 0;
};


#endif //MATHROUNDINGFORMOM_SCORE_H
