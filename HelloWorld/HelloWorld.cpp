// Archivo "Main"

#include <iostream>
#include "HelloClass.h"

int main()
{
    HelloClass helloClass("Juan Esteban");

    std::cout << helloClass.decirHola() << std::endl;

    return 0;
}