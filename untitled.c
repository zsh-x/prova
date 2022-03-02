#include <stdio.h>
#include <string.h>

	int main() {
<<<<<<< HEAD
		
		int selezioneDifficolta, lunghezzaParolaSegreta, selezioneLetteraParola;
		char parolaSegreta[15], tentativoLetteraDaIndovinare, tentativoParolaDaIndovinare[5];

		printf("Inserire la parola segreta: ");
		scanf("%c", parolaSegreta);

		fflush(stdin);

		lunghezzaParolaSegreta = strlen(parolaSegreta);

		// if (/* condition */) {
		// 	/* code */
		// }

		printf("Selezionare la difficolta' del gioco: \n[1]Facile\n[2]Medio\n[3]Difficile\n");
		scanf("%d", &selezioneDifficolta);

		if (selezioneDifficolta == 1) {

			for (int i = -1; i < lunghezzaParolaSegreta; ++i) {
				printf("_ ");

				printf("Premere [1]Se si vuole inserire una parola\n[2]Se si vuole inserire una lettera\n");
				scanf("%d", &selezioneLetteraParola);

				if (selezioneLetteraParola == 1) {
					scanf("%c", &tentativoParolaDaIndovinare);

					//funzione
				}

				if (selezioneLetteraParola == 2) {
					scanf("%c", tentativoLetteraDaIndovinare);
				}
			}
			
		}

		if (selezioneDifficolta == 2) {
			
		}

		if (selezioneDifficolta == 3) {
			
		}

		if (selezioneDifficolta != 1 && selezioneDifficolta != 2 && selezioneDifficolta != 3) {
			printf("Selezionare un livello di difficolta' valida\n");
			scanf("%d", &selezioneDifficolta);
		}


=======
		a;
>>>>>>> b6d6a08439dd1f60f237c284a27566db58a2b3b5
		return 0;
	}