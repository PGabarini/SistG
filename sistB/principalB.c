#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pedirOpcion.h"
#include <windows.h>


void menuGeneral();
void mostrarOpcionesDeIngreso_General();

void menuAgregarMiembro();
void mostrarOpcionesDe_Ingreso_Miembro();
void crearNuevoMiembro();
void ingresarYConfirmar(char [],int );


void menuVerMiembros();
void mostrarOpcionesDe_Ver_Miembros();

typedef struct
    {
        char idMiembro;
        char Nombre[15];
        char apellido[15];
        char tipoDeMembrecia[15];
        char fechaDePago[11];
        char fechaDeVencimiento[11];
    }unMiembro;

int main(void) 
{ 
    
    

    menuGeneral();
    return 0;
}

//General
void menuGeneral()
{   
    int opcion;
    
    do{
        system("cls");
        mostrarOpcionesDeIngreso_General();
        
        opcion=pedirOpcion();

        switch (opcion)
        {
        case 0: puts(" Usted ha seleccionado SALIR ");
                Sleep(2000);
                exit(0);
            break;
        case 1: puts(" Usted ha seleccionado ingresar un Nuevo miembro ");
                Sleep(2000);
                menuAgregarMiembro();
            break;
        
        case 2: puts(" Usted ha seleccionado ver Miembros");
                Sleep(2000);
                menuVerMiembros();
            break;

        default: puts(" Ingrese una opcion valida. ");
                Sleep(2000);
            break;
        }

    }while(opcion != 0);
    
}
void mostrarOpcionesDeIngreso_General()
{   
    printf("\n%s\n","-------");
    getchar();
    system("cls");
    printf("\n%s"," Menu de acciones del GYM loco: \n (1) Ingresar NUEVO Miembro \n (2) VER Miembros \n\n");
}

//Agregar Miembros
void menuAgregarMiembro()
{
    int opcion;

    do{
        system("cls");
        mostrarOpcionesDe_Ingreso_Miembro();
        
        opcion=pedirOpcion();

        switch (opcion)
        {
        case 0: puts(" Usted ha seleccionado VOLVER ");
            Sleep(2000);
            menuGeneral();
            break;
        
        case 1: puts(" Usted a seleccionado AGREGAR un NUEVO MIEMBRO ");
                Sleep(2000);
                crearNuevoMiembro();
            break;

        default: puts(" Ingrese una opcion valida. ");
                Sleep(2000);
            break;
        }

    }while(opcion != 0);
}

void mostrarOpcionesDe_Ingreso_Miembro()
{
    printf("\n%s\n","AGREGAR Miembro");
    getchar();
    system("cls");
    printf("\n%s"," Menu de acciones del GYM Agregar Miembro: \n (0) Volver \n (1) Agregar NUEVO miembro \n\n");
}

void crearNuevoMiembro()
{   

    unMiembro *nuevoMiembro = (unMiembro *)malloc(sizeof(unMiembro));
    int ultimoID = 0;

    if(nuevoMiembro == NULL)
    {puts("ERROR al asignar memoria\n");
        exit(1);}
    

    nuevoMiembro->idMiembro = ultimoID+1;
    puts("Ingrese nombre del usuario");
    ingresarYConfirmar(nuevoMiembro->Nombre,sizeof(nuevoMiembro->Nombre));
    printf("%s\n","El nombre ingresado fue");

        printf("%s\n",nuevoMiembro->Nombre);
    

    

    free(nuevoMiembro);
    puts("Aaaaa");
    exit(0);
}

void ingresarYConfirmar(char elementoAGuardar[],int tamanoEsperado)
{
    scanf("%14s", elementoAGuardar);
}

//Ver Miembros
void menuVerMiembros()
{
    int opcion;

    do{
        system("cls");
        mostrarOpcionesDe_Ver_Miembros();
        
        opcion=pedirOpcion();

        switch (opcion)
        {
        case 0: puts(" Usted ha seleccionado VOLVER ");
            Sleep(2000);
            menuGeneral();
            break;
        
        case 1: puts(" a ");
            break;

        default: puts(" Ingrese una opcion valida. ");
        Sleep(2000);
            break;
        }

    }while(opcion != 0);
}

void mostrarOpcionesDe_Ver_Miembros()
{   
    printf("\n%s\n","VER Miembros");
    getchar();
    system("cls");
    printf("\n%s"," Menu de acciones VER Miembros: \n (1) o1 \n (2) o2 \n\n");
}