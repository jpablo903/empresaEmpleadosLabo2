#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <string>

class Persona{
    public:
        std::string getNombre();
        std::string getApellido();

        void setNombre(std::string);
        void setApellido(std::string);

        Persona();
        Persona(std::string, std::string);

    private:
        std::string _nombre;
        std::string _apellido;
};

#endif // PERSONA_H_INCLUDED
