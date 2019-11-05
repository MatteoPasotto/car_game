#include <iostream>
using namespace std;

bool NumCompreso(int x, int min, int max)
{
	int flag = true;
	if (x < min || x > max)
	{
		cout << "Errore :: inserisci un numero compreso tra " << min << " e " << max << endl;
		cout << "premi invio per continuare" << endl;
		cin.get();
		cin.ignore();
		cin.clear();
		flag = false;
	}
	return flag;
}
