#include<bits/stdc++.h>
using namespace std;
int consecutive(int arr[],int n){
    int count=0,max_count=0;
    sort(arr,arr+n);
    vector<int> s;
    s.push_back(arr[0]);
    for(int i=1;i<n;i++){ // removing duplicate elements
        if (arr[i] != arr[i-1]) s.push_back(arr[i]);
    }
    for(int i=0;i<s.size();i++){
        if (i>0 && s[i]==s[i-1]+1) count++;
        else count=1;
        max_count=max(count,max_count);
    }
    return max_count;
}
int main()
{
    int arr[] = {1, 9, 3, 10, 4, 20, 2 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence "
            "is "
         << consecutive(arr, n);
    return 0;
}