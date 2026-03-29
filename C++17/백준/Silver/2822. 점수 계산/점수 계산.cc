
#include <algorithm>
#include <iostream>
using namespace std;
void isFinalScore(const int scores[8]) {
	int scoresSorted[8];
	for (int index = 0; index < 8; index++) {
		scoresSorted[index] = scores[index];
	}
	sort(scoresSorted, scoresSorted + 8);
	
	int top5Scores[5];
	for (int index = 0; index < 5; index++) {
		top5Scores[index] = scoresSorted[7 - index];
	}

	int indexes[5];
	int count = 0;
	for (int index8 = 0; index8 < 8; index8++) {
		for (int index5 = 0; index5 < 5; index5++) {
			if (scores[index8] == top5Scores[index5]) {
				indexes[count++] = index8+1;
				break;
			}
		}
	}
	int finalScoreSum = 0;
	for (int index = 0; index < 5; index++) {
		finalScoreSum += top5Scores[index];
	}
	cout << finalScoreSum << endl;
	
	for (int index = 0; index < 5; index++) {
		cout << indexes[index] << " ";
	}

}

int main() {
	int score;
	int scores[8];
	for (int index = 0; index < 8; index++) {
		cin >> score;
		if (score < 0 && score <= 150) break;
		scores[index] = score;
	}
	isFinalScore(scores);

}