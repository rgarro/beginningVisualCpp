#pragma once
class CBox
{
public:
	double m_Length;
	double m_Height;
	double m_Width;

	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) :m_Length{ lv }, m_Height{ hv }, m_Width{ wv } {};
	~CBox();

	
};

