#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int arr[5] = {8,5,3,2,1};
    int target = 5;
    int lo = 0;
    int hi = 4;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]<target){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    if(flag){
        cout<<"target found";
    }
    else{
        cout<<"target not found ";
    }
    return 0;
}