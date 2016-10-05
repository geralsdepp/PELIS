#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "misFunciones.h"
#define PELICULAS 1000
#define DIRECTORES 500
#define NACIONALIDADES 500
#define ESTADOS 3

int main()
{
    //ARRAY DE PELICULAS
    datosPelicula arrayPeliculas[PELICULAS];
    datosDirector arrayDirector[DIRECTORES];
    datosNacionalidad arrayNacionalidad[NACIONALIDADES];
    datosEstado arrayEstado[ESTADOS];
    //////////////////////////////////////////////////////////////////////////////////////////////////
    datosPelicula auxPelicula;
    //dar de alta a peliculas
    char auxTitulo[50];
    int auxAnio;
    int idPeliculasAux;
    char auxNacionalidad[50];
    char auxDirector[50];
    int auxPELICULAS;

    char idPeliculasAuxStr;
    char auxPELICULASStr;
    char auxAnioStr;
    char auxNacionalidadStr;
    char auxDirectorStr;
    //dar de alta directores
    char idDirectorAuxSrt;
    char idDirectorAux;
    char auxDIRECTORESStr;
    char nombreDir;


    int indiceLugarLibre;
    int indiceEncontrado;
    int opcion = 0;
    int i,j;

    estado(arrayPeliculas[PELICULAS], PELICULAS, 0);


    while(opcion>=1 || opcion<=7)
    {
        printf("Ingrese una opcion: ");
        opcion = getInt("1.Alta de pelicula.\n2.Modificar datos de una pelicula\n3.Baja de pelicula\n4.Alta de DIRECTOR\n.5.Eliminar director\n6.Informar\n7.Listar\n");

        switch(opcion)
        {
        case 1:
               indiceLugarLibre = buscarLugarVacio(arrayPeliculas,PELICULAS);

               if(indiceLugarLibre == -1)
               {
                   printf("\n\nNO HAY MAS LUGARES LIBRES!!\n");
               }
               printf("\nALTA\n");

               if(!getStringNumeros("Ingrese el codigo: ",idPeliculasAuxStr))
               {
                   printf("El codigo debe ser numerico\n");
                   break;
               }
               idPeliculasAux = atoi(idPeliculasAuxStr);

               if(buscarPeliculaCodigo(arrayPeliculas, PELICULAS, idPeliculasAux) != -1)
               {
                   printf("\n\nEL CODIGO YA EXISTE!!\n");
                   break;
               }
               if(!getStringLetras("Ingrese titulo: ",auxTitulo))
               {
                   printf("El titulo debe estar compuesto por letras.\n");
                   break;
               }
               auxPELICULAS = atoi(auxPELICULASStr);

               if(!getStringNumerosFlotantes("Ingrese el anio: ",auxAnioStr))
               {
                   printf("El año debe ser numerico\n");
                   break;
               }
               auxAnio = atof(auxAnioStr);

               arrayPeliculas[indiceLugarLibre].idPelicula = idPeliculasAux;
               strcpy(arrayPeliculas[indiceLugarLibre].titulo,auxTitulo);
               arrayPeliculas[indiceLugarLibre].anio = auxAnio;
               arrayPeliculas[indiceLugarLibre].idDirector = auxDirector;
               arrayPeliculas[indiceLugarLibre].idNacionalidad = auxNacionalidad;
               arrayPeliculas[indiceLugarLibre].idEstado = 1;
            break;
        case 2:
            if(!getStringNumeros("Ingrese el ID a modificar: ",idPeliculasAuxStr));
            {
                printf("El ID de la pelicula debe ser numerico!!\n");
                break;
            }
            idPeliculasAux = atoi(idPeliculasAuxStr);
            indiceEncontrado = buscarPeliculaCodigo(arrayPeliculas, PELICULAS,idPeliculasAux);
            if(indiceEncontrado == -1)
            {
                printf("\n\n No se encuentra ese codigo\n");
                break;
            }
            if(!getStringLetras("Ingrese el titulo de la pelicula: ",auxPelicula));
            {
                printf("El titulo debe estar compuesto por letras!!\n");
                break;
            }

            if(!getStringNumeros("Ingrese el anio: ",auxAnioStr));
            {
                printf("Ingrese el anio de forma numerica!!\n");
                break;
            }
            auxAnio = atoi(auxAnioStr);

            if(!getStringLetras("Ingrese Nacionalidad: ",auxNacionalidadStr));
            {
                printf("La nacionalidad debe estar compuesta por letras!!\n");
                break;
            }
            if(!getStringLetras("Ingrese director: ",auxDirectorStr));
            {
                printf("El director ingresado no existe: ");
            }
            strcpy(arrayPeliculas[indiceEncontrado].titulo,auxTitulo);
            arrayPeliculas[indiceEncontrado].anio = auxAnio;
            strcpy(arrayPeliculas[indiceEncontrado].idNacionalidad,auxNacionalidad);
            strcpy(arrayPeliculas[indiceEncontrado].idDirector,auxDirector);
            arrayPeliculas[indiceEncontrado].idEstado = 1;
            break;

        case 3:
            if(!getStringNumeros("Ingrese ID de la pelicula: ",idPeliculasAuxStr))
            {
                printf("El ID ingresado debe ser numerico!!\n");
                break;
            }
            idPeliculasAux = atoi(idPeliculasAuxStr);
            indiceEncontrado = buscarLugarVacio(arrayPeliculas,PELICULAS,idPeliculasAux);
            if(indiceEncontrado == -1)
            {
                printf("\n\nNo se encuentra el codigo\n");
                break;
            }
            arrayPeliculas[indiceEncontrado].idEstado = 0;

            break;
        case 4:
            indiceLugarLibre = buscarLugarVacio(arrayDirector,DIRECTORES);

               if(indiceLugarLibre == -1)
               {
                   printf("\n\nNO HAY MAS LUGARES LIBRES!!\n");
               }
               printf("\nALTA\n");

               if(!getStringNumeros("Ingrese el codigo: ",idDirectorAuxSrt));
               {
                   printf("El codigo debe ser numerico\n");
                   break;
               }
               idDirectorAux = atoi(idDirectorAuxSrt);

               if(buscarPeliculaCodigo(arrayDirector, DIRECTORES, idDirectorAux) != -1)
               {
                   printf("\n\nEL CODIGO YA EXISTE!!\n");
                   break;
               }
               if(!getStringLetras("Ingrese titulo: ",aux))
               {
                   printf("El titulo debe estar compuesto por letras.\n");
                   break;
               }
               auxPELICULAS = atoi(auxPELICULASStr);

               if(!getStringNumerosFlotantes("Ingrese el anio: ",auxAnioStr))
               {
                   printf("El año debe ser numerico\n");
                   break;
               }
               auxAnio = atof(auxAnioStr);

               arrayPeliculas[indiceLugarLibre].idPelicula = idPeliculasAux;
               strcpy(arrayPeliculas[indiceLugarLibre].titulo,auxTitulo);
               arrayPeliculas[indiceLugarLibre].anio = auxAnio;
               arrayPeliculas[indiceLugarLibre].idDirector = auxDirector;
               arrayPeliculas[indiceLugarLibre].idNacionalidad = auxNacionalidad;
               arrayPeliculas[indiceLugarLibre].idEstado = 1;
            break;
        case 5:
            break;
    }

    }





    return 0;
}
