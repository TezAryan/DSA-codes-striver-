#include<bits/stdc++.h>
using namespace std;


//////////////////////fibonaci series/////////////

int multiplerecursion(int n) {
    if (n<=1) return n;

    int last = multiplerecursion(n-1);
    int slast = multiplerecursion(n-2);

    return last + slast ;

}
int main() {
    cout << multiplerecursion(3);
    return 0;
    

}