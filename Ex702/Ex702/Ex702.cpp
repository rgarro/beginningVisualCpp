//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Box {
	public:
		double m_Lenght;
		double m_Width;
		double m_Height;
};


int main()
{
	Box box1;
	Box box2;

	double boxVolume{};

	box1.m_Height = 18.0;
	box1.m_Lenght = 78.0;
	box1.m_Width = 24.0;

	box2.m_Height = box1.m_Height - 10.0;
	box2.m_Lenght = box1.m_Lenght/2.0;
	box2.m_Width = 0.25*box1.m_Lenght;

	boxVolume = box1.m_Height*box1.m_Lenght*box1.m_Width;

	cout << "Volume of box1 = " << boxVolume << endl;
	cout << "box2 has sides  which total "
		<< box2.m_Height + box2.m_Lenght + box2.m_Width
		<< sizeof box1 << " bytes." << endl;

    return 0;
}

