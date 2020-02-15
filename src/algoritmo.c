//
// Created by alfonso on 15/02/20.
//

/**
 * Este código genera los puntos de una ruta
 */

#include "rutasc.h"

double calculaDistancia(PLoc p1, PLoc p2);
void buscaRuta(PRuta pruta, PLoc ploc);


/**
 *
 * @param p1
 * @param p2
 * @return
 */
double calculaDistancia(PLoc p1, PLoc p2){
    double d=(p1->x*p2->x);
    d+=(p1->y*p2->y);
    d+=(p1->z*p2->z);

    d=(d<-1.0)?-1.0:d;
    d=(d>1.0)?1.0:d;

    return acos(d);
}


/**
 *
 * @param pruta
 * @param ploc
 */
void buscaRuta(PRuta pruta, PLoc ploc){

}


