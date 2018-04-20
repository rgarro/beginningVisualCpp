#pragma once
#include <algorithm>

using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;
using std::rel_ops::operator!=;

class CBox
{
public:
	CBox();
	explicit CBox(double lv = 1.0,double wv = 1.0,double hv = 1.0);
	~CBox();
private:
	double m_Length;
	double m_Width;
	double m_Height;
public:
	// less than operator for box objects
	bool operator<(CBox& aBox);
};

