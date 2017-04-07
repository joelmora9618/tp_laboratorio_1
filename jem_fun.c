/** \brief funcion que obtiene el numero ingresado y imprime un mensaje.
 * \param texto a imprimir en pantalla.
 * \return numero ingresado.
 */
int getInt(char* mensaje)
{
    int num = 0;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&num);
    return num;
}

/** \brief funcion que obtiene una cadena de texto ingresada.
 * \param texto a imprimir en pantalla.
 * \param texto ingresado
 */
void getString(char* mensaje, char* cadena)
{
    printf("%s", mensaje);
    fflush(stdin);
    gets(cadena);
}
