#include "HelloClass.h"
#include <iostream>
#include <ctime>

HelloClass::HelloClass(const std::string& nombre) : nombre(nombre) {}

std::string HelloClass::decirHola() const {

    // Nos devolverá los segundos que han pasado
    time_t tiempoActual = time(NULL);
    
    //std::cout << t;

    struct tm tiempoLocal; 
  
    localtime_s(&tiempoLocal, &tiempoActual);  

    char fecha[30];

    //Convirtiendolo a un formato 
    strftime(fecha, sizeof(fecha), "%d/%m/%Y", &tiempoLocal);

    return "Hola Mundo. Saludo de " + nombre + " hoy " + fecha + " .";
}
