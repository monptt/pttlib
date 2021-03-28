// modint クラス

#include <iostream>

namespace pttmath{

template<long long Modulus> class modint{
private:
    long long value=0;
public:
    modint(long long N=0){
        value = ((N%Modulus)+Modulus)%Modulus;
    }

    // 入力ストリーム
    friend std::istream &operator >>(std::istream &is, modint<Modulus> &N){
        long long t;
        is >> t;
        N=t;
        return is;
    }
    // 出力ストリーム
    friend std::ostream &operator <<(std::ostream &os, const modint &N){
        os << N.value;
        return os;
    }

    // 比較演算子
    bool operator ==(const modint& r){
        return this->value==r.value;
    }
    bool operator !=(const modint& r){
        return this->value!=r.value;
    }

    // 演算子
    friend modint operator -(const modint &a){
        return modint(-a.value);
    }
    friend modint operator +(const modint &a, const modint &b){
        return modint(a.value+b.value);
    }
    friend modint operator -(const modint &a, const modint &b){
        return modint(a.value-b.value);
    }
    friend modint operator *(const modint &a, const modint &b){
        return modint(a.value*b.value);
    }
    friend modint operator /(const modint &a, const modint &b){
        // フェルマーの小定理に基づく．
        long long m = Modulus-2;
        modint result = a;
        modint factor = b;
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
    modint &operator +=(const modint &r){
        modint result = *this+r;
        value = result.value;
        return *this;
    }
    modint &operator -=(const modint &r){
        modint result = *this-r;
        value = result.value;
        return *this;
    }
    modint &operator *=(const modint &r){
        modint result = *this*r;
        value = result.value;
        return *this;
    }
    modint &operator /=(const modint &r){
        modint result = *this/r;
        value = result.value;
        return *this;
    }

};

}

