//
// Created by alfonso on 15/02/20.
//

/**
 * Código que busca y genera rutas
 */

#include "rutasc.h"


PLoc ploc_base;


extern void cargaArchivoLocs(char * archlocs, PLoc ploc);




/**
 *
 * @param cargs
 * @param args
 * @return
 */
int main(int cargs, char **args){


    int cantiloc=0;
    int cantieve=0;


    if (cargs < 8) {
        fprintf(stderr, "No estan completos los parámetros:\n");
        fprintf(stderr, "\nrutasc CantiLocs CantiEventos ArchivoLoc ArchivoREve ArchivoSal\n\n");
        fprintf(stderr, "\t CantiLocs:\tCantidad de localidades\n");

        return 1;
    }

    cantiloc = atoi(*(args + 1));
    cantieve=atoi(*(args + 2));
    char *archlocs = *(args + 3);


    ploc_base =(PLoc) malloc(sizeof(struct LOCALIDAD) * cantiloc);

    cargaArchivoLocs(archlocs,ploc_base);


    free(ploc_base);
    return 0;
}
