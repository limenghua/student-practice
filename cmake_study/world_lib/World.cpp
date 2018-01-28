//
// Created by limenghua on 18-1-28.
//

#include "World.h"
#include <iostream>

char * Leaks()
{
    char * buf = new char [100];
    return buf;
}

void World::Show()
{
    char * b = Leaks();
    std::cout<<"World"<<std::endl;
}
