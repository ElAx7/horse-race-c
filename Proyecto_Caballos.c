#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NumberHorses 10// Numero de Caballos
#define SpaceHorses 15 // Que tan largo es la carrera? 15 Espacios
// Borra esto si estas utilizando Linux, Mac, o consola de Unix
 
// Esta funcion es para proyectar algo como esto  1:Caballo-----|
void showhorse(int HorseNumber, int HorsesPosition) {
    int X;
    printf("\t\t%d:", HorseNumber);
    for(X = 0 ; X <= SpaceHorses ; X++)
        if(HorsesPosition == X)
            printf("Caballo");
        else {
            printf("-");
        }
    printf("|\n");
    // NOTA: Esta funcion se puede utilizar en otro programa
 
}
 
int main() {
    int X,Ha,Hb, Hc, Hq, Hw, He, Hr, Ht, Hy, Hu, y;// Variables
    // Aqui hacemos todos los caballos que comienzen en  0.
    Ha = 0;
    Hb = 0;
    Hc = 0;
    Hq = 0;
    Hw = 0;
    He = 0;
    Hr = 0;
    Ht = 0;
    Hy = 0;
    Hu = 0;
 
    printf("--------------------------\n");
    printf("**** Carrera de Caballo ****\n");
    printf("--------------------------\n");
    printf("--- Escoje un Caballo ---\n\n");
    printf("Nombre de los caballos:\n");
    printf("\n");
    printf("Caballo 1 es El caballo de Troya\n");
    printf("Caballo 2 es Bucefalo\n");
    printf("Caballo 3 es El gran Pegaso\n");
    printf("Caballo 4 es El caballo de Anibal\n");
    printf("Caballo 5 es Negro\n");
    printf("Caballo 6 es Aquiles\n");
    printf("Caballo 7 es Janto\n");
    printf("Caballo 8 es Rocinante\n");
    printf("Caballo 9 es Marengo\n");
    printf("Caballo 10 es Tornado\n");
    printf("\n");
    printf("\n");
    printf("Entra el numero de tu caballo para comenzar:  ");
    scanf("%d", &y );
    printf("\n");
    printf("\n");
 
   if (y >= 1 && y <= 10){
    printf("Comienzar!\n");
    /*Srand se utiliza para hacer un numero alazar, pero el numero siempre va hacer el mismo.
    Hasi que utilizamos el tiempo para que cada vez que genere un numero sea diferente */
    srand( (unsigned)time(NULL));
 
    showhorse(1,Ha);
    showhorse(2,Hb);
    showhorse(3,Hc);
    showhorse(4,Hq);
    showhorse(5,Hw);
    showhorse(6,He);
    showhorse(7,Hr);
    showhorse(8,Ht);
    showhorse(9,Hy);
    showhorse(10,Hu);
 
    while(Ha < SpaceHorses && Hb < SpaceHorses && Hc < SpaceHorses && Hq < SpaceHorses && Hw < SpaceHorses && He < SpaceHorses && Hr < SpaceHorses && Ht < SpaceHorses && Hy < SpaceHorses && Hu < SpaceHorses) {
        if((rand () % 100)>50)
            ++Ha;
        if((rand () % 100)>50)
            ++Hb;
        if((rand () % 100)>50)
            ++Hc;
        if((rand () % 100)>50)
            ++Hq;
        if((rand () % 100)>50)
            ++Hw;
        if((rand () % 100)>50)
            ++He;
        if((rand () % 100)>50)
            ++Hr;
        if((rand () % 100)>50)
            ++Ht;
        if((rand () % 100)>50)
            ++Hy;
        if((rand () % 100)>50)
            ++Hu;
 
    printf("\n");
    printf("\t\t=======================\n");
    showhorse(1,Ha);
    showhorse(2,Hb);
    showhorse(3,Hc);
    showhorse(4,Hq);
    showhorse(5,Hw);
    showhorse(6,He);
    showhorse(7,Hr);
    showhorse(8,Ht);
    showhorse(9,Hy);
    showhorse(10,Hu);
    printf("\t\t=======================");
    printf("\n");
 
   // Cambia esto ha sleep(1); si estas utilizando Linux, Mac, o consola de Unix
 
    }
    if(Ha == 15 && Hb == 15 || Ha == 15 && Hc == 15 || Hc == 15 && Hb == 15 ) {
        printf("Tie\n");
    }
    else if (Ha == 15){
        printf("Felicidades Caballo 1  -  El caballo de Troya\n");
    }
    else if (Hb == 15){
        printf("Felicidades Caballo 2  - Bucefalo\n");
    }
    else if (Hc == 15){
        printf("Felicidades Caballo 3  - El gran Pegaso\n");
    }
        else if (Hq == 15){
        printf("Felicidades Caballo 4  - El caballo de Anibal\n");
    }
    else if (Hw == 15){
        printf("Felicidades Caballo 5  - Negro\n");
    }
    else if (He == 15){
        printf("Felicidades Caballo 6  - Aquiles\n");
    }
        else if (Hr == 15){
        printf("Felicidades Caballo 7  - Janto\n");
    }
    else if (Ht == 15){
        printf("Felicidades Caballo 8  - Rocinante\n");
    }
    else if (Hy == 15){
        printf("Felicidades Caballo 9  - Marengo\n");
    }
    else if (Hu == 15){
        printf("Felicidades Caballo 10  - Tornado\n");
    }
    printf("\n Espero que todos hallan disfrutado, nos vemos en la proxima.\n");
    printf("==============================================================\n");
    printf("\n");
    printf("\n");
 
}
else {
     printf("Este caballo no esta en la carrera.\n\n Por Favor Trate de nuevo entre el 1 al 10.\n\n");
     }
    system("PAUSE"  
    return 0;

    }
 