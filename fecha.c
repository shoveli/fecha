#include "head.h"

int es_bis(s_fecha *p)
{
    if((p->anio % 4 == 0 &&  p->anio % 100 != 0) || (p->anio % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void validar_f(s_fecha *p)
{
    if(p->mes >= 1 && p->mes <= 12)
    {
        switch(p->mes)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(p->dia >= 1 && p->dia <= 31)
                {
                    printf("Es una fecha correcta");
                }
                else
                {
                    printf("Es una fecha incorrecta");

                }
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                if(p->dia >= 1 && p->dia <= 30)
                {
                    printf("Es una fecha correcta");
                }
                else
                {
                    printf("Es una fecha incorrecta");
                }
                break;
            case 2:
                if(es_bis(p))
                {
                    if(p->dia >= 1 && p->dia <= 29)
                    {
                        printf("Fecha correcta");
                    }
                    else
                    {
                        printf("Fecha erronea");
                    }
                }
                else
                {
                    if(p->dia >= 1 && p->dia <= 28)
                    {
                        printf("Fecha correecta");
                    }
                    else
                    {
                        printf("Fecha erronea");
                    }
                }
        }
    }

}
int dias_transcurridos(s_fecha *f1)
{
    int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int contador = 1;
    int acumulador = 0;
    while(contador != f1->mes)
    {
      acumulador += meses[contador];
    }
    contador++;
    int aux = meses[contador] - f1->dia;

    return (acumulador+aux);
}

int contar_bis(s_fecha *f1, s_fecha *f2)
{
    int i = f1->anio > f2->anio ? f1->anio : f2->anio;
    if(i == f1->anio)
    {
        int j = f2->anio;
    }
    else
    {
        int j = f1->anio;
    }

    int acumulador = 0;

    for(i;i <= j; i++)
    {
        if(i % 4 == 0 &&  i % 100 != 0 || i % 400 == 0)
           acumulador++;
    }

    return acumulador;
}

int dif_dias(s_fecha *l1, s_fecha *l2)
{
    contar_bis(l1,l2);



}
