#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void infinite(vector<int>&v,int target){
    int lo = 0;
    int hi = 1;
    while(v[hi]<target){
        lo = hi;
        hi*=2;
    }

    cout<<lo<<" "<<hi<<endl;
    bool flag = false;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            flag = true;
            break;
        }
        else if(v[mid]>target){
            hi = mid - 1;
        }
    }

    if(flag==true){cout<<"target found ";}
    else{cout<<"target not found ";}

}

int main (){
    int n ;
    cout<<"size of vector : ";
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int target;
    cout<<"target : ";
    cin>>target;
    infinite(v,target);
    
}