#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[51];
    int edad;
    int estado;
    int dni;

}ePersona;

/**
* \brief Solicita un número al usuario y lo valida
* \param int Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param minimo Limite inferior a validar
* \param maximo Limite superior a validar
* \return un numero valido ingresado
*
*/
int getInt(int numero , char mesagge[] , char eMesagge[] , int minimo , int maximo);

/**
* \brief Solicita un número al usuario y lo valida
* \param numero Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param minimo Limite inferior a validar
* \param maximo Limite superior a validar
* \return Un numero valido ingresado
*
*/
float getFloat(float numero, char message[] , char eMessage[] , float minimo , float maximo);


/** \brief Inicializa todos los estados del array en 0, es decir están libres
 *
 * \param recorre el array con un for
 * \param el estado de cada elemente cambia a 0
 * \return
 *
 */
void inicializarLibre(ePersona [] , int tam);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[] , int tam);


/** \brief nos permite dar de alta los datos de una persona
 *
 * \param se ingresa un dni
 * \param se comprueba que el dni no haya sido ingresado anteriormente
 * \param si no fue ingresado, se carga el resto de los datos
 * \param si fue ingresado se imprime un mensaje y se vuelve al menu principal
 * \return
 *
 */
void agregarPersona(ePersona[] , int);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], int tam ,int dni);


/** \brief Imprime los datos de una persona
 *
 * \param imprime los datos de una persona, ingresando su indice
 * \return
 *
 */
void mostrarDato(ePersona);


/** \brief se cambia el estado de una persona en específico a 0 (se borra)
 *
 * \param se ingresa un dni
 * \param si el dni se encuentra en el sistema y confirmamos la bajo, el estado de la persona con el dni cambia a 0
 * \param si no confirmamos volvemos al menu principal sin haber realizado ninguna baja
 * \return
 *
 */
void borrarPersona(ePersona[] , int);


/** \brief ordena los nombres ingresados alfabeticamente de manera ascendente
 *
 * \param se compara el primer nombre ingresado con el siguiente
 * \param si el segundo nombre es más grande que el primero, intercambian su lugar en el vector
 * \param se repite el procedimiento hasta que los nombres queden ordenados
 * \return
 *
 */
void ordenarPorNombre(ePersona[] , int tam);


/** \brief imprime los datos de todas las personas cargadas en el sistema
 *
 * \param se ordenan los datos por nombre, de manera ascendente
 * \param se recorre el vector con un for y, si su estado es diferente a 0 (no está vacío), se imprimen los datos
 * \return
 *
 */
void mostrarPersonas(ePersona[] , int tam);


/** \brief se grafican las edades en un eje x e y teniendo en cuenta 3 rangos de edad
 *
 * \param se cuenta la cantidad de edades por cada rango para saber cuál tiene la mayor cantidad
 * \param segun cuál es mayor, se imprime un asterisco (*) por cada edad en 3 filas que representan cada rango
 * \return
 *
 */
void graficoEdades(ePersona[] , int);

#endif // FUNCIONES_H_INCLUDED
