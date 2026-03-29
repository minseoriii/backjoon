#include <string>
#include <iostream>
using namespace std;
int main() {
	int peopleNum = 0;
	int peopleNumMax = 0;
	for (int station = 0; station < 10; station++) {
		int in, out;
		cin >> out >> in;
		peopleNum -= out;
		peopleNum += in;
		if (peopleNum > peopleNumMax) {
			peopleNumMax = peopleNum;
		}

	}
	cout << peopleNumMax << endl;
}