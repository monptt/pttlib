#include "includes.h"
using namespace std;

int main(){
    vector<int> primes = pttmath::getPrimes(100);
    for(int p : primes){
        cout<<p<<endl;
    }
    return 0;
}
