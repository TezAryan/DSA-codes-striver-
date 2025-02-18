#include <bits/stdc++.h>
using namespace std;

// vector<int> rotateArray(vector<int> &arr , int n ) {
//     int temp = arr[0];
//     for (int i = 1 ; i<= n ; i++) {
//         arr[i-1] = arr[i];

//     }

//     arr[n-1] = temp;
//     return arr;

// }

// int main() {
    

//}



///////rotate array by D places////////////
//brute force solution

void leftRotate(int arr[] , int n , int d) {
    d = d % n;   // isko karne se d bas n ka ramiander hai utna hi bar rotate karega

    int temp [d];
    for(int i = 0 ; i<d ; i++ ){
        temp[i] = arr[i]               //ye isliye kiya hai kyuki jitna no. rotate  krna hai usko ham log temp me store krre hai
    }


for (int i = d ; i<n ; i++) {
    arr[i-d] = arr[i];              //ye islye use kiye hai kyuki jo bache no. hai wo sab one by one 1 index me move karenge 
}

for(int i = n-d ; i<n; i++) {
    arr[i] = temp[ i - (n-d)];      //jo values temp me liye the usko wapas last  index me dalne ke liye use kiye hai
}

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++ ) {
        cin << arr[i] << " ";

    }

    ind d;
    cin >> d;
    leftRotate(arr , n , d);
    for(int i = 0 ; i<n ; i++) {
        cout >> arr[i] >> " ";
    } 

    return 0;
}


//optimal solution

void rotate(int arr[] , int n , int k) {
    reverse(arr , arr+k);
    reverse(arr+k , arr + n);
    reverse(arr , arr+n );

}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++ ) {
        cin >> arr[i] >> " ";

    }

    ind d;
    cin >> d;
    leftRotate(arr , n , d);
    for(int i = 0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } 

    return 0;
}


