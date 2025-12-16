#include <bits/stdc++.h>
using namespace std;


//User defined datatypes
/*
1️⃣ Structure (struct)

A structure is a user-defined data type that groups different data types under one name.

Key points

Default access specifier → public

Used mainly to group related data

Supports functions, constructors (in C++)


2️⃣ Union (union)

A union stores multiple variables in the same memory location, but only one can be used at a time.

Key points

All members share the same memory

Size = size of largest member

Useful for memory optimization


3️⃣ Class (class)

A class is the core of Object-Oriented Programming (OOP).
It contains data + functions (methods).

Key points

Default access specifier → private

Supports encapsulation, inheritance, polymorphism

Used to model real-world entities

4️⃣ Enumeration (enum)

An enum is a user-defined type consisting of named constant values.

Key points

Improves code readability

Internally stored as integers

Values start from 0 by default

*/

struct s_car{
    int wheels;
    string color;
    s_car(int w,string c){
        wheels=w;
        color=c;
    }
    string getColor(){
        return color;
    }
    int getWheels(){
        return wheels;
    }
};

class Car{
private:
    int wheels;
    string color;
public:
    Car(int w,string c){
        wheels=w;
        color=c;
    }
    string getColor(){
        return color;
    }
    int getWheels(){
        return wheels;
    }
};

int main(){

    //struct

    s_car sc=s_car(10,"volvo");
    cout<< "car name " << sc.getColor() << " no of wheels" << sc.getWheels() << endl;

    //union

    union Storage{
        int i;
        float f;
        //string str; //not allowed because it is not a typical datatype (some garbage values)
        double d;
    };

    Storage storage;
    storage.i=10;
    cout << storage.i << endl;
    storage.f=10;
    cout << storage.f << endl;
    cout << storage.i << endl;
    storage.d=10;
    cout << storage.d << endl;

    //class
    Car c=Car(10,"volvo");
    cout<< "class car name " << c.getColor() << " class car no of wheels" << c.getWheels() << endl;

    //enum
    enum Day{
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

    Day today = monday;

    cout<< today << endl;

    return 0;
}