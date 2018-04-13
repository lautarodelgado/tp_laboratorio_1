#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float suma(float num1, float num2);
/** \brief Calcula la suma entre dos numeros.
 *
 * \param Se declara una variable de tipo float llamada resultado.
 * \param La variable resultado es igual a la suma de los dos numeros ingresados.
 * \return Devuelve la suma de los numeros efectuada en resultado.
 *
 */

float resta(float num1, float num2);
/** \brief Calcula la resta entre dos numeros enteros.
 *
 * \param Se declara una variable de tipo float llamada resultado.
 * \param La variable resultado es igual a la resta de los dos numeros ingresados.
 * \return Devuelve la resta de los numeros, efectuada en resultado.
 *
 */

float division(float num1, float num2);
/** \brief Calcula la division entre dos numeros.
 *
 * \param Se declara una variable de tipo float llamada resultado.
 * \param La variable resultado es igual al primer operando divido por el segundo operando.
 * \return Devuelve la division de los numeros, efectuada en resultado.
 *
 */

float multiplicacion(float num1 , float num2);
/** \brief Calcula la multiplicación entre dos números.
 *
 * \param Se declara una variable de tipo float llamada resultado.
 * \param La variable resultado es igual al primer operando multiplicado por el segundo operando.
 * \return Devuelve la multiplicacion de los dos operandos, efectuada en resultado.
 *
 */

int factorial(float num1);
/** \brief Realiza la factorización de un número entero.
 *
 * \param Se declara una variable de tipo int llamada i.
 * \param Se declara una variable de tipo int llamada resultado e igualada a 1.
 * \param Se inicia un bucle for con la variable i igualada en 1, mietras esta sea menor o igual al primer operando se la incrementa en 1.
 * \param Dentro del bucle for, la variable resultado es igual a resultado multiplicado por i.
 * \return Devuelve el primer operando factorizado.
 *
 */


#endif // FUNCIONES_H_INCLUDED

