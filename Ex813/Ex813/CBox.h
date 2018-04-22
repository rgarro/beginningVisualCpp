#pragma once
#include <algorithm>
#include <utility>
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;
using std::rel_ops::operator!=;

class CBox
{
public:
	explicit CBox(double lv = 1.0,double wv = 1.0,double hv = 1.0);
	~CBox();
private:
	double m_Length;
	double m_Width;
	double m_Height;
public:
	bool operator < (const CBox& aBox) const
	{
		return volume() < aBox.volume();
	};
	bool operator == (const CBox& aBox)const
	{
		return volume() == aBox.volume();
	};

	double volume()const {
		return m_Length * m_Width * m_Height;
	};

	double getLength() const {
		return m_Length;
	}

	double getWidth() const {
		return m_Width;
	}

	double getHeight() const {
		return m_Height;
	}

	CBox operator <(const CBox& aBox);
	CBox operator == (const CBox& aBox);
};

