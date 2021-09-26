#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(void) {

	setbuf(stdout,NULL);

	char opcionLetra;
	float numUno;
	float numDos;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultplicacion;
	float resultadoFactorialUno;
	float resultadoFactorialDos;


	do
	{

		printf("\nMenu: a- Ingresar número 1 n\ b- Ingresar número 2 n\ c- Realizar todas las operaciones n\ d- Imprimir todas las operaciones n\ e- Salir ");
		scanf("%d", &opcion);

		switch(opcionLetra)
		{
			case a:
				printf("ingrese el primer numero: ");
				scanf(%d ,&numUno);

				break;

			case b:
				printf("ingrese el segundo numero: ");
				scanf(%d , &numDos);

				break;

			case c:
				if(numUno != NULL && numDos != NULL)
                {
                    sumar(numUno, numDos, &resultadoSuma);
					restar(numUno, numDos, &resultadoResta);
					dividir(numUno, numDos, &resultadoDiv);
					multiplicar(numUno, numDos, &resultadoMultpl);
					factorial((int)numUno, &resultadoFactUno);
					factorial((int)numDos, &resultadoFactorialDos);
					printf("Operaciones hechas \n");
				}
				else
				{
						printf("Ocurrio un error \n");
                }
				break;
			case d:


					printf("El resultado de %d + %d es: %d \n", numUno, numDos, resultadoSuma);

					printf("El resultado de %d - %.d es: %d \n", numUno, numDos, resultadoResta);

					if(return == 0)
					{
						printf("El divisor no puede ser 0 \n");
					}
					else
					{
						printf("El resultado de %d / %d es: %.2f \n", numUno, numDos, resultadoDivision);
					}

					printf("El resultado de %d * %d es: %d \n", numUno, numDos, resultadoMultplicacion);

					if(return == 0)
					{
						printf("Error en factorial \n");
					}
					else
					{
						printf("El resultado de !%d es: %d\n", (int)numUno, (int)resultadoFactorialUno);
					}

					if(return == 0)
					{
						printf("Eror en el factorial de numero 2 \n");
					}
					else
					{
						printf("El resultado de !%d es: %d \n", (int)numDos, (int)resultadoFactorialDos);
					}


				}
				break;

            default:
                printf("salir");



	}while(opcion != 5);


	return EXIT_SUCCESS;
}
