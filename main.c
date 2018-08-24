#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno, numeroDos, numeroTres, numeroMax, numeroMin, numeroMedio;

    printf("Ingresar el primer numero: ");
    scanf("%d", &numeroUno);
    numeroMax=numeroUno;
    numeroMin=numeroUno;
    numeroMedio=numeroUno;

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);
    if(numeroDos>numeroMax){
        numeroMax=numeroDos;
    }
    else if (numeroDos<numeroMin){
        numeroMin=numeroDos;
    }


    printf("Ingrese el tercer numero: ");
    scanf("%d", &numeroTres);
    if(numeroTres>numeroMax){
        numeroMax=numeroTres;
    }
    else if(numeroTres<numeroMin){
        numeroMin=numeroTres;
    }

    if(numeroUno>numeroMin && numeroUno<numeroMax){
        numeroMedio=numeroUno;
        }else
            if(numeroDos>numeroMin && numeroDos<numeroMax){
            numeroMedio=numeroDos;
        }else
            if(numeroTres>numeroMin && numeroTres<numeroMax){
            numeroMedio=numeroTres;
    }

    printf("El numero mayor es: %d y el numero menor es: %d y el numero medio es: %d",numeroMax,numeroMin,numeroMedio);
    return 0;
}
