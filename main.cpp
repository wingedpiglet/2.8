#include<iostream>
#include<Windows.h>
using namespace std;
void function(int color, int beep);

int main() {
	int num = 1;
	int c = 0;
	do {
		int num = rand() % 2000;
		int c = rand() % 4 + 1;
		//cout << "Enter a number." << endl;
		//cin >> num;
		//cout << "Now enter a letter for color, 'g','r','b', or 'y' or enter q to quit." << endl;
		//cin >> c;
		function(c, num);
	} while(num != 0);
}
void function(int color, int beep) {
	if (color == 1)
		system("COLOR 2F");
	else if (color == 2)
		system("COLOR 4F");
	else if (color == 3)
		system("COLOR 1F");
	else if (color == 4)
		system("COLOR 60");
	
	Beep(beep, beep);
}
