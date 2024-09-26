// 高速フーリエ変換
#include <complex>
#include <vector>
#include<iostream>
namespace pttmath{
const std::complex<double> pi = acos(-1);
const std::complex<double> j(0,1.0);

// 愚直な実装によるDFT
std::vector<std::complex<double>> DFT(std::vector<std::complex<double>> x){
    int N = x.size();
    std::vector<std::complex<double>> X;
    for(int k=0; k<N; k++){
        std::complex<double> temp = 0;
        for(int t=0; t<N; t++){
            temp += x[t] * exp(-j*2.0*pi*(double)k*(double)t/(double)N);
        }
        X.push_back(temp);
    }
    return X;
}

std::vector<std::complex<double>> IDFT(std::vector<std::complex<double>> X){
    int N = X.size();
    std::vector<std::complex<double>> x;
    for(int t=0; t<N; t++){
        std::complex<double> temp = 0;
        for(int k=0; k<N; k++){
            temp += X[k] * exp(j*2.0*pi*(double)k*(double)t/(double)N);
        }
        x.push_back(temp/(double)N);
    }
    return x;
}

// 高速フーリエ変換（Cooley–Tukey）
// 2の累乗のみ．そうでないとき0埋め
std::vector<std::complex<double>> FFT(std::vector<std::complex<double>> x){
    if(x.size()==1){return x;}

    int N = x.size();
    int n=1;
    while(n<N){n*=2;}
    N = n;
    while(x.size()<N){x.push_back(0);}

    std::vector<std::complex<double>> x_even;
    std::vector<std::complex<double>> x_odd;
    for(int t=0; t<N; t++){
        if(t%2==0){x_even.push_back(x[t]);}
        else{x_odd.push_back(x[t]);}
    }

    std::vector<std::complex<double>> X_even = FFT(x_even);
    std::vector<std::complex<double>> X_odd = FFT(x_odd);

    std::vector<std::complex<double>> X;
    for(int k=0; k<N; k++){
        std::complex<double> temp = 0;
        if(k<N/2){
            temp = X_even[k] + X_odd[k]*exp(-j*2.0*pi*(double)k/(double)N);
        }else{
            temp = X_even[k-N/2] + X_odd[k-N/2]*exp(-j*2.0*pi*(double)k/(double)N);
        }
        X.push_back(temp);
    }
    return X;
}

std::vector<std::complex<double>> IFFT(std::vector<std::complex<double>> x){
    for(int i=0; i<x.size(); i++){
        x[i] = std::conj(x[i]);
    }
    std::vector<std::complex<double>> X = FFT(x);
    for(int i=0; i<X.size(); i++){
        X[i] = std::conj(X[i])/(double)X.size();
    }
    return X;
}

}
