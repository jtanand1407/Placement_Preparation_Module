#include<bits/stdc++.h>
using namespace std;

int binarySearch(int s,int e,vector<int>&v, int target){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(v[mid]==target){
        return mid;
    }
    else if(v[mid]>target){
        return binarySearch(s,mid-1,v,target);
    }
    else{
        return binarySearch(mid+1,e,v,target);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    cout<<binarySearch(0,n-1,v,target);
    return 0;
}