#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

   /*   SIGNIFICADO DAS VARIÁVEIS
        1) Cont = Contador
        2) Resp = Resposta
        3) Soma = Soma
        4) Sub = Subtração
        5) Mult = Multiplicação
        6) Div = Divisão
        7) Num1 = Número 1
        8) Num2 = Número 2
   */

   //Linguagem Brasileira
   setlocale(LC_ALL, "");

   //Variáveis inteiras:
   int cont = 0;
   int resp = 0;
   int soma = 0;
   int sub = 0;
   int mult = 0;
   int div = 0;
   int num1 = 0;
   int num2 = 0;

   //Comando de repetição DO WHILE.
   do {

        printf(  "\n\n"  );
        printf(  "\n [1] Para somar\n "  );
        printf(  "[2] Para subtrair\n "  );
        printf(  "[3] Para multiplicar\n "  );
        printf(  "[4] Para dividir\n "  );
        printf(  "[5] Para sair do programa\n "  );
        printf(  "\n"  );
        printf(  "Digite o número desejável ao que necessita: "  );
        scanf(  "%i", &resp  );
        system(  "clear"  );

    //Condições para as escolhas do cliente:

        if (  resp == 1  ) {
            printf(  "Digite o primeiro numero que deseja somar: "  );
            scanf(  "%i", &num1  );
            printf(  "Digite o segundo número que deseja somar: "  );
            scanf(  "%i", &num2  );
            soma = num1 + num2;
            printf(  "A soma entre os números %i e %i foi: %i", num1, num2, soma  );
        }else {
            if (  resp == 2  ) {
                printf(  "Digite o primeiro numero que deseja subtrair: "  );
                scanf(  "%i", &num1  );
                printf(  "Digite o segundo número que deseja subtrair: "  );
                scanf(  "%i", &num2  );
                sub = num1 - num2;
                printf(  "A subtração entre os números %i e %i foi: %i", num1, num2, sub  );
            }else {
                if (  resp == 3  ) {
                    printf(  "Digite o primeiro numero que deseja multiplicar: "  );
                    scanf(  "%i", &num1  );
                    printf(  "Digite o segundo número que deseja multiplicar: "  );
                    scanf(  "%i", &num2  );
                    mult = num1 * num2;
                    printf(  "A multiplicação entre os números %i e %i foi: %i", num1, num2, mult  );
                }else {
                    if (  resp == 4  ) {
                        printf(  "Digite o primeiro numero que deseja efetuar a divisão: "  );
                        scanf(  "%i", &num1  );
                        printf(  "Digite o segundo número que deseja efetuar a divisão: "  );
                        scanf(  "%i", &num2  );
                        div = num1 / num2;
                        printf(  "A divisão entre os números %i e %i foi: %i", num1, num2, div  );
                    }
                }
            }
        }
        
        
    // Fim dos comandos de condições
   
   
   }while (resp != 5);

   return 0;
}
