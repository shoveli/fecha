#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} s_fecha;

int es_bis(s_fecha *p);
void validar_f(s_fecha *p);
int dias_transcurridos(s_fecha *f1);
int contar_bis(s_fecha *f1, s_fecha *f2);
int dif_dias(s_fecha *l1, s_fecha *l2);
#endif // HEAD_H_INCLUDED
