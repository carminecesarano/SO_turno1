#include <stdio.h>

#include "monitor_conti.h"

void init_monitor(MonitorContiCorrenti *m, int saldo_iniziale) {

    /* TBD: Completare il costruttore */
}

void prelievo(MonitorContiCorrenti *m, int conto, int importo) {

    /* TBD: Completare il metodo con la sincronizzazione */

    m->conti[conto] -= importo;

    printf("Prelievo di %d dal conto %d\n", importo, conto);

}


void versamento(MonitorContiCorrenti *m, int conto, int importo) {

    /* TBD: Completare il metodo con la sincronizzazione */

    m->conti[conto] += importo;

    printf("Versamento di %d sul conto %d\n", importo, conto);

}


void lettura(MonitorContiCorrenti *m, int conto) {

    /* TBD: Completare il metodo con la sincronizzazione */

    printf("Saldo conto %d: %d\n", conto, m->conti[conto]);

}


void trasferimento(MonitorContiCorrenti *m, int conto1, int conto2, int importo) {

    /* TBD: Completare il metodo con la sincronizzazione */

    m->conti[conto1] -= importo;
    m->conti[conto2] += importo;

    printf("Trasferimento di %d dal conto %d al conto %d\n", importo, conto1, conto2);

}


void destroy_monitor(MonitorContiCorrenti *m) {

    /* TBD: Completare il distruttore */
}


