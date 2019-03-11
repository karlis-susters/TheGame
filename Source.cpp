#include <iostream>
#include <string>
using namespace std;


void pause() {
	system("Pause");
}

void cls() {
	system("cls");
}
int main() {
	cout << "Tu redzi 2 durvis." << endl;
	cout << "Uz tam uzrakstiti cipari 1 un 2" << endl;
	cout << "Pa kuram tu ej?" << endl;
	string ans;
	cin >> ans;
	if (ans == "2") {
		cout << "Tu atver durvis un ieraugi Solveigu, kas tevi izmet no IZV!" << endl;
		cout << "RIP" << endl;
		pause();
		return 0;
	}
	if (ans != "1") {
		cout << "Tas nav durvis" << endl;
		pause();
		return 0;
	}
	cls();
	cout << "Tu atver durvis un ieraugi sev prieksa vel 3 durvis" << endl;
	cout << "Soreiz cipari 1, 2 UN 3" << endl;
	cout << "Pa kuram tu ej?" << endl;
	cin >> ans;
	if (ans == "1") {
		cout << "Tu atver durvis un ieraugi Veidi, kas tev uzdirs ka tu kave stundu!" << endl;
		cout << "RIP" << endl;
		pause();
		return 0;
	}
	else if (ans == "2") {
		cout << "Tu atver durvis un ieraugi dusmigu Lipsbergu, kas tev uzdirs, ka tu pateici \"Uz veselibu\" stunda!" << endl;
		cout << "RIP" << endl;
		pause();
		return 0;
	}
	else if (ans != "3") {
		cout << "Tas nav durvis" << endl;
		pause();
		return 0;
	}
	cls();
	cout << "Tu atver durvis un ieraugi sev prieksa vel 10000 durvis" << endl;
	cout << "Soreiz cipari 1, 2, 3, 4... you get the point" << endl;
	cout << "Pa kuram tu ej?" << endl;
	cin >> ans;
	while (ans != "6263") {
		if (ans == "1337") {
			cout << "Soreiz ari sis durvis neveras vala" << endl;
		}
		else {
			cout << "Durvis neveras vala" << endl;
		}
		cin >> ans;
	}
	cout << "\x51\x43ZII-\x51\x42GTN-PV\x4AMH" << endl;
	cout << "https://pastebin.com/\x67\x6B\x76mbJT2" << endl;
	pause();

	return 0;
}