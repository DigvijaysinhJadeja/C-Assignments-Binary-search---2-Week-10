#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool duplicaterotate(vector<int>&nums,int target){
    int lo = 0;
    int hi = nums.size()-1;
    while(lo<=hi){
        int mid = lo + (lo-hi)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[mid]==nums[lo] && nums[mid]==nums[hi]){
            hi--;
            lo++;
        }
        else if(nums[lo]<nums[mid]){
            if(nums[lo]<=target && nums[mid]>target){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            if(nums[mid]<target && nums[hi]>=target){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
    }
    return false;
}
int main (){
    int n;
    cout<<"size of : ";
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int target;
    cout<<"target : ";
    cin>>target;

    cout<<duplicaterotate(v,target);
}