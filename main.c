#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "monitor_conti.h"

#define NUM_THREADS 3

void * thread_1(/* TBD: completare passaggio dei parametri */);
void * thread_2(/* TBD: completare passaggio dei parametri */);
void * thread_3(/* TBD: completare passaggio dei parametri */);

int main() {

    /* TBD: Completare il programma principale, creando
            un oggetto monitor di tipo "MonitorContiCorrenti",
            e avviare 3 threads che eseguano le funzioni
            thread_1, thread_2 e thread_3.
    */

    return 0;
}

void * thread_1(/* TBD: completare passaggio dei parametri */) {

    lettura(/* TBD: completare passaggio dei parametri */, 0);
    prelievo(/* TBD: completare passaggio dei parametri */, 0, 50);
    sleep(2);
    prelievo(/* TBD: completare passaggio dei parametri */, 0, 70);
    lettura(/* TBD: completare passaggio dei parametri */, 0);

    return NULL;
}

void * thread_2(/* TBD: completare passaggio dei parametri */) {

    sleep(3);
    versamento(/* TBD: completare passaggio dei parametri */, 1, 50);
    trasferimento(/* TBD: completare passaggio dei parametri */, 1, 0, 75);
    trasferimento(/* TBD: completare passaggio dei parametri */, 1, 2, 75);

    return NULL;
}

void * thread_3(/* TBD: completare passaggio dei parametri */) {

    sleep(1);
    lettura(/* TBD: completare passaggio dei parametri */, 2);
    prelievo(/* TBD: completare passaggio dei parametri */, 2, 40);
    sleep(1);
    prelievo(/* TBD: completare passaggio dei parametri */, 2, 80);
    lettura(/* TBD: completare passaggio dei parametri */, 2);

    return NULL;
}
