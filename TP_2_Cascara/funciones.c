#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int getInt(int numero ,char message[] , char eMessage [] , int menor , int mayor)
{
    printf("%s" , message);
    scanf("%d" , &numero);

    while(numero < menor || numero > mayor)
    {
        printf("%s" , eMessage);
        scanf("%d" , &numero);
    }
    return numero;
}

float getFloat(float flotante , char mesagge[] , char eMessage[] , float menor , float mayor)
{

    printf("%s" , mesagge);
    scanf("%f" , &flotante);

    while(flotante < menor || flotante > mayor)
    {
        printf("%s" , eMessage);
        scanf("%f" , &flotante);
    }
    return flotante;
}

void inicializarLibre(ePersona per[] , int tam)
{
    int i;
    for(i=0 ; i < tam ; i++)
    {
        per[i].estado = 0;
    }
}

int obtenerEspacioLibre(ePersona lista[] , int tam)
{
    int i;
    int espacio = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(lista[i].estado == 0)
        {
            espacio = i;
            break;
        }
    }
    return espacio;
}

int buscarPorDni(ePersona per[] , int tam , int dni)
{
    int i;
    int indiceDni = -1;
    for(i=0 ; i < tam ; i++)
    {
        if(dni == per[i].dni && per[i].estado == 1)
        {
            indiceDni = i;
            break;
        }
    }
    return indiceDni;
}

void mostrarDato(ePersona per)
{
    printf("DNI:\tNOMBRE:\tEDAD:\n");
    printf("%d\t%s\t%d\n" , per.dni ,per.nombre , per.edad);
}

void agregarPersona(ePersona per[] , int tam)
{
    ePersona nuevaPersona;
    int indice;
    int dni;
    int dniExistente;

    indice = obtenerEspacioLibre(per , tam);

    system("cls");
    printf("----ALTA PERSONA----\n");
    if(indice == -1)
    {
        printf("\nLLENO! No se pueden ingresar mas datos.\n\n");
    }
    else
    {
        dni = getInt(dni , "Ingrese DNI: " , "DNI no valido, reingrese: " , 1 , 100000000);

        dniExistente = buscarPorDni(per , tam , dni);

        if(dniExistente != -1)
        {
            printf("\nEl DNI %d ya fue cargado en el sistema.\n" , dni);
            mostrarDato(per[dniExistente]);
        }
        else
        {
            nuevaPersona.estado = 1;
            nuevaPersona.dni = dni;

            printf("Ingrese el nombre: ");
            fflush(stdin);
            scanf("%[^\n]" , nuevaPersona.nombre);

            nuevaPersona.edad = getFloat(nuevaPersona.edad , "Ingrese la edad: " , "Edad no valida [0-100]. Reingrese: " , 0 , 100);

            per[indice] = nuevaPersona;
        }
    }
}


void borrarPersona(ePersona per[] , int tam)
{
    int dni;
    char respuesta;
    int dniExistente;
    ePersona nuevaPersona;

    system("cls");
    printf("----BORRAR PERSONA----\n");
    printf("\nIngrese el DNI de la persona que quiere borrar: ");
    scanf("%d" , &dni);

    dniExistente = buscarPorDni(per , tam , dni);

    if(dniExistente == -1)
    {
        printf("\nEL DNI %d nunca fue ingresado en el sistema.\n\n\n" , dni);
    }
    else
    {
        mostrarDato(per[dniExistente]);

        printf("\nEsta seguro que desea borrar los datos de la persona mostrada? [s/n]\n");
        fflush(stdin);
        scanf("%c" , &respuesta);
        respuesta = tolower(respuesta);

        while(respuesta != 'n' && respuesta != 's')
        {
            printf("Error. Ingrese s/n.");
            fflush(stdin);
            scanf("%c" , &respuesta);
            respuesta = tolower(respuesta);
        }

        if(respuesta == 'n')
        {
            printf("\nBaja cancelada.\n");
        }
        else
        {
            nuevaPersona.estado = 0;
            per[dniExistente].estado = nuevaPersona.estado;
            printf("\nBaja exitosa!\n");
        }
    }
}

void ordenarPorNombre(ePersona per[] , int tam)
{
    int i;
    int j;
    ePersona aux;

    printf("DNI:\tNOMBRE:\tEDAD:\n");
    for(i=0 ; i < tam-1 ; i++)
    {
        for(j=i+1 ; j < tam ; j++)
        {
            if((strcmp(per[i].nombre , per[j].nombre) > 0))
            {
                aux = per[i];
                per[i] = per[j];
                per[j] = aux;
            }
        }
    }
}

void mostrarPersonas(ePersona per[] , int tam)
{
    ordenarPorNombre(per , tam);
    int i;

    system("cls");
    printf("----LISTA ORDENADA POR NOMBRE----\n\n");

    printf("DNI:\tNOMBRE:\tEDAD:\n");
    for(i=0 ; i < tam ; i++)
    {
        if(per[i].estado == 1)
        {
            printf("%d\t%s\t%d\n" , per[i].dni , per[i].nombre , per[i].edad);
        }
    }
}


void graficoEdades(ePersona per[] , int tam)
{
    int i;
    int edad1=0 , edad2=0 , edad3=0;
    int flag = 0;
    int maximo;

    system("cls");
    printf("----GRAFICO POR EDADES----\n");

    for(i=0 ; i < tam ; i++)
    {
        if(per[i].estado == 1)
        {
            if(per[i].edad < 19)
            {
                edad1 = edad1 + 1;
            }

            if(per[i].edad > 18 && per[i].edad < 36)
            {
                edad2 = edad2 + 1;
            }
            else
            {
                if(per[i].edad > 35)
                {
                    edad3 = edad3 + 1;
                }
            }
        }
    }

    if(edad1 >= edad2 && edad1 >= edad3)
    {
        maximo = edad1;
    }
    else
    {
        if(edad2 >= edad1 && edad2 >= edad3)
        {
            maximo = edad2;
        }
        else
        {
            maximo = edad3;
        }
    }

    for(i=maximo ; i > 0 ; i--)
    {
        if(i <= edad1)
        {
            printf("*");
        }
        if(i <= edad2)
        {
            printf("\t*");
            flag = 1;
        }
        if(i <= edad3)
        {
            if(flag == 0)
            {
                printf("\t\t*");
            }
            if(flag == 1)
            {
                printf("\t*");
            }
        }
        printf("\n");
    }
    printf("<18\t19-35\t>35\n\n");
}
