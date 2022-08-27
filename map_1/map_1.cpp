#include "bits/stdc++.h"

using namespace std;

int X, Y, Xnow, Ynow, Xstart, Ystart, Xend, Yend;

vector<string> maps;

int c = 0;

int search(int Xn, int Yn, int Xe, int Ye) {

}

int go(int Xn, int Yn, int Xe, int Ye, int c) {
	while (1) {
		c++;
		if (Xn < Xe and Yn < Y) {
			if (maps[Yn][Xn + 1] == '#' or maps[Yn][Xn + 1] == 'X') {
				if (maps[Yn + 1][Xn] == '#' or maps[Yn + 1][Xn] == 'X') {
					
				}
			}
			else {
				maps[Yn][Xn] = 'X';
				Xn++;
				continue;
			}
		}
		else if (Xn < Xe and Yn > Y) {

		}
		else if (Xn > Xe and Yn < Y) {

		}
		else if (Xn > Xe and Yn > Y) {

		}
	}



	return c;
}



int main() {
	cin >> X >> Y;
	cin >> Xstart >> Ystart;
	Xnow = Xstart;
	Ynow = Ystart;
	cin >> Xend >> Yend;
	maps.resize(Y);
	for (int i = 0; i < Y; i++) {
		cin >> maps[i];
	}

	for (int i = 0; i < Y; i++) {
		cout << endl;
		for (int l = 0; l < X; l++){
			cout << maps[i][l];
		}
	}

	go(Xnow, Ynow, Xend, Yend, c);

}