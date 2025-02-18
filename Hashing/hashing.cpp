#include<bits/stdc++.h>
using namespace std;

 int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n;i++) {
        cout<<"elements in array: ";
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i =0;i<n;i++) {
        hash[arr[i]] += 1;
    }
    
    int q ;
    cout<<"enter no. of querry: ";
    cin>>q;
    while(q--) {
        int number;
        cout<<"enter no. u want to check: ";
        cin>>number;
        cout<<hash[number] << endl;
    }
    return 0;

 }


//////////////////////same////////
int main() {
    int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];

    for(int i = 1; i<=n ; i++) {
        cout<<"enter the elemnets in array";
        cin>>arr[i];

    }

    int hash[12] = {0};
    for(int i =0 ; i<=n ;i++) {
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"enter no of querry";
    cin>>q;
    while(q--) {
    int number;
    cout<<"enter no. you want to check";
    cin>>number;
    cout<<hash[number]<<endl;
    }
    return 0;
}
