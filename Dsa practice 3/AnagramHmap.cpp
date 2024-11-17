#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1,string str2){
    unordered_map<char,int> umap;
    for(auto c : str1){
        umap[c]+=1;
    }
    for(auto c : str2){
        umap[c]-=1;
    }
    for(auto ch : umap){     //here ch represent the key.

        if(ch.second !=0){ //here ch.second represents the value.
            return false;
        }
    }

    return true;
}
int main(){
    string s1 ="geeks";
    string s2 ="kseeg";
    if(isAnagram(s1,s2)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
