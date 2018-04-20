#include "stdafx.h"
#include "CBox.h"



CBox::CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0):
m_Length{std::max(lv,wv)},m_Width{std::min(lv,wv)},m_Height{hv}
{
	if (lv < 0.0 || wv < 0.0 || hv < 0) {
		throw "negative dimensions";
	}
	if (m_Height > m_Length) {
		std::swap(m_Height, m_Length);

	}
	else if (m_Height > m_Width) {
		std::swap(m_Height, m_Width);
	}
}


CBox::~CBox()
{
}


// less than operator for box objects
bool CBox::operator<(CBox& aBox) const
{
	return volume() < aBox.volume();
}
