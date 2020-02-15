//
// Created by alfonso on 15/02/20.
//



#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#ifndef RUTASC_RUTASC_H
#define RUTASC_RUTASC_H



struct LOCALIDAD {

    int id;

    double lat;
    double lon;

    double x;
    double y;
    double z;

    int pob;


};


typedef struct LOCALIDAD* PLoc;

#endif //RUTASC_RUTASC_H
