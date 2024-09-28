#pragma once
#include "../Class.h"
#include <vector>
#include "../Number/RealNumber.h"

template<int N>
class Vector :
	public Class
{
public:
	Vector() {
		values = std::vector<RealNumber>(N);
	};

	Vector operator+(const Vector& other) const;

	std::string ToString() const {
		std::string retStr = "(";
		for (int i = 0; i < N; i++) {
			retStr += values[i].ToString();
			if (i < N - 1) {
				retStr += ", ";
			}
		}
		retStr += ")";
		return retStr;
	}
protected:
	std::vector<RealNumber> values;
};

template<int N>
inline Vector<N> Vector<N>::operator+(const Vector<N>& other) const
{
	Vector<N> retVec = Vector<N>();
	for (int i = 0; i < N; i++) {
		retVec.values[i] = values[i] + other.values[i];
	}
	return retVec;
}
