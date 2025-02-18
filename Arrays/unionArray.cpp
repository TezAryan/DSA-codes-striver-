#include <bits/stdc++.h>
using namespace std;


//brute force soln

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;

    for (int i = 0; i < n1; i++) {  //this is used to insert the first (A) array elements in new set array
        st.insert(a[i]);
    }

    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);                ////this is used to insert the first (b) array elements in new set array
    }

    vector<int> temp;
    for (auto it : st) {               //it converts the 'set' into an 'vector' array using temp variable
        temp.push_back(it);         //to iterate over the set after merging

    }
    return temp;
}

int main() {
    int n1 , n2;
    cout<<"enter total no. of element";
    cin>>n1;

    vector<int> a(n1);
    cout<<"enter element is first array";
    for(int i = 0 ; i<n1; i++) {
        cin>>a[i];

    }

    cout<<"enter total no. of element in sec. array";
    cin>>n2;

    vector<int> b(n2);
    cout<<"elemnts in second array";
    for(int i = 0;i<n2 ; i++) {
        cin>>b[i];

    }

    vector<int> result = sortedArray(a , b);
    cout<<"final array: ";
    for(int i =0;i<result.size() ; i++) {
        cout<<result[i]<< " ";

    }

    cout<<endl;

    return 0 ;
}

//optimal soln

#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> unionArr;

    // Traverse both arrays simultaneously
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        } else {  // arr1[i] == arr2[j]
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < m) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    int n = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int m = 5;
    int arr2[] = {1, 2, 3, 6, 7};

    vector<int> result = findUnion(arr1, arr2, n, m);
    
    cout << "Union of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


