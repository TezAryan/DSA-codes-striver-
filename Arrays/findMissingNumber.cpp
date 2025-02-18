#include <bits/stdc++.h>
using namespace std;

//brute solution

// int main() {
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;

//     int arr[n-1];
//     cout<<"enter "<<n-1<<" elements wiht one no. missing: 5"<<endl;
//     for(int i=0; i<n-1; i++) {
//         cin>>arr[i];
//     }

//     for(int i = 0 ; i<=n ;i++) {
//         int  flag = 0;
//         for(int j = 0 ; j< n-1 ; j++) {
//             if(arr[j]== i) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0) {
//            cout<<"missing no. is "<<i<<endl;
//             return 0;
//         }
//     }

//     return 0;
// }



//better solution

// int main() {
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;

// int arr[n];
// for(int i = 0 ; i< n ;i++){
//     cout<<"enter "<< n <<" elements with one missing no."<< endl;
//     cin>>arr[i];
// }

// int hash[n+1] = {0};
// for(int i = 0 ; i<n; i++) {
//     hash[arr[i]] = 1;
// }
// for(int i=0; i< n; i++) {
//     if(hash[i] == 0){
//         cout<<"missing number is " << i << endl;
//         return 0;
//         }
//     }

// }


//optimal solution

int missingNumber(vector<int>& a ,int N) {
    int xor1 = 0; int xor2 = 0;
    int n = N-1;

    for(int i = 0 ; i<n ; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);

    }

    xor1 = xor1 ^ N;    //xor1 ^ N because xor1 should go to end index thats why

    return xor1 ^ xor2;
}

int main() {
    int N;
    cout << "Enter the value of N (size of array + 1): ";
    cin >> N;

    vector<int> a(N - 1);
    cout << "Enter " << N - 1 << " elements in the range 1 to " << N << " with one number missing:" << endl;
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }

    int missing = missingNumber(a, N);
    cout << "The missing number is: " << missing << endl;

    return 0;
}