#include <iostream>
#include <regex>
#include <vector>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC);
void diskOffTower(char from_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC);
void diskOnTower(int n, char to_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC);
void displayTower(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC);

int main()
{
	vector <int> towerA;
	vector <int> towerB;
	vector <int> towerC;
	regex rx("(\\d*)");
	string n;

	do {
		cout << "--- Tower Of Hanoi ---\n";
		cout << "What number of disks would you like to move? :  ";
		cin >> n;
	} while (!regex_match(n, rx));

	for (int i = stoi(n); i > 0; i--) { // All disks start with Tower A
		towerA.push_back(i);
	}
	displayTower(towerA, towerB, towerC);
	cout << "\n";
	towerOfHanoi(stoi(n), 'A', 'C', 'B', towerA, towerB, towerC);
	cout << "\n";
	system("pause");
	return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC) {
	if (n == 1) {
		diskOffTower(from_rod, towerA, towerB, towerC);
		diskOnTower(n, to_rod, towerA, towerB, towerC);
		
		displayTower(towerA, towerB, towerC);
		cout << "\nMove disk " << n << " from rod " << from_rod << " to rod " << to_rod << "\n";
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, towerA, towerB, towerC);
	diskOffTower(from_rod, towerA, towerB, towerC);
	diskOnTower(n, to_rod, towerA, towerB, towerC);

	displayTower(towerA, towerB, towerC);
	cout << "\nMove disk " << n << " from rod " << from_rod << " to rod " << to_rod << "\n";
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, towerA, towerB, towerC);
}

void diskOffTower(char from_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC) {
	if (from_rod == 'A') {
		towerA.pop_back();
	}
	else if (from_rod == 'B') {
		towerB.pop_back();
	}
	else if (from_rod == 'C') {
		towerC.pop_back();
	}
}

void diskOnTower(int n, char to_rod, vector<int>&towerA, vector<int>&towerB, vector<int>&towerC) {
	if (to_rod == 'A') {
		towerA.push_back(n);
	}
	else if (to_rod == 'B') {
		towerB.push_back(n);
	}
	else if (to_rod == 'C') {
		towerC.push_back(n);
	}
}

void displayTower(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC) {
	cout << "\nPress [enter] to continue." << endl;
	cin.get();
	system("cls");

	cout << "Tower A :  ";
	for (unsigned int i = 0; i < towerA.size(); i++) {
		cout << towerA.at(i) << "-";
	}
	cout << "\nTower B :  ";
	for (unsigned int i = 0; i < towerB.size(); i++) {
		cout << towerB.at(i) << "-";
	}
	cout << "\nTower C :  ";
	for (unsigned int i = 0; i < towerC.size(); i++) {
		cout << towerC.at(i) << "-";
	}
	cout << "\n";
}
