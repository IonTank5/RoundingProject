//
// Created by jaked on 10/3/2020.
//

#ifndef MATHROUNDINGFORMOM_GENERATOR_H
#define MATHROUNDINGFORMOM_GENERATOR_H
#include<iostream>
#include <cstdlib>
#include <ctime>
using std::string, std::cout, std::endl, std::cin;
class generator {
private:
    int number = 0, place = 0;
public:
    generator(int x){
        place = x;
    }
    int getNumber(int x, int y);
};


#endif //MATHROUNDINGFORMOM_GENERATOR_H
