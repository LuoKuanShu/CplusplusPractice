#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	
	//store int scores
	unsigned int grade = 0;
	vector<unsigned int> grades;
	
	while (cin >> grade){
		grades.push_back(grade);
	}
	vector<string> finalGrades(grades.size());  //initial to specific num of vector.


	//store letter score
	const vector<string> scores = {"F","D","C","B","A","A++"};
	auto r_iterator = grades.begin();
	auto w_iterator = finalGrades.begin();

	while (r_iterator != grades.end()){
			string letterGrade = " ";
			string temp = " ";

			//read grade and translate it to letterGrade.
			letterGrade = ((*r_iterator) < 60) ? letterGrade = scores[0]
		          : (
		            letterGrade = scores[((*r_iterator) - 50) / 10] ,
			    (
			    ((*r_iterator) != 100) ?
			      (  ((*r_iterator) % 10) > 7 ?
			           letterGrade += "+" : letterGrade) 
			      :(  ((*r_iterator)% 10) < 3 ?
			           letterGrade += "-" : letterGrade ) 
			   : letterGrade
			    )
			   );
			//write leterGrade 
			*w_iterator = letterGrade;
		
			//
			++r_iterator;
			++w_iterator;

	}


	//print the finalGrades
	
	auto iterator = finalGrades.begin();  //reset
	while(iterator != finalGrades.end()){
		cout << *iterator << " ";
		++iterator;
	}


}
