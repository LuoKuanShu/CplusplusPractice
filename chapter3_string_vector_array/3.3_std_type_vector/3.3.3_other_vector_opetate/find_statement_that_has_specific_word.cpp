#include <iostream>
#include <string>

using namespace std;

bool judgeEnd(string word);
void formatOutput(string statement);
void setUp();
void store(string statement);
void findAndStored(string statement);

//we find all suitable statement that has specific world i point,
//then i store these statement to vector<string>.

string statement;
string word;
unsigned state_num; //current count has been recorded.
unsigned num = 1000; //count of stament we want.
const char A = '.',B = '!',C = '?';
const string found_word = "with";
vector<string> vstatements;

bool tag_add = false;

int main(void){

	//input word.
	while (cin >> word){
		//make a stastement with word.
		statement += word;
		statement += " ";

		//the word do has ends with '!',and so on.
		if(judgeEnd(word)){
			if (num != state_num){
				findAndStored(statement);
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

int addTag(int index){  
	if(tag_add){
		return index;
	}
	return -1;
}

bool contain(string statement,string chars){
	char outter_char = ' ',inner_char = ' ';
	unsigned tag = 0;  //store the the index of head of same string sequence.

	for (decltype(chars.size()) index;index < statement.size();++index){
		
		outter_char = statement[index];
		inner_char = chars[0];

		while (true){
			if(
		}
	}
}

store(string statement){
	vstatements.push_back(statement);

}

void formatOutput(string statement){
	

}

void setUp(){
	string s;
	statement = s;

}


