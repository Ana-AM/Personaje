#ifndef __PERSONAJE_H_
#define __PERSONAJE_H__

#include <string>
#include <iostream>

class Personaje {
    private:
        std::string nombre;
        float tamanho;
        std::string especie;
        std::string tipo;
        std::string genero;
    
    public:
        Personaje(){
            this->nombre = "";
            this->tamanho = 0;
            this->especie = "";
            this->tipo = "";
            this->genero = "";
        }

        Personaje(std::string nombre, float tamanho, std::string especie, std::string tipo, std::string genero) {
            this->nombre = nombre;
            this->tamanho = tamanho;
            this->especie = especie;
            this->tipo = tipo;
            this->genero = genero;
        }

        Personaje(const Personaje &o) {
            this->nombre = o.nombre;
            this->tamanho = o.tamanho;
            this->especie = o.especie;
            this->tipo = o.tipo;
            this->genero = o.genero;
        }

        std::string getNombre() const {
            return nombre;
        }
        float getTamanho() const {
            return tamanho;
        }
        std::string getEspecie() const {
            return especie;
        }
        std::string getTipo() const {
            return tipo;
        }
        std::string getGenero() const {
            return genero;
        }

        void setNombre(std::string nombre) {
            this->nombre = nombre;
        }
        void setTamanho(float tamanho) {
            this->tamanho = tamanho;
        }
        void setEspecie(std::string especie) {
            this->especie = especie;
        }
        void setTipo(std::string tipo) {
            this->tipo = tipo;
        }
        void setGenero(std::string genero) {
            this->genero = genero;
        }

        void print(){
            std::cout << "ATRIBUTOS DEL PERSONAJE "<<"\n"
            << "Nombre: " << nombre << "\n"
            << "Tamanho: " << tamanho << "\n"
            << "Especie: "<< especie <<": \n"
            << "Tipo: "<< tipo <<": \n"
            << "Genero: "<< genero <<": \n";
        }

        ~Personaje(){}
};

#endif