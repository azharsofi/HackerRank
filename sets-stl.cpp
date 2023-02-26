#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     set<int> s;
     int q;
     cin >> q;
     while(q > 0) {
        int y, x;
        cin >> y >> x;
        if (y == 1) {
            s.insert(x);
        }
        if (y == 2) {
           s.erase(x);
        }
        if (y == 3) {
            if(s.find(x)!=s.end()){
                cout << "Yes" <<endl;
            }
            else{
                cout << "No"<<endl;   
            }
        }   
        q--;}
    
    return 0;
}


