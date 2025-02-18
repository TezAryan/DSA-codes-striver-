#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[] , int n) {

    for(int i = 0; i<= n-2 ; i++){
        int mini = i;
        for(int j = i ; j<= n-1 ; j++) {
            if (arr[j] < arr[mini] ) {
                mini = j;      
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

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
        selectionsort(arr , n);
        for (int i = 0; i<n ; i++ ) {
            cout<<arr[i]<<" ";
        }

    

    return 0;

}  
