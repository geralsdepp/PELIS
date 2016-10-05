#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"
#include <string.h>
/** \brief Inicializa el estado en un array de productos
 * \param array peliculas es el array a ser buscado
 * \param arrayLargo es la longitud de mi array
 * \param valor es el valor que se asignara a estado
 * \return -
 *
 */
void estado(datosPelicula arrayPeliculas[], int arrayLargo[],int valor)
{
    int i;

    for(i=0;i<arrayLargo;i++)
    {
        arrayPeliculas[i].idEstado = valor;
    }
}



/** \brief Busca el primer lugar no utilizado en el array.
 * \param arrayPeliculas es el array donde buscar.
 * \param arrayLargo indica la longitud del array.
 * \return Si no hay lugares libres (-1) y si hay lugar libre (1).
 *
 */

 int buscarLugarVacio(datosPelicula arrayPeliculas[],int arrayLargo[])
 {
     int i;

     for(i=0;i<arrayLargo;i++) //Recorre el largo hasta
     {
         if(arrayPeliculas[i].idEstado==0) // encontrar alguna pelicula que el estado sea 0.
         {
             return i; // en ese caso devuelve la posicion en la que se encuentra esa pelicula dentro del array
         }
     }

     return -1;// y si no encontrase ninguno devuelve (-1).
 }




 /** \brief Busca
  *
  * \param
  * \param
  * \return
  *
  */
  int buscarPeliculaCodigo(datosPelicula arrayPeliculas[], int arrayLargo[],int id)
  {
      int i;
      for(i=0; i<arrayLargo; i++)
      {
          if(arrayPeliculas[i].idPelicula == id && arrayPeliculas[i].idEstado == 1)
          {
              return i;
          }
      }
      return -1;
  }


/** \brief Inicializa el estado en un array de productos
 * \param array peliculas es el array a ser buscado
 * \param arrayLargo es la longitud de mi array
 * \param valor es el valor que se asignara a estado
 * \return -
 *
 */

void estado(datosDirector arrayDirector[], int arrayLargo[],int valor)
{
    int i;

    for(i=0;i<arrayLargo;i++)
    {
        arrayDirector()[i].idEstado = valor;
    }
}


/** \brief Busca el primer lugar no utilizado en el array.
 * \param arrayPeliculas es el array donde buscar.
 * \param arrayLargo indica la longitud del array.
 * \return Si no hay lugares libres (-1) y si hay lugar libre (1).
 *
 */

 int buscarLugarVacio(datosDirector arrayDirector[],int arrayLargo[])
 {
     int i;

     for(i=0;i<arrayLargo;i++) //Recorre el largo hasta
     {
         if(arrayDirector[i].idEstado==0) // encontrar alguna pelicula que el estado sea 0.
         {
             return i; // en ese caso devuelve la posicion en la que se encuentra esa pelicula dentro del array
         }
     }

     return -1;// y si no encontrase ninguno devuelve (-1).
 }

 /** \brief Busca
  *
  * \param
  * \param
  * \return
  *
  */
  int buscarDirectorCodigo(datosDirector arrayDirector[], int arrayLargo[],int id)
  {
      int i;
      for(i=0; i<arrayLargo; i++)
      {
          if(arrayDirector[i].idDirector == id && arrayDirector[i].idEstado == 1)
          {
              return i;
          }
      }
      return -1;
  }


/************************************************************************/
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}
/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}


/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           return 0;
       if(str[i] == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}
