// 文字列
#include<iostream>
namespace pttstring{

// 回文判定
bool isPalindrome(std::string s){
    for(int i=0; i<s.length()/2; i++){
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}


}