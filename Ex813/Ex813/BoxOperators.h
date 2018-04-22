#pragma once
#include "CBox.h"

inline bool operator < (const double value, const CBox& aBox) {
	return value < aBox.volume();
}
inline bool operator == (const double value, const CBox& aBox) {
	return value == aBox.volume();
}