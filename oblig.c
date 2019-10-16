#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINJE_LENGE = 256;

struct ruter {
        unsigned char ruter_ID;
        unsigned char flagg;
        unsigned char lengde_produsent;
        char produsent [253];
}

int get_antall_rutere(char* ruter_filnavn){
 int ruter_count = 0;
 FILE* ruter_fil = fopen(ruter_filnavn, "r");
 if(ruter_fil == NULL){
  perror("Kunne ikke apne fil");
  exit(EXIT_FAILURE);
 }
 size_t retur = fread(&ruter_count, sizeof(int), 1, ruter_fil);
 if(retur != 1){
  perror("fread klarte ikke lese tallet i starten av filen");
  exit(EXIT_FAILURE);
 }
        *peker_til_ruter_array = malloc(sizeof(struct ruter*) * ruter_count);
        struct ruter** ruter_array = *peker_til_ruter_array;

        int i;
        for(i=0; i<person_count; i++){
                ruter_array[i] = string_to_ruter_file(ruter_fil);
        }

        fclose(ruter_fil);
        return ruter_count;
}

int main(int argc, char *argv[]) {
  //leser inn filnavn
  char ruter_fil [21] = {0};
  char kommando_fil [25] = {0};
  if(argc < 2){ printf("Trenger argumenter"); return -1; }
  int i;
  for(i=0; i<20; i++){ ruter_fil[i] = argv[1][i]; }
  for(i=0; i<24; i++){ kommando_fil[i] = argv[2][i]; }

  int antall_ruter;
  antall_rutere = get_antall_rutere;
}
