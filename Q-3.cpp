#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void matrix(vector<vector<int>>&v,int target){
    bool flag = false;
    int m = v.size();
    int n = v[0].size();
    
    int lo = 0;
    int hi = (n*m) - 1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid/n][mid%n] == target){
            flag = true;
            break;
        }
        else if(v[mid/n][mid%n]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    if(flag==true){cout<<"true";}
    else {cout<<"false";}
}


int main (){
    
    vector<vector<int>>v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    
    int target;
    cout<<"target : ";
    cin>>target;
    matrix(v,target);
    
}