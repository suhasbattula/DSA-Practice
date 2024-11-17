#include<bits/stdc++.h>
using namespace std;
bool Anagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
int main(){
    string s1 ="geeks";
    string s2 ="kseeg";
    if(Anagram(s1,s2)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}