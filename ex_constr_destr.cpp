#include <iostream>
#include <sstream>
using namespace std;

struct object {
	object();
	object(const object&);
	object(int, int);
	~object();
};

object::object() {
	cout<<"default constructor\n";
}

object::object(const object&) {
	cout << "copy constructor\n";
}

object::object(int, int) {
	cout << "user defined constructor\n";
}

object::~object() {
	cout << "destructor\n";
}

int main(void) {
	cout << "---DECLARATION OF FIRST OBJECT---"<<endl;
	object s1;
	
	for (int i = 1; i >= 0; i--) {
		if (i) {
			cout<<"---DECLARATION OF SECOND OBJECT BY COPY OF FIRST---"<<endl;
			object s2(s1);
		} else {
			cout<<"---DECLARATION OF THIRD OBJECT BY USER DECLARATION---"<<endl;
			object s2(0,0);
		}
		cout << "---\n";
	}
}