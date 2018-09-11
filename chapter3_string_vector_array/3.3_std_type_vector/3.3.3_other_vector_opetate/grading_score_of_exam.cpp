#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int score = 0;
	vector<int> grading(11,0);

	cout << "enter a series of score of students's exam: "
		<< endl;

	while (cin >> score){
		int grade = score / 10;
		grading[grade] += 1;
	}

	for (auto i : grading){
		cout << i << " ";
	
	}

}
