#include "glass.h"
#include <iostream>

std::string
Glass::get_name()
{
    return "Glass::get_name()";
}

void
Glass::greeting()
{
    std::cout << this->get_name() << std::endl;
}
