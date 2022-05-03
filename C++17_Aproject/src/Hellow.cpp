#include <iostream>
#include "Hellow.hpp"

HelloWorld::HelloWorld()
{
    std::cout << "Hello, anonymous!" << std::endl;
}

HelloWorld::HelloWorld(std::string fName, std::string lName)
{
    std::cout << "Hello, " << fName << ' ' << lName << std::endl;
}

HelloWorld::~HelloWorld()
{
    std::cout << "Goodbye..." << std::endl;
}