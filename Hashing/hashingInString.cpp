#include<bits/stdc++.h>
using namespace std;

// int main() {
//     string s;
//     cout<<"enter a string";
//     cin>>s;


//     //pre computing 
//     int hash[26] = {0};
//     for(int i = 0 ; i<n; i++) {
//         hash[s[i] - 'a']++;             //this means character - a will give the index value . where you have to add in hashing 
//     }

//     int q;
//     cout<<"enter the no. of querry";
//     cin>>q;
//     char c;
//     cout<<"enter the charcters";
//     cin>>c;

//     //to fetch the details
//     cout<<hash[c - 'a'] << endl;

// }


int main() {
    string s ;
    cout<<"enter the elements in string";
    cin>>s;



    int hash[26] = {0};
    for(int i = 0; i<s.size() ; i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"enter a querry";
    cin>>q;
    while(q--) {

    char c;
    cout<<"enter characters you want";
    cin>>c;

    cout<<hash[ c - 'a'] << endl;
    }

}