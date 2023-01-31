#include<iostream>
using namespace std;
int fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    for (int i = 1; i < n;i++)
    {
        if(i==1){
            cout << t1;
        }
        if(i==2){
            cout << t2;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
int main(){
    int a;
    cin >> a;
    cout << fib(a);
    return 0;
}