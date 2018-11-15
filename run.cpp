#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int var = 1;
	int cooseing;
	system("title Wuerfel");
	while (var < 12) {
		cout << "Die Software hat gewuerfelt, und das ergebnis ist:" << endl;
		system("python noopen.py");
		cout << endl << endl;
		cout << "Nochmal Wuerfeln? 1 fuer Ja, und 0 fuer nein." << endl;
		cin >> cooseing;
		switch (cooseing) {
		case 0:
			cerr << "Software beendet" << endl;
			while (var < 13) {
				++var;
			}
			break;
		case 1:
			cout << endl << endl << "Wuerfelt" << endl;
		}

	}
}
