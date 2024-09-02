#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pedirOpcion.h"
#include <windows.h>

int pedirOpcion()
{
    char opcion;
    char linea[100];

    printf("%s\n\n","Ingrese la opcion que desea, use 0 para salir ");

     if (fgets(linea, sizeof(linea), stdin) != NULL)
      {

        // Devuelve la posicion del primer caracter \n , entonces lo remplaza por '\0'
        //osea eliminar el salto de línea que fgets podría haber leído
        linea[strcspn(linea, "\n")] = '\0';
       
        if (strlen(linea) != 1) {
            puts(" Error, debe ingresar solo un carácter.");
             Sleep(2000);
            return 99999; 
        }

        opcion = linea[0];
     }

    if(isdigit(opcion))
    {
        int a = opcion - '0';
         Sleep(2000);
        return a;
    }

    puts(" Error, eso no es numero");
     Sleep(2000);
    return 99999;
    
}
