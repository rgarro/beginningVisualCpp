#pragma once
#include "CBox.h"
class CGlassBox : public CBox
{
public:
	CGlassBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) :CBox{ lv,wv,hv } {}
	~CGlassBox();

	double volume() const
	{
		return 0.85 * m_Length * m_Width * m_Height;
	}
};
