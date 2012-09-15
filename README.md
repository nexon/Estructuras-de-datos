### Estructuras de datos


#Lista Enlazada (Simple)
Simple implementación de una lista enlazada (Linked List) que guarda numeros enteros.

##Para crear una lista nueva:

```c++
Lista *list = new Lista();
```

##Para Insertar un elemento

```c++
list->inserta(8);
```
##Para mostrar por patalla todos los elementos de la lista

```c++
list->despliega();
```

##Para eliminar un elemento de la lista

```c++
list->elimina(8);
```

#Cola
Simple implementación de una Cola (Queue) que guarda numeros enteros
Esta Cola es un template en C++

##Para crear una cola nueva
```c++
Cola <type> cola;
```
##Para Insertar un elemento
```c++
cola.agrega(elementOfType <type>);
```
##Para mostrar por pantalla todos los elementos de la cola
```c++
cola.despligega();
```
##Para eliminar un elemento de la cola
```c++
cola.extrae();
```
#License
Copyright (c) 2010 Alberto Lagos Toro <alberto.lagos@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
