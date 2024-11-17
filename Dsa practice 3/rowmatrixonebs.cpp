#include<bits/stdc++.h>
using namespace std;
int first(vector<bool> mat,int low,int high){
    int idx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (mat[mid]==1){
            idx=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return idx;

}


int rowmatrixone(vector<vector<bool>> mat){
    int R=mat.size();
    int C=mat[0].size();
    int max=0;
    int max_index=-1;
    for(int i=0;i<R;i++){
        int index=first(mat[i],0,mat[i].size()-1);
        if(index != -1 && C-index>max ){
            max=C-index;
            max_index=i;
        }
    }
    return max_index;
}


int main() {
    vector<vector<bool>> mat = {{0, 0, 0, 1},
                                {0, 1, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 0}};

    cout << rowmatrixone(mat);
    return 0; 
}