// 整数
#include <vector>
#include <queue>
namespace pttmath{

// 素数判定
// O(√N)
template<class INT> bool is_prime(INT N){
    for(INT i=2; i*i<=N; i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

// n以下の素数の列挙
// エラトステネスの篩
// O(NloglogN)
template<class INT> std::vector<INT> getPrimes(INT N){
    std::vector<INT> primes; // 素数を格納してゆく

    std::vector<bool> primeflag(N+1, true);
    primeflag[0] = false;
    primeflag[1] = false;
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

}