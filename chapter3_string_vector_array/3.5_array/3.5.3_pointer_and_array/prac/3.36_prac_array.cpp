#include <iostream>
#include <vector>

using namespace std;

bool compareArray(int *begP1,int *endP1,int *begP2,int *endP2);
bool compareVector(vector<int> vi1,vector<int> vi2);

int main(void){
	int arr1[] = {1,2,3};
	int arr2[] = {1,2,3};
	
	int *begP1 = begin(arr1);
	int *endP1 = end(arr1);
	int *begP2 = begin(arr2);
	int *endP2 = end(arr2);

	cout << compareArray(begP1,endP1,begP2,endP2) << endl;

	vector<int> vi1{1,3,3};
	vector<int> vi2{1,2,3};
	cout << compareVector(vi1,vi2);
}

bool compareArray(int *begP1,int *endP1,int *begP2,int *endP2){

	auto length1 = endP1 - begP1;
	auto length2 = endP2 - begP2;

	if (length1 != length2){
		return false;
	}

	while (begP1 != endP1 && *begP1 == *begP2){
		++begP1;
		++begP2;
	}

	if (begP1 == endP1){
		return true;
	}else{
		return false;
	}
}

bool compareVector(vector<int> vi1,vector<int> vi2){
	auto begIter1 = vi1.begin();
	auto endIter1 = vi1.end();
	size_t length1 = endIter1 - begIter1;

	auto begIter2 = vi2.begin();
	auto endIter2 = vi2.end();
	size_t length2 = endIter2 - begIter2;

	if (length1 != length2){
		return false;
	}

	while (begIter1 != endIter1 && *begIter1 == *begIter2){
		++begIter1;
		++begIter2;
	}

	if(begIter1 == endIter1){
		return true;
	}else{
		return false;
	}
	

}
