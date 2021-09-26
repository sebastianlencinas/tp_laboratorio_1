#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"


  int sumar(int a , int b , int *pResultado)
    {
        todoOk= 0;
        if(pResultado != NULL)
        {
            *pResultado = a + b ;
            todoOk= 1;
        }

      return = todoOk;
    }


   int restar (int a , int b , int *pResultado)
    {
        todoOk= 0;
        if(pResultado != NULL)
        {
            *pResultado = a - b ;
            todoOk = 1;
        }
        return = todoOk;
    }


    int multiplicar (int a, int b, imt *pResultado)
    {
        todoOk = 0;
        if(pResultado != NULL)
        {
            *pResultado = a * b ;
            todoOk = 1;
        }

        return= todoOk;
    }


    float dividir(int dividendo , int divisor , float *pResultado)
    {
        todoOk = 0;
        if(pResultado != NULL && divisor != 0)
        {
            *pResultado = (float) dividendo / divisor;
            todoOk = 1
        }
        return= todoOk;

    }


    long factorial (int a , long *pResultado)
    {
        todoOk = 0
        if (a >= 0 && a != NULL )
        {
            for (int i = 1; i <= a; i++)
            {
                factorial= factorial *= i;
                *pResultado= factorial;
                todoOk= 1
            }
        }

        return = todoOk;
    }


