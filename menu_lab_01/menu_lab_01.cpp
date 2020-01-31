#include <iostream>
using namespace std;
#include "controlli.h"

/*
void crea_mappa() {
	char mappa[30][30];
	int i, j;
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++) {
			mappa[i][j] = ' ';

		}

	}
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++) {
			if (j == 0 || j == 29) {
				mappa[i][j] = 'X';
			}
														// era un'esempio della mappa che avevo in mente lascia pure perdere
		}

	}

	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++) {
			
				cout << mappa[i][j];
			

		}
		cout << endl << ;
	}
}
*/

int main()
{
	int x;
	bool flag;
	do {
		system("cls");
		cout << " Fast2Furious " << endl;
		cout << "1-Gioca" << endl;
		cout << "2-Istruzioni" << endl;
		cout << "3-Best Score" << endl;
		cout << "4-titoli di coda" << endl;
		cout << "5-esci" << endl;
		cin >> x;

		flag = NumCompreso(x, 1, 5); //controlla che il valore di x sia compreso tra min e max restitutisce true se il numero è compreso  

	} while (flag == false);
	cin.clear();
	/*
	if (x == 1) {
		crea_mappa();    // qui c'è l'avvio
	 }
	 */
	return 0;
}

