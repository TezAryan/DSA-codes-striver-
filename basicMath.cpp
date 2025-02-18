#include <iostream>
#include <bits/stdc++.h>
using namespace std;

///////////////////count a number///////////////

// int main() {
//     int n = 4560;
//     int count = 0;
//     while(n>0) {
//         int lastdigit = n % 10;
//         cout<<lastdigit << endl;

//        n = n/10;
//        count++;

//     }
//     cout<<count;
// }

///////////////////////////////reverse a number////////////////////

// int reverse(int x) {

//     int revNum = 0;
//     while(x < 0){
//         int ld = x % 10;
//         revNum = (revNum * 10) + ld;
//         x = x/10;
//     }
//     cout<< revNum;

//     }

//     int main() {
//         reverse(-123);

//     }

// ;

////////////////////palindrome///////////

//   int reverse(int x) {
//     int temp = x;
//     int revNum = 0;
//     while(x > 0){
//         int ld = x % 10;
//         revNum = (revNum * 10) + ld;
//         x = x/10;
//     }
//     cout<< revNum;

//      if (revNum == temp) {
//         cout<<" the number is palindrome";
//      }
//     else { cout<< " not an palindrome";

//     }
//      }

//     int main() {
//         reverse(111);

//     }

// ;

/////////////////armstrong of no.////////////////

// int main() {
//     int n;
//     cin>> n;
//     int dup = n;
//     int sum =0;

//     while(n>0) {

//        int lastdigit = n % 10;
//         sum += (lastdigit * lastdigit * lastdigit);
//        n = n/10;

//         }
//         if(sum == dup) {
//             cout<<"it is an armstrong number"<<endl;
//         }
//            else {
//             cout<<"Invalid" << endl;
//            }

//         cout<<"sum is " <<sum <<endl;

//     }

/////////////////print the divisor////////////////////

// int main() {
//     int n;
//     cin>>n;

//     for(int  i = 1 ; i<= n; i++) {
//         if(n % i == 0) {
//             cout<<i<< " , ";
//         }
//     }
// }

//////////////////sorting of divisor //////////////////

// void printdivisor(int n)
// {
//     vector<int> ls;
//     for (int i = 1; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             ls.push_back(i);
//             if ((n / i) != i)
//             {
//                 ls.push_back(n / i);
//             }
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for (auto it : ls)
//         cout << it << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printdivisor(n);
// }

//////////////////GCD greatest common factor/////////////

// int main() {

//     int n1 = 20;
//     int n2 = 40;

//     for(int i = min(n1 , n2); i>= 1; i--) {

//         if(n1 % i == 0 && n2 % i == 0) {
//             cout<<i<< " ";

//             break;
//         }
//     }
// }
//

///////different way/////////

// int gcd(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//         {
//             a = a % b;
//         }
//         else
//         {
//             b = b % a;
//         }

//         if (a == 0)
//         {
//             cout<< b;
//         }
//         else
//         {
//             cout<< a;
//         }
//     }
// }

// int main() {
//    int result = gcd(80, 40);
//     return result;
// }

