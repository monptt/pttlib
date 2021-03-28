// Modint クラス

#include <iostream>
#include <vector>

namespace pttmath{

template<long long Modulus> class Modint{
private:
    long long value=0;

public:
    Modint(long long N=0){
        value = ((N%Modulus)+Modulus)%Modulus;
    }

    // 入力ストリーム
    friend std::istream &operator >>(std::istream &is, Modint<Modulus> &N){
        long long t;
        is >> t;
        N=t;
        return is;
    }
    // 出力ストリーム
    friend std::ostream &operator <<(std::ostream &os, const Modint &N){
        os << N.value;
        return os;
    }

    // 比較演算子
    bool operator ==(const Modint& r){
        return this->value==r.value;
    }
    bool operator !=(const Modint& r){
        return this->value!=r.value;
    }

    // 演算子
    friend Modint operator -(const Modint &a){
        return Modint(-a.value);
    }
    friend Modint operator +(const Modint &a, const Modint &b){
        return Modint(a.value+b.value);
    }
    friend Modint operator -(const Modint &a, const Modint &b){
        return Modint(a.value-b.value);
    }
    friend Modint operator *(const Modint &a, const Modint &b){
        return Modint(a.value*b.value);
    }
    friend Modint operator /(const Modint &a, const Modint &b){
        // フェルマーの小定理に基づく．
        long long m = Modulus-2;
        Modint result = a;
        Modint factor = b;
        while(m>0){
            if(m%2==1){
                result = result*factor;
            }
            factor = factor*factor;
            m/=2;
        }
        return result;
    }

    // 複合代入演算子
    Modint &operator +=(const Modint &r){
        Modint result = *this+r;
        value = result.value;
        return *this;
    }
    Modint &operator -=(const Modint &r){
        Modint result = *this-r;
        value = result.value;
        return *this;
    }
    Modint &operator *=(const Modint &r){
        Modint result = *this*r;
        value = result.value;
        return *this;
    }
    Modint &operator /=(const Modint &r){
        Modint result = *this/r;
        value = result.value;
        return *this;
    }
};


}

