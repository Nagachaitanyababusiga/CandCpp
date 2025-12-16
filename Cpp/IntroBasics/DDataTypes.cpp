#include <bits/stdc++.h>
using namespace std;

// array

//pass by reference
void passbyref(int &x){
    x++;
    cout << "X: " << x <<endl;
    cout << "address X: " << &x <<endl;
}

//passing using pointers
void passbypointer(int *x){
    (*x)++;
    cout << "value : " << (*x) << endl;
    cout << "address of value : " << (x) << endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    for(int i:arr){
        cout << i << endl;
    }

    int a=10;
    passbyref(a); // pass by reference
    cout << "a: " << a <<endl;
    cout << "address a: " << &a <<endl;

    int b=10;
    int *p=&b; // pointer for address
    passbypointer(p);
    cout << "value : " << (*p) << endl;
    cout << "address of value : " << (p) << endl;

    return 0;
}