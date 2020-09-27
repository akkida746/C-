#include <iostream>
#include "utils.h"
#include "template.h"
using namespace std;

double division(int a, int b) {
	if (b == 0) {
		throw "Division by zero condition!";
	}
	return (a / b);
}

namespace Sample {
class Person {
public:
	void getName() {
		cout << "Akash" << endl;
	}
};
}

struct Temp {
	int id;
	Temp(int id) {
		this->id = id;
	}
};

class A {
private:
	bool flag = false;
	constexpr static int dod0 = 2; // initialization is done at compile time
	const int popo = 3; // initialization is done at runtime
public:
	mutable int count = 1;
	int getCount() const{
		cout << "Inside getCount()" << endl;
		return count++;
	}
};

int main() {

	/*Using Template*/
	int i = minimum<int>(1,2);
	cout << "Value using template: " << i << endl;

	/*Using Template class*/
	B<int> b;
	b.printName();

	A a;
	cout << "X count: " << a.getCount() << endl;
	cout << "X count: " << a.getCount() << endl;
	cout << "X count: " << a.count << endl;
	cout << "External value" << externalValue;

	return 0;
}

