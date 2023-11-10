#include <unistd.h>
#include <stdio.h>

void setSemV() { //funzione per il semaforo delle auto
    printf("Il semaforo dei veicoli è verde\n");
    sleep(2);
    printf("Il semaforo dei veicoli è giallo\n");
    sleep(2);
    printf("Il semaforo dei veicoli è rosso\n");
    sleep(2);
}

void setSemP() { //funzione per il semaforo dei pedoni
    printf("Il semaforo dei pedoni è rosso\n");
    sleep(2);
    printf("Il semaforo dei pedoni è verde\n");
    sleep(2);
    printf("Il semaforo dei pedoni è verde lampeggiante\n");
    sleep(2);
    printf("Il semaforo dei pedoni è rosso\n");
    sleep(2);
} 

int main(void)
{
  for (;;) {
    if (getchar() == 'x') {
      return 0;
    }

    setSemV();
    setSemP();
  }

}
