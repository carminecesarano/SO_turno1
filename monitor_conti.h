#ifndef _HEADER_
#define _HEADER_

#include <pthread.h>

#define NUM_CONTI 3

typedef struct {

    int conti[NUM_CONTI];

    /* TBD: Aggiungere ulteriori variabili per la sincronizzazione */

} MonitorContiCorrenti;

void init_monitor(MonitorContiCorrenti *m, int saldo_iniziale);
void prelievo(MonitorContiCorrenti *m, int conto, int importo);
void versamento(MonitorContiCorrenti *m, int conto, int importo);
void lettura(MonitorContiCorrenti *m, int conto);
void trasferimento(MonitorContiCorrenti *m, int conto1, int conto2, int importo);
void destroy_monitor(MonitorContiCorrenti *m);

#endif