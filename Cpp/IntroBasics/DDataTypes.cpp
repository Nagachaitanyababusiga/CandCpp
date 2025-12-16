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

//functions
int add(int a,int b){
    return a+b;
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

    //functions
    cout << add(5,3) << endl;
    
    if(a<3){
        cout << "Less than 3" << endl;
    }else if(a<6){
        cout<< "Less than 6" << endl;
    }else{
        cout << "greater than or equal to 6" <<endl;
    }

    return 0;
}