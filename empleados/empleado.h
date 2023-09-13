#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "persona.h"

class Empleado: public Persona{
        public:
            Empleado();

            int getLegajo();
            int getTipo();
            float getSalario();
            std::string getMail();

            void setLegajo(int);
            void setTipo(int);
            void setSalario(float);
            void setMail(std::string);

            void cargar();
            void mostrar();

        private:
            int _legajo;
            int _tipo;
            float _salario;
            std::string _mail;

};

#endif // EMPLEADO_H_INCLUDED
