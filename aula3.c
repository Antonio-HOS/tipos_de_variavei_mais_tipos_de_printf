#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, "pt-BR");

    int valorint1, valorint2, parametro1, parametro2, resultadoint;
    float  valorfloat1, valorfloat2, resultadofloat;


// printf("digite o primeiro valor: ");
// scanf("%i", &valor1);

// printf("digite o segundo valor: ");
// scanf("%i", &valor2);

printf("escolha a operacao desejada: (1)somar, (2)elevar, (3)multiplicar, (4)dividi: ");
scanf("%i",&parametro1);
printf("agora escoha o modo de saida: (1)int, (2)float, (3)hexadecimal: ");
scanf("%i", &parametro2);

if(parametro1 == 1){
    //SOMA----------------
    if(parametro2 == 1){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = valorint1 + valorint2;
        printf("o valor é, %i", resultadoint );
    }else if(parametro2 == 2){
       printf("digite o primeiro valor: ");
        scanf("%f", &valorfloat1);

        printf("digite o segundo valor: ");
        scanf("%f", &valorfloat2);

        resultadofloat = valorfloat1 + valorfloat2;
        printf("o valor é, %f", resultadofloat );
    }else if(parametro2 == 3){
        
    }
}else if(parametro1 == 2){
    if(parametro2 == 1){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = pow(valorint1,valorint2);
        printf("o valor e, %i", resultadoint);
    }else if(parametro2 == 2){
       printf("digite o primeiro valor: ");
        scanf("%f", &valorfloat1);

        printf("digite o segundo valor: ");
        scanf("%f", &valorfloat2);

        resultadofloat = pow(valorfloat1, valorfloat2);
        printf("o valor e, %f", resultadofloat );
    }else if(parametro2 == 3){
       printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = pow(valorint1,valorint2);
        printf("o valor e, %x", resultadoint);
    }
}else if(parametro1 == 3){
     if(parametro2 == 1){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = valorint1 * valorint2;
        printf("o valor e, %i", resultadoint );
    }else if(parametro2 == 2){
       printf("digite o primeiro valor: ");
        scanf("%f", &valorfloat1);

        printf("digite o segundo valor: ");
        scanf("%f", &valorfloat2);

        resultadofloat = valorfloat1 * valorfloat2;
        printf("o valor e, %f", resultadofloat );
    }else if(parametro2 == 3){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = valorint1 * valorint2;
        printf("o valor e, %x", resultadoint );
    }
}else if(parametro1 == 4){
     if(parametro2 == 1){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = valorint1 / valorint2;
        printf("o valor e, %i", resultadoint );
    }else if(parametro2 == 2){
       printf("digite o primeiro valor: ");
        scanf("%f", &valorfloat1);

        printf("digite o segundo valor: ");
        scanf("%f", &valorfloat2);

        resultadofloat = valorfloat1 / valorfloat2;
        printf("o valor e, %f", resultadofloat );
    }else if(parametro2 == 3){
        printf("digite o primeiro valor: ");
        scanf("%i", &valorint1);

        printf("digite o segundo valor: ");
        scanf("%i", &valorint2);

        resultadoint = valorint1 / valorint2;
        printf("o valor e, %x", resultadoint );
    }
}




    return 0;
}
