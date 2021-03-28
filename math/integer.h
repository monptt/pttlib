// 整数
#include <vector>
#include <utility>

namespace pttmath{

// 素数判定
// O(√N)
template<class INT> bool isPrime(INT N){
    for(INT i=2; i*i<=N; i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

// N以下の素数の列挙
// エラトステネスの篩
// O(NloglogN)
template<class INT> std::vector<INT> getPrimes(INT N){
    std::vector<INT> primes; // 素数を格納してゆく

    std::vector<bool> primeflag(N+1, true);
    for(INT i=2; i<=N; i++){
        if(primeflag[i]==true){
            primes.push_back(i);
            for(INT j=i*2; j<=N; j+=i){
                primeflag[j] = false;
            }
        }
    }
    return primes;
}

// Nの素因数分解
template<class INT> std::vector<INT> primeFactorization(INT N){
    std::vector<INT> min_prime_factor(N+1, -1);  // 最小の素因数
    for(INT i=2; i<=N; i++){
        if(min_prime_factor[i]!=-1){
            continue;
        }
        for(INT j=i; j<=N; j+=i){
            if(min_prime_factor[j]==-1){   
                min_prime_factor[j] = i;
            }
        }
    }

    std::vector<INT> result;
    while(N>1){
        result.push_back(min_prime_factor[N]);
        N /= min_prime_factor[N];
    }
    return result;
}

// 最大公約数
// 互除法
template<class INT> INT GCD(INT a, INT b){
    if(b==0){
        return a;
    }else{
        return GCD(b, a%b);
    }
}

// 最小公倍数
template<class INT> INT LCM(INT a, INT b){
    return a/GCD(a,b)*b;
}
// namespace pttmath
}