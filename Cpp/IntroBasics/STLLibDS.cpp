#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

void print_uos(unordered_set<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

void print_os(set<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

void print_unms(unordered_multiset<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

void print_oms(multiset<int> &vet){
    for(int i:vet) cout << i << " ";
    cout << endl;
}

//vector
int tut_vec(){
    vector<int> vec;
    for(int i=0;i<5;i++) vec.push_back(i);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(2);
    vec.pop_back();
    vec.emplace_back(5);
    vec.erase(remove(vec.begin(),vec.end(),1),vec.end());
    vec.insert(vec.begin(),10);
    print(vec);
    cout << "index : " << find(vec.begin(),vec.end(),2)-vec.begin() << endl;
    cout << "count of " << 2 << " is: " << count(vec.begin(),vec.end(),2) << endl;
    sort(vec.begin(),vec.end(),[](int a,int b){
        return a<b;
    });
    print(vec);
    cout << "index of 2 using binary search: " << binary_search(vec.begin(),vec.end(),2) << endl;  //index
    cout << "lower bound of 2: " << lower_bound(vec.begin(),vec.end(),2)-vec.begin() << endl;  // iterator
    cout << "upper bound of 2: " << upper_bound(vec.begin(),vec.end(),2)-vec.begin() << endl; 
    return 0;
}

//unordered unique set
int tut_unordered_set(){
    unordered_set<int> uos;
    uos.insert(1);
    uos.insert(2);
    uos.insert(3);
    uos.insert(4);
    uos.insert(1);
    print_uos(uos);
    cout << (uos.count(1) ? "1 is present" : "1 is not present") << endl;
    cout << uos.count(1) << endl;
    return 0;
}

//ordered unique set
int tut_ordered_uniq_set(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(4);
    print_os(st);
    cout << "count of 1: " << st.count(1) << endl;
    cout << "count of 4: " << st.count(4) << endl;
    cout << "first element is : " << *st.begin() << endl;
    cout << "last element is : " << *st.rbegin() << endl;
    return 0;
}


//unordered multi set
int tut_unordered_multiset(){
    unordered_multiset<int> unms;
    unms.insert(1);
    unms.insert(2);
    unms.insert(3);
    unms.insert(4);
    unms.insert(1);
    print_unms(unms);
    cout << "count of 1: " << unms.count(1) << endl;
    return 0;
}

//ordered multi set
int tut_ordered_multiset(){
    multiset<int> oms;
    oms.insert(1);
    oms.insert(2);
    oms.insert(3);
    oms.insert(4);
    oms.insert(1);
    oms.insert(1);
    oms.insert(1);
    oms.insert(1);
    print_oms(oms);
    cout << "count of 1: " << oms.count(1) << endl;
    cout << "lower bound of 1: " << distance(oms.begin(),oms.lower_bound(1)) << endl;
    cout << "lower bound of 1: " << distance(oms.begin(),oms.upper_bound(1)) << endl;
    return 0;
}

int main(){
    int a;
    //a=tut_vec();
    //a=tut_unordered_set();
    //a=tut_ordered_uniq_set();
    // a=tut_unordered_multiset();
    a=tut_ordered_multiset();
    return a;
}