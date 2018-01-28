#include <iostream>

#include "world_lib/World.h"
#include "share_lib/ExporteHello.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    World().Show();

    ExporteHello ext;

    return 0;
}