#include<bits/stdc++.h>
using namespace std ; 
y
void fun(int num){
    if(num == 4){
        return; 
    }

    cout<<num <<endl ;
    fun(num + 1) ;
}

int main(){

    fun(0);

    return 0 ;
}

////////print name using resursion//////////




// void printnum(int x , int k) {
//     if(k>x) return;
//     cout<<"Gaurav Gay"<< endl;
//     printnum(x,k+1);


// };
// int main() {
//     int x ;
//     cin>>x;
//     printnum(x,1);
//     return 0;
// }


////////from n to 1 print///////////////////

// void printnum(int x , int k) {
//     if(k>x) return;
//     cout<<x<<" ";
//     printnum(x-1,k);


// };
// int main() {
//     int x ;
//     cin>>x;
//     printnum(x,1);
//     return 0;
// }

///////from 1 to n using back stroke ///////

// void printnum(int i , int n)
// {
//     if(i<1) return;

//     printnum(i-1 , n);
//     cout<<i<<" ";
// };

// int main() {
//     int n;
//     cin>>n;
//     printnum(n,n);
// }   

//   void printNos(int N , int k) {
//         if(k>N) return;
//         cout<<N<<" ";
//         printNos(N-1 , k);
       
//     }

//     int main() {
//         int N;
//         cin>>N;
//         printNos(N , 1);
//     }


//////////////sum of series//////////

//  long long sumOfSeries(long long n ) {
     
//    if (n == 1)  return 1 ;
        
//    return n*n*n + sumOfSeries(n-1) ;
   
//     };
// int main() {
//     int n;
//     cin>>n;
//     sumOfSeries(n);
// }

////////////////parameterised  recursion//////////////

// void Parameterisedf(int i , int sum){
//     if(i<1) {
//         cout<<sum;
//         return;
//     }

//     Parameterisedf(i-1 , sum + i);
// }
// int main() {
//     int n;
//     cin>>n;
//    Parameterisedf(n , 0);

// }

// //////////////////////fal recursion//////////////

// int falRecursion(int n) {
//     if(n==0) {                     //here you want the f to return something not the parameter to return
//                                    // something that is called funcctional recursion.
//         return 0;

//     }
//      return n + falRecursion(n-1);
// }
// int main() {
//     int n = 5;
//     cout<< falRecursion(n)<< endl;
//     return 0;
// }
   

   ///////////////////////reverse an array////////////////////

// void Reverse_Array(int arr[], int i, int n) {
//     if (i >= n/2) return; 

//     swap(arr[i], arr[n-i-1]); 
//     Reverse_Array(arr, i + 1, n);
// };

// int main() {
//     int arr[10];

//     cout << "Enter array elements: \n";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }


//     Reverse_Array(arr, 0, 9);

//     cout << "Reversed Array: \n";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//////////////////////////////////////////////

//  bool palindrome(int i , string &s) {
//    if(i >= s.size() /2) return true;
//    if(s[i] != s[s.size() - i -1]) 
//    return false;
//    return palindrome(i+1 , s);


//  }

//  int main() {
//    string s = "MADeM";
//    cout<<palindrome(0 , s);
//    return 0;
   
//  }

