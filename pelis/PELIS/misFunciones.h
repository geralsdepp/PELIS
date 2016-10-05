typedef struct
{
    char titulo[255];
    int idDirector;
    int idNacionalidad;
    int anio;
    char idEstado;
}datosPelicula;

typedef struct
{
    char idEstado;
    char descripcion[50];
}datosEstado;

typedef struct
{
    int idDirector;
    char nombre[50];
    char idEstado;
    int idNacionalidad;
}datosDirector;

typedef struct
{
    int idNacionalidad;
    char descripcion[50];
    char idEstado;
}datosNacionalidad;


void menuOpcion(int);
//void cargarPersonas(Persona arrayPersonas[],int cantElement,int valor);
//int buscarLugarVacio(Persona arrayPersonas[],int cantElement,int valor);

/*************************************************************************/
int inicializarRegistrosPeli(datosPelicula arrayPeliculas[],int cantElement,int valor );
//int getInt(char mensaje[]);
//float getFloat(char mensaje[]);
//char getChar(char mensaje[]);
//
//char getNumeroAleatorio(int desde , int hasta, int iniciar);
//
//int esNumerico(char str[]) ;
//int esTelefono(char str[]);
//int esAlfaNumerico(char str[]);
//int esSoloLetras(char str[]);
//
//void cargar(char mensaje[],char input[]);
//int getStringLetras(char mensaje[],char input[]);
//int getStringNumeros(char mensaje[],char input[]);


