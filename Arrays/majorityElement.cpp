#include<bits/stdc++.h>
using namespace std;

//brute soln

int majorityElement(int arr[] , int n) {
    for(int i =0;i<n;i++) {
       int count = 0;

       for(int j=0;j<n; j++) {
        if(arr[j] == arr[i])
        count++;
       } 
    if(count > n/2) return arr[i];
    }
    return -1;
}
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n;i++) {
        cin>>arr[i];

    }

   int results = majorityElement(arr , n);

    if(results != -1) {
        cout<<"majority element " << results << endl;
    } else {
        cout<<"no majority element" << endl;
    }

    return 0;

}


//optimal soln

int majorityElement(vector<int> v) {
    int n = v.size();
    int cnt =0;
    int el;
    for(int i=0;i<n;i++) {
        if(cnt == 0) {

            cnt =1;
            el = v[i];
        }
        else if(v[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
int cnt1 =0;
for(int i=0;i<n;i++) {
    if(v[i] == el) cnt1++;

} if(cnt1 > n/2) {
    return el;
}
return -1;

}