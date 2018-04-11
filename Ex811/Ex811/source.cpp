#include <iostream>
#include <utility>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Name {
public:
	Name(const string& aName) :name{ aName } {
		cout << "Lvalue Name constructor ..." << endl;
	}

	Name(string&& aName) :name{ std::move(aName) } {
		cout << "Lvalue Name constructor ..." << endl;
	}
private:
	string name;
};

class Person {
public:
	//constructor template
	template<typename T1,typename T2>
	Person(T1&& first,T2&& second):firstname{std::forward<T1>(first)}
};

int main() {

	return 0;
}