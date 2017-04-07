#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "operaciones_fun.h"
#include "jem_fun.h"
#include "Menu.h"

int main()
{

    char seguir='s';
    int opcion=0;
    float resultado;
    float x;
    float y;
    int flag1=0;
    int flag2=0;

   do
        {
        system("cls");

        menu(x,y,flag1,flag2);

        opcion = getInt("\n\n          Que operacion desea realizar? : ");

           switch(opcion)
           {
             case 1:
                printf("          Ingrese el 1er operando : ");
                scanf("%f",&x);
                flag1=1;
                break;

             case 2:
                printf("          Ingrese el 2do operando : ");
                scanf("%f",&y);
                flag2=1;
                break;

             case 3:
                 if (flag1==0 || flag2==0)
                    printf("          Operacion invalida !!\n");
                 else
                 {
                      resultado=SUMA(x,y);
                      printf("          la suma es: %.2f \n",resultado);
                 }
                break;

             case 4:
                 if (flag1==0 || flag2==0)
                    printf("          Operacion invalida !!\n");
                 else
                 {
                     resultado=RESTA(x,y);
                     printf("          la resta es: %.2f \n",resultado);
                 }
                break;

             case 5:
                 if (flag1==0 || flag2==0)
                    printf("          Operacion invalida !!\n");
                else
                    resultado=DIVISION(x,y);
                break;

             case 6:
                   if (flag1==0 || flag2==0)
                    printf("          Operacion invalida !!\n");
                   else
                   {
                       resultado=MULTIPLICACION(x,y);
                       printf("          la multiplicacion es: %.2f \n",resultado);
                   }
                break;

             case 7:
                  if (flag1==0)
                    printf("          Operacion invalida !!\n");
                  else if(x<0)
                     printf("\n          -Para calcular el factorial el operador debe ser positivo !!\n");
                 else
                 {
                    resultado=factorial(x);
                    printf("          El factorial de %2.f es: %2.f \n",x,resultado);
                 }
                break;

             case 8:
                 if (flag1==0 || flag2==0)
                    printf("          Operacion invalida !!\n");
                    else
                    {
                        resultado=SUMA(x,y);
                        printf("          la suma es: %.2f \n",resultado);

                       resultado=RESTA(x,y);
                       printf("          la resta es: %.2f \n",resultado);

                       resultado=DIVISION(x,y);

                       resultado=MULTIPLICACION(x,y);
                       printf("          la multiplicacion es: %.2f \n",resultado);

                       if(x<0)
                         {
                           printf("          -Para calcular el factorial el operador debe ser positivo !!\n");
                         }
                      else
                        {
                          resultado=factorial(x);
                          printf("          El factorial es: %2.f \n",resultado);
                        }
                    }
                break;

             case 9:
                seguir = 'n';
                break;

             default:
                printf("          Ingrese una opcion valida !!\n\n");
                fflush(stdin);
                break;
            }
            system("pause");
     } while(seguir=='s');

  return 0;
}



