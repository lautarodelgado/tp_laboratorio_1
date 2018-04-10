#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int suma(int , int);
/** \brief Calcula la suma entre numeros enteros.
 *
 * \param Se declara una variable de tipo int llamada resultado.
 * \param La variable resultado es igual a la suma de los dos numeros enteros ingresados.
 * \return Devuelve la suma de los numeros efectuada en resultado.
 *
 */

int resta(int , int);
/** \brief Calcula la resta entre dos numeros enteros.
 *
 * \param Se declara una variable de tipo int llamada resultado.
 * \param La variable resultado es igual a la resta de los dos numeros enteros ingresados.
 * \return Devuelve la resta de los numeros, efectuada en resultado.
 *
 */

float division(int , int);
/** \brief Calcula la division entre dos numeros enteros.
 *
 * \param Se declara una variable de tipo float (ya que el resultado puede ser decimal) llamada resultado.
 * \param La variable resultado es igual al primer operando casteado divido el segundo operando.
 * \return Devuelve la division de los numeros, efectuada en resultado.
 *
 */

int multiplicacion(int , int);
/** \brief Calcula la multiplicación entre dos números enteros.
 *
 * \param Se declara una variable de tipo int llamada resultado.
 * \param La variable resultado es igual al primer operando multiplicado por el segundo operando.
 * \return Devuelve la multiplicacion de los dos operandos, efectuada en resultado.
 *
 */

int factorial(int);
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

