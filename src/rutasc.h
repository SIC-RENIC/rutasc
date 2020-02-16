//
// Created by alfonso on 15/02/20.
//



#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#ifndef RUTASC_RUTASC_H
#define RUTASC_RUTASC_H


/**
 * Localidades definidas
 */

struct LOCALIDAD {

    int id;

    double lat;
    double lng;

    double x;
    double y;
    double z;

    int pob;

    struct LOCALIDAD* ploc;

};

typedef struct LOCALIDAD* PLoc;

/**
 * Rutas
 */

struct RUTA{

    int ruta_id;

    PLoc p;

    int costot;
};

typedef struct RUTA* PRuta;


#endif //RUTASC_RUTASC_H
