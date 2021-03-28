#include "includes.h"
using namespace std;
#define ll long long

int main(){
    vector<int> ls = pttmath::getPrimes(100);
    for(int p : ls){
        cout<<p<<endl;
    }
    return 0;
}