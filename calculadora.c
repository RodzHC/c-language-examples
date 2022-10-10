// Biblioteca de entrada e saída
#include <stdio.h>

// Bibilioteca com fuções matemáticas
#include <math.h>

// Biblioteca contém várias funções e constantes básicas
#include <stdlib.h>



int main(void)
{
       //Inicialização das variáveis que será usadas no código
       int opcao, i, a, b;
       float x, y, resultado;

       //Mostra na tela lista de opções
       printf("\nSelecione sua operação(0 para sair):\n");
       printf("1. Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\n");
       printf("5. Raiz Quadrada\n6.X ^ Y\n7.X ^ 2\n8.X ^ 3\n");
       printf("9. 1 / X\n10.X ^ (1 / Y)\n11.X ^ (1 / 3)\n");
       printf("12. 10 ^ X\n13.X !\n14.%c\n15.log10(x)\n16.Modo\n", 37);
       printf("17.Seno(X)\n18.Coseno(X)\n19.Tangente(X)\n20.Cosecante(X)\n");
       printf("21.Cotangente(X)\n22.Secante(X)\n");

       //captura opção do usuário
       printf("Opção: ");
       scanf("%d", &opcao);


       //Checa se usuário digitou o comando para sair
       if (opcao == 0)
              exit(0);

       //Roda o código dependendo do input do usuário
       switch (opcao)
       {
       //Adição
       case 1:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = x + y;
              printf("\nResultado: %f", resultado);
              break;
       //Subtração
       case 2:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = x - y;
              printf("\nResultado: %f", resultado);
              break;
       //Multiplicação
       case 3:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = x * y;
              printf("\nResultado: %f", resultado);
              break;
       //Divisão
       case 4:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = x / y;
              printf("\nResultado: %f", resultado);
              break;
       //Raix Quadrada
       case 5:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = sqrt(x);
              printf("\nResultado: %f", resultado);
              break;
       //Potenciare
       case 6:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = pow(x, y);
              printf("\nResultado: %f", resultado);
              break;
       //Potenciare 2 
       case 7:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = pow(x, 2);
              printf("\nResultado: %f", resultado);
              break;
       //Potenciare 3
       case 8:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = pow(x, 3);
              printf("\nResultado: %f", resultado);
              break;
       // 1 dividido por X
       case 9:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = pow(x, -1);
              printf("\nResultado: %f", resultado);
              break;
       // X ^ (1 / Y)
       case 10:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = pow(x, (1 / y));
              printf("\nResultado: %f", resultado);
              break;
       // X ^ (1 / 3)
       case 11:
              printf("Entre X: ");
              scanf("%f", &x);
              y = 3;
              resultado = pow(x, (1 / y));
              printf("\nResultado: %f", resultado);
              break;
       // 10 ^ X
       case 12:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = pow(10, x);
              printf("\nResultado: %f", resultado);
              break;
       // X ! 
       case 13:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = 1;
              for (i = 1; i <= x; i++)
              {
                     resultado = resultado * i;
              }
              printf("\nResultado: %.f", resultado);
              break;
       // Porcentagem
       case 14:
              printf("Entre X: ");
              scanf("%f", &x);
              printf("\nEntre Y: ");
              scanf("%f", &y);
              resultado = (x * y) / 100;
              printf("\nResultado: % .2f", resultado);
              break;
       // Log base 10
       case 15:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = log10(x);
              printf("\nResultado: % .2f", resultado);
              break;
       // Modo X
       case 16:
              printf("Entre X: ");
              scanf("%d", &a);
              printf("\nEntre Y: ");
              scanf("%d", &b);
              resultado = a % b;
              printf("\nResultado: %lg", resultado);
              break;
       // Seno de X
       case 17:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = sin(x * 3.14159 / 180);
              printf("\nResultado: % .2f", resultado);
              break;
       // Coseno de X
       case 18:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = cos(x * 3.14159 / 180);
              printf("\nResultado: % .2f", resultado);
              break;
       // Tangente de X
       case 19:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = tan(x * 3.14159 / 180);
              printf("\nResultado: % .2f", resultado);
              break;
       // Cosecante de X
       case 20:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = 1 / (sin(x * 3.14159 / 180));
              printf("\nResultado: % .2f", resultado);
              break;
       // Cotangente de X
       case 21:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = 1 / tan(x * 3.14159 / 180);
              printf("\nResultado: % .2f", resultado);
              break;
       // Secante de X
       case 22:
              printf("Entre X: ");
              scanf("%f", &x);
              resultado = 1 / cos(x * 3.14159 / 180);
              printf("\nResultado: % .2f", resultado);
              break;
       // Opção caso o usuário digite um input não existente
       default:
              printf("\nInvalid Choice !");
       }
       printf("\n\n");
       return 0;
}
