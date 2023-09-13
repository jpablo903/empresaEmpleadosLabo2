#ifndef EMPLEADOCOMISION_H_INCLUDED
#define EMPLEADOCOMISION_H_INCLUDED
#include "empleado.h"

class EmpleadoXComision: public Empleado{
    public:
        EmpleadoXComision();

        float getValorPorcentual();
        void setValorPorcentual(float);

        void cargar();
        void mostrar();
    private:
        float _valorPorcentual;
};


#endif // EMPLEADOCOMISION_H_INCLUDED
