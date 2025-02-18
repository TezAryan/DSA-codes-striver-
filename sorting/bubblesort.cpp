#include<bits/stdc++.h>
using namespace std;

void Bubblesort(int arr[] , int n) {
    for (int i = n-1 ;i>= 1 ; i--) {
        for (int j = 0 ; j<= n-1 ; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }

        }
    }
}


int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int  arr[n];
    for (int i = 0 ; i<n; i++) {
        cout<<"enter element in array : ";
        cin>>arr[i];
    }
        Bubblesort(arr , n);
        for (int i = 0; i<n ; i++ ) {
            cout<<arr[i]<<" ";
        }

    

    return 0;

}  