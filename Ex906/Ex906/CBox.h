#pragma once
#include <iostream>

class CBox
{
public:
	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) :m_Length{ lv }, m_Height{ hv }, m_Width{ wv } {}
	
	void showVolume() const 
	{
		std::cout << "CBox usable volume is " << volume() << std::endl;
	}

	double volume() const 
	{
		return m_Length * m_Width * m_Height;
	}

	~CBox();
protected:
	double m_Length;
	double m_Width;
	double m_Height;
};

