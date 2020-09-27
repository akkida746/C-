#include <iostream>
using namespace std;

extern int externalValue = 5;

namespace demo{
	class Person{
	public:
		void getName(){
			cout << "Demo name is defined";
		}
	};
}
