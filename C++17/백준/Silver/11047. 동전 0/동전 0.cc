#include <string>
#include <iostream>
using namespace std;
int main() {
	int coinNum, money,countTotal = 0;
	int coins[10];
	cin >> coinNum >> money;
	for (int index = 0; index < coinNum; index++) {
		cin >> coins[index];
	}
	for (int i = coinNum - 1; i >= 0; i--){
		if (money == 0) break;
		if (coins[i] <= money) {
			int count = money / coins[i];
			countTotal += count;
			money -= count * coins[i];
		}
		
	}
	cout << countTotal << endl;

}