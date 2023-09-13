#ifndef EMPLEADOXHORA_H_INCLUDED
#define EMPLEADOXHORA_H_INCLUDED
#include "empleado.h"

class EmpleadoHorario:public Empleado{
    public:
        EmpleadoHorario();

        int getHorasTrabajadas();

        void setHorasTrabajadas(int);

        void cargar();
        void mostrar();
    private:
        int _horasTrabajadas;
};

#endif // EMPLEADOXHORA_H_INCLUDED
