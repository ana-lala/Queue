# Cola Class

## Overview

The `Cola` class implements a generic queue (FIFO - First In, First Out) for storing elements of type `T`.

## Implementation Details

- **Constructor (`Cola()`)**: Initializes an empty queue.
  
- **Destructor (`~Cola()`)**: Clears all allocated memory upon object destruction.

- **Copy Constructor (`Cola(const Cola &c)`)** and **Assignment Operator (`operator=`)**: Allow copying of queues while maintaining correct internal pointers and sizes.

## Methods

### `Agregar(T valor)`

Adds an element of type `T` to the back of the queue.

### `Eliminar()`

Removes the front element from the queue.

### `ObtenerTam()`

Retrieves the current size of the queue.

### `ObtenerFondo()`

Retrieves the value at the back of the queue.

### `ObtenerFrente()`

Retrieves the value at the front of the queue.

### `EstaVacia()`

Checks if the queue is empty.

### `Vaciar()`

Empties the queue by deleting all elements.

### `Imprimir()`

Prints all elements in the queue.

### `ImprimirSinFrente()`

Prints all elements in the queue except the front element.

## Exception Handling

- **Thrown Exception**: Throws an exception when attempting to perform operations on an empty queue.

## Example Usage

```cpp
#include <iostream>
#include "Cola.hpp"

int main() {
    Cola<int> cola;

    cola.Agregar(10);
    cola.Agregar(20);
    cola.Agregar(30);

    cola.Imprimir();

    cola.Eliminar();
    std::cout << "Después de eliminar el frente:" << std::endl;
    cola.Imprimir();

    return 0;
}
