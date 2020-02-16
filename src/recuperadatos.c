//
// Created by alfonso on 15/02/20.
//

/**
 *
 */

#include "rutasc.h"


void cargaArchivoLocs(char * archlocs, PLoc ploc);
int eml2conapo(int e, int m, int l);
double deg2rad(double x);
void cesfe2carte(double lat, double lng, double *res);


/**
 *
 * @param archlocs
 * @param ploc
 */
void cargaArchivoLocs(char * archlocs, PLoc ploc){
    printf("Carga Localidades\n");

    int est;
    int mun;
    int loc;

    double lat,lng;
    double latr,lngr;

    double *res2=(double *)malloc(3*sizeof(double));

    int pob;

    FILE *fh=fopen(archlocs,"r");

    PLoc p;

    int j=0;
    int i=0;
    while(fscanf(fh,"%d %d %d %lf %lf %d",&est,&mun,&loc,&lat,&lng,&pob)!=EOF){


        latr=deg2rad(lat);
        lngr=deg2rad(lng);
        cesfe2carte(latr,lngr,res2);

        p=(ploc+i);


        p->id=eml2conapo(est,mun,loc);

        p->lat=lat;
        p->lng=lng;

        p->x=*(res2);
        p->y=*(res2+1);
        p->z=*(res2+2);

        p->pob=pob;

        p->ploc=NULL;

        i++;
    }

    printf("Localidades : %d\n",i);

    fclose(fh);

    free(res2);
}



/**
* Función que convierte las claves de Estado, Municipio y Localidad a la clave Conapo
*/
int eml2conapo(int e, int m, int l){
    return (e*1000+m)*10000+l;
}


/**
* Función que convierte los DEG a RAD
*/
double deg2rad(double x){
    return M_PI*x/180.00;
}



/**
* Función convierte coordenadas geográficas a coordenadas cartesianas espaciales
*/
void cesfe2carte(double lat, double lng, double *res){
    double r2=0;

    *(res)=sin(lng)*cos(lat);
    *(res+1)=cos(lng)*cos(lat);
    *(res+2)=sin(lat);

    r2=pow(*(res),2)+pow(*(res+1),2)+pow(*(res+2),2);
    r2=sqrt(r2);

    *(res)/=r2;
    *(res+1)/=r2;
    *(res+2)/=r2;
}


