#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s,t;
    s.push(2);
    s.push(6);
    s.push(5);
    s.push(8);
    s.push(3);
    int mx = INT_MIN;
    int smx = INT_MIN;
       while (!s.empty()) {
     mx = max(mx, s.top());
    t.push(s.top());
    s.pop();
    }
     while (!t.empty()) {
         if (t.top() != mx){
        smx = max(smx, t.top());
        t.pop();
         }
    
    }
    cout << smx;
    return 0;

}