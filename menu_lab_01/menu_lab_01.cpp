#include <iostream>
	using namespace std;
#include "controlli.h"


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

	} while(flag==false);

	return 0;
}


