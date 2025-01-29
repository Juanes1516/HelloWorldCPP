#ifndef HELLOCLASS_H
#define HELLOCLASS_H

#include <string>

class HelloClass {
private:
    std::string nombre;
public:
    HelloClass(const std::string& nombre);
    std::string generarMensaje() const;
};

#endif 