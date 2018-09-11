#include <iostream>
#include <string>

using namespace std;

bool judgeEnd(string word);
void formatOutput(string statement);
void setUp();

//we try to make the first char within a statement endwith a pucnt '.' or '!' or '?' upper.

string statement;
string word;
unsigned state_num; //current count has been recorded.
unsigned num = 1000; //count of stament we want.
const char A = '.',B = '!',C = '?';

int main(void){

	//input word.
	while (cin >> word){
		//make a stastement with word.
		statement += word;
		statement += " ";

		//the word do has ends with '!',and so on.
		if(judgeEnd(word)){
			if (num != state_num){
				formatOutput(statement);
				setUp();
			}else{
				cout << " END. " << endl;
				break;
			}
		
		}else{
			continue;
		}

	}
}

bool judgeEnd(string word){
	const char c = word[word.size() - 1]; //end char.

	if (c == A){
		return true;
	}
	if (c == B){
		return true;
	}
	if (c == C){
		return true;
	}

	//not the end word
	return false;

}

void formatOutput(string statement){
	//upper the first char within this statement.
	char &rc = statement[0];
	rc = toupper(rc);

	//output
	cout << statement << endl;

}

void setUp(){
	string s;
	statement = s;

}


