#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief funcion que suma dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la suma.
 */
float SUMA(float x, float y)
{
    float suma = x+y;
    return suma;
}

/** \brief funcion que resta dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la resta.
 */
float RESTA(float x,float y)
{
    float resta = x-y;
    return resta;
}

/** \brief funcion que divide dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la division.
 */
float DIVISION(float x, float y)
{
    float division = x/y;
     if (y==0)
     {
         printf("          No se puede dividir un numero entre 0 !!\n");
     }
     else
     {
         return printf("          La division es: %.2f \n",division);
     }
}

/** \brief funcion que multiplica dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la multiplicacion.
 */
float MULTIPLICACION(float x,float y)
{
    float multiplicacion = x*y;
    return multiplicacion;
}

/** \brief funcion que da el factorial de un numero.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado del factorial.
 */

double factorial(float x)
{
    double fac;
    if ( x>1)
    {
        fac=x * factorial(x-1);
    }
    else if (x==0 || x==1)
    {
        fac=1;
    }
 return fac;

}

#endif // FUNCIONES_H_INCLUDED
