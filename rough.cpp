// #include <stdio.h>

// // Function to swap two elements


// // Function to reverse the array
// void reverseArray(int arr[], int l, int r) {
//     if (l >= r) return;

//     // Swap the elements
//     swap(&arr[l], &arr[r]);

//     // Recursive call to reverse the remaining array
//     reverseArray(arr, l + 1, r - 1);
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Reverse the array
//     reverseArray(arr, 0, n - 1);

//     // Print the reversed array
//     printf("Reversed array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include<bits/stdc++.h>
// long long factorial(int n) {


//     if(n==1) return 1;
//     // for(int i = n ; i>=1 ; i--) {
    
//     // int result =  n *i; 
//     // }
//     return n * factorial(n-1);

// }


// int main() {

// int num = 5;
//  cout<<"factorial of " << num << "is" <<factorial(num); 
//  return 0;

//

//}

#include <bits/stdc++.h>
using namespace std;

// long long factorial(int n) {
//     if (n == 1) return 1;
//     return n * factorial(n - 1); // Recursive call with return statement
// }

// int main() {
//     int num = 5;
//     cout <<factorial(num)<<endl;
//     return 0;
// }

///////////////

// bool palindrome(int i , string &s) {
//     if(i>= s.size()/2) return true;
//     if(s[i] != s[s.size() - i -1]) 
//     return false ;
//     return palindrome(i+1 , s);


// }

// int main() {
//     string s = "MADAM";
//     cout<<palindrome(0 , s);
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Solution {
// public:
//   bool isPalindrome(string s) {
//         int i = 0;                  // Start index
//         int j = s.size() - 1;        // End index
        
//         while (i < j) {
//             // Move i to the next alphanumeric character
//             while (i < j && !isalnum(s[i])) i++;
//             // Move j to the previous alphanumeric character
//             while (i < j && !isalnum(s[j])) j--;
            
//             // Compare the characters ignoring case
//             if (tolower(s[i]) != tolower(s[j])) {
//                 return false;
//             }

//             // Move to the next characters
//             i++;
//             j--;
//         }
        
//         // If we made it through the loop, it's a palindrome
//         return true;
//     }
// };

// int main() {
//     Solution sol;
//     string testString = "A man, a plan, a canal: Panama"; // Example input
//     if (sol.isPalindrome(testString)) {
//         cout << "The string is a palindrome" << endl;
//     } else {
//         cout << "The string is not a palindrome" << endl;
//     }

//     return 0;
// }


// class Solution {
//   public:
//     // Function to count the frequency of all elements from 1 to N in the array.
   
//     // Function to count the frequency of all elements from 1 to N in the array.
//     void frequencyCount(vector<int>& arr, int N, int P) {
//         // Initialize map to store frequency of elements
//         map<int, int> mp;
        
//         // Count frequencies of elements
//         for(int i = 0; i < N; i++) {
//             if(arr[i] <= P) {   // Only count elements within the range [1, P]
//                 mp[arr[i]]++;
//             }
//         }
        
//         // Modify the array to store frequencies
//         for(int i = 0; i < N; i++) 
//         {
//             if(i + 1 <= P) 
//             {
//                 arr[i] = mp[i + 1];  // Set the frequency for values from 1 to P
//             } 
//             else 
//             {
//                 arr[i] = 0;  // Values larger than P should be set to 0
//             }
//         }
//     }
// };


int main() {

    int n;
   
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++) {
        cout<<"enter elements in array";
        cin>>arr[i];
    }

    int hash[13] = {0};
    for (int i = 0 ; i<n ; i++) {
        hash[arr[i]] += 1;
    }      

    int q ;
    cout<<"enter no. of quarry";
    cin>>q ;
    while (q--) {
        int number;
        cout<<"enter no. you want to check";
        cin>>number;
    
    cout<<hash[number]<<endl;
    }
    return 0;
}




