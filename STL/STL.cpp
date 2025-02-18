
#include<bits/stdc++.h>
using namespace std;


//     int printsum(int a , int b) {
//         return a+b;
//     }

//   int main() {
  

//     int sum = printsum(1,2);
//     cout<<sum;

//   }

/////////////////pairs in c++////

//void explainpair() {
//     pair<int,int> p = {1 ,3};
//     cout<<p.first << " " << p.second;
// }

//     void explainpair1() {
//     pair<int , pair<int,int>> p={1 ,{2,3}};
//     cout<<p.second.second<<" "<< p.second.first;

// }

//  int main () {
//    explainpair();
//    cout<<endl;
//    explainpair1();
//  }

 ///////vectors on c++/////

//  void explainvector() {

// // creation of a vector
//   vector<int> v;


// insertion of a vector
  // v.push_back(1);
  // v.emplace_back(2);
  
  // vector <int> v(5);

  // vector<int>v1(5,10);
  // vector<int> v2(v1);

  // //using an iterator in vector

  //   vector<int>::iterator it = v.begin();
  //   it++;
  //   cout<<*(it) << " "; 

  //   vector<int> :: iterator it = v.end();
    
  //   for(vector<int>:: iterator it = v.begin(); it != v.end() ; it++) {
  //     cout<< *(it) << " ";
  //   }

  //   for(auto it = v.begin(); it != v.end() ; it++) {
  //     cout<< *(it) << " ";
  //   }

  //   //deletion in a vector 

  //   //{10 , 20 , 30 ,40 , 50}
  //   v.erase(v.begin()+2 , v.begin()+4);  
  //   // {10, 40 ,50}

// insert an functionn 

//   vector<int> v (2 ,100); //{100 , 100}
//   v.insert(v.begin() , 300)  // {300 , 100 ,100}
//   v.insert(v.begin()+1 , 2 , 100); // {300 , 10 ,10 100 ,100}

  
//  }

 /////////list in c++ ///////

//  void explainlist() {
//   list<int> ls;

//   ls.push_back(5); //{5}

//   ls.push_front(4); //{4,5}

//  }

 ////stack////////

//  void explainstack() {
//   stack<int> st;
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4);  //{4,3,2,1}

//   cout<<st.top(); //prints 4
//   cout<<st.pop(); // deletes 4 
//   cout<st.size(); // prints 4 

  //////////queue in c++////

  // void explainqueue() {
  //   queue <int> q;
  //   q.push(1);
  //   q.push(2);
  //   q.push(3);
  //   q.push(4);   //{1,2,3,4}

  //   cout<<q.back(); // prints 4
  //   cout<<q.front(); //prints 1
  //   cout<<q.pop(); //deletes 1
  // }
//////////// priority ////////

// void explainPQ() {
//   priority_queue <int> pq;
//   pq.push(5);
//   pq.push(2);
//   pq.push(7);
//   pq.push(8);  // {8,7,5,2} order wise

//   cout<< pq.top(); // prints 8
//   pq.pop();   //deletes 8

// }
 

 ///////set in c++//////////

//  void explainset() {
//   set<int> st;
//   st.insert(1);
//   st.insert(2);
//   st.emplace(2);
//   st.emplace(3);  // not insert 2 cause it is already inserted
//   st.emplace(4);  //{1,2,3,4}

//   auto it = st.find(3); // FINDS 3 AND PRINTS

//   auto it = st.find(6); // ]returns end() cause 6 is no there

// st.erase(4); //{1,2,3}


//  }

 //////////multiset/////////////
  
//   void explainmultiset() {
//   multiset<int>ms;
//   ms.insert(1);
//   ms.insert(1);
//   ms.insert(1);
//   ms.insert(1);  //{1,1,1,1}

// ms.erase(1); //all 1's are erased

// ms.erase(ms.find(1));  //only a single 1 is erased

// ms.erase(ms.find(1), ms.find(1) +2); // from first to 3 element is erased only

//   }

  //////////MAP./////////////////

  void explainmap() {
    map <int,int> mpp;


    mpp[1] = 2; //stores value 2 at the key 1
    mpp.emplace ({3,1});
    mpp.insert({2,4});  //  {2,4,1}

    for(auto it : mpp) {
      cout<< it.first << " " << it.second << endl;
    }
  }

  /////////sorting of an vector////////////

    vector <int> a;

    //{1,2,5,3}
    sort(a+2 , a+4); //sort an {1,2,3,5}

    sort(a , a+n , greater<int>); //sorts in ascending order
    
    ///////comporator////
     
     bool comp(pair<int,int>p1, pair <int, int> p2) {
      if(p1.second < p2.second) return true;
      if(p1.second > p2.second) return false;

      if(p1.first > p2.first) return true;
      return false;
     }


  ///////////////
