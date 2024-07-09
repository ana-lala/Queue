#include <iostream>
#include "Cola.hpp"

int main() {
    try {
        Cola<int> cola;

        // Probar la funci�n Agregar
        cola.Agregar(10);
        cola.Agregar(20);
        cola.Agregar(30);

        // Probar la funci�n Imprimir
        std::cout << "Contenido de la cola: \n";
        cola.Imprimir();

        // Probar ObtenerFrente y ObtenerFondo
        std::cout << "Frente de la cola: " << cola.ObtenerFrente() << std::endl;
        std::cout << "Fondo de la cola: " << cola.ObtenerFondo() << std::endl;

        // Probar Eliminar
        cola.Eliminar();
        std::cout << "Contenido de la cola despu�s de eliminar el frente: \n";
        cola.Imprimir();

        // Probar ObtenerTam
        std::cout << "Tama�o de la cola: " << cola.ObtenerTam() << std::endl;

        // Probar ImprimirSinFrente
        std::cout << "Contenido de la cola sin el frente: ";
        cola.ImprimirSinFrente();

        // Probar la funci�n Vaciar
        cola.Vaciar();
        std::cout << "Contenido de la cola despu�s de vaciar: ";
        cola.Imprimir();
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    } catch (...) {
        std::cerr << "Error inesperado" << std::endl;
    }

    return 0;
}
