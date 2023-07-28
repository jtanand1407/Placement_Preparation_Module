#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    // vector must be in sorted order to implement binary search
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    int s=0,e=n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]>target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}