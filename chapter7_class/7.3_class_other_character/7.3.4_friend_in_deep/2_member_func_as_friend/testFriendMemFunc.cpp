#include <iostream>

using namespace std;

//class B's display() want to access A's private member func display()

//define class B
class B{
private:
	int c = 0;
public: 
	void display();    //just declaration
};


//define A
class A {
private:
	int a = 0;
	void display() {     //define A::display()
		cout << "in class A: " << "a is: " << a << endl;    
	}

public:
	A(int b){
		a = b;
	}

//friend declaration
friend void B::display();    //the name of B::display() can be found above while compiling,so it's right;
};


//define B::display()
void B::display(){
	A aa(1);     //until define A,we can use it here,so that why seperate the declration and define of B::display();
	aa.display();   //must call A's member func by A's object
	cout << "in class b." << endl;
}


int main(void) {
	A a(2);
	B b;
	b.display();

}

