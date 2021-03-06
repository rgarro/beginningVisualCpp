// Ex713.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

class Box {
	public:
		explicit Box(double lv = 1.0, double wv = 1.0, double hv = 1.0) : m_Length{ lv }, m_Width{ wv }, m_Height{ hv }
		{
			cout << "constructor called" << endl;
		}

		~Box() {
			cout << "destructor called" << endl;
		}

		double volume() const 
		{
			return m_Length * m_Width * m_Height;
		}

		bool compare(const Box* pBox) const 
		{
			if (!pBox) {
				return false;
			}
			return this->volume() > pBox->volume();
		}

	private:
		double m_Length;
		double m_Width;
		double m_Height;
};

int main()
{
	Box boxes[5];
	Box match{ 2.2,1.1,0.5 };
	Box cigar{8.0,5.0,1.0};

	Box* pB1{ &cigar };
	Box* pB2{};

	cout << "address of cigar is " << pB1 << endl
		<< " Volume of cigar is " << pB1->volume()
		<< endl;
	pB2 = &match;
	if (pB2->compare(pB1)) {
		cout << "match is greater than cigar " << endl;
	}
	else {
		cout << "match is less than equal or equal to cigar " << endl;
	}
	pB1 = boxes;
	boxes[2] = match;
	cout << " Volume of boxes[2] is " << (pB1 + 2)->volume() << endl;

    return 0;
}

