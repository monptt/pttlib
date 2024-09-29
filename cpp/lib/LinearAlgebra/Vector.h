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
	RealNumber operator[](std::size_t index) const;

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

public:
	static RealNumber Dot(Vector a, Vector b);
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

template<int N>
inline RealNumber Vector<N>::operator[](std::size_t index) const
{
	return this->values[index];
}

template<int N>
inline RealNumber Vector<N>::Dot(Vector a, Vector b)
{
	RealNumber sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += a[i] * b[i];
	}
	return sum;
}
