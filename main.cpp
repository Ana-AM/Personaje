#include <iostream>
#include "Personaje.h"

using namespace std;
int main(){
    
    Personaje p1;   //constructor por defecto
    cout << p1.getTamanho() << endl;
        
    string nombre = "Ana";
    float tamanho = 1.64;
    string especie = "humano";
    string tipo = "xx";
    string genero = "femenino";

    Personaje p2(nombre, tamanho, especie, tipo, genero);
    cout << p2.getNombre() << endl;
    cout << p2.getEspecie() << endl;

    Personaje p3 = p2;  //constructor copia
    cout << p3.getTipo() << endl;
    cout << p3.getGenero() << endl;

    Personaje *ptr = &p3; 
    cout << ptr->getTamanho() << endl;

    string nombre1="Paola";
    p3.setNombre(nombre1);
    cout << p3.getNombre() << "\n\n";

    p3.print();
}