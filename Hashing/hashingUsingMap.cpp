#include<bits/stdc++.h>
using namespace std;

int main() {
      int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];

    for(int i = 1; i<=n ; i++) {
        cout<<"enter the elemnets in array";
        cin>>arr[i];
    }

    //pre compute 
    map<int , int> mpp;
    for(int i =0;i<n;i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        cout<<it.first<<"->"<< it.second<<endl;  //to check that how many numbers are stored in the index
    }

    int q;
    cout<<"enter no of querry";
    cin>>q;
    while(q--) {
    int number;
    cout<<"enter no. you want to check";
    cin>>number;
    cout<<mpp[number]<<endl;  //to fetch the result
    
    }
    return 0;
}

