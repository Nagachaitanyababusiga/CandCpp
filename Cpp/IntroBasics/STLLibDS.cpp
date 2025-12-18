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

void print_uom(unordered_map<int,int> &mp){
    for(auto &i:mp){
        cout << i.first << " : " << i.second << ";  ";
    }
    cout << endl;
}

void print_om(map<int,int> &mp){
    for(auto &i:mp){
        cout << i.first << " : " << i.second << ";  ";
    }
    cout << endl;
}

void print_umm(unordered_multimap<int,int> &mp){
    for(const auto &it: mp){
        cout << "[" << it.first << " -> " << it.second << "]";
    }
    cout << endl;
}

void print_omm(multimap<int,int> &mp){
    for(const auto &it: mp){
        cout << "[" << it.first << " -> " << it.second << "]";
    }
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

//unordered map
int tut_unordered_map(){
    unordered_map<int,int> mp;
    int count=0;
    while(count<10){
        for(int i=1;i<10;i++){
            if(mp.count(i)) mp[i]+=1;
            else mp[i]=1;
        }
        count++;
    }
    print_uom(mp);
    return 0;
}

//ordered map
int tut_ordered_map(){
    map<int,int> mp;
    int count=0;
    while(count<10){
        for(int i=1;i<10;i++){
            if(mp.count(i)) mp[i]+=1;
            else mp[i]=1;
        }
        count++;
    }
    print_om(mp);
    return 0;
}

//unordered mutlimap
int tut_unordered_multimap(){
    unordered_multimap<int,int> mp;
    int count = 0;
    srand(time(0));
    while(count < 20){
        int rn=rand()%10;
        mp.insert({rn,rand()%100});
        count++;
    }
    print_umm(mp);
    auto it=mp.equal_range(4);
    auto i=it.first;
    mp.erase(mp.equal_range(4).first);
    print_umm(mp);
    for(;i!=it.second;i++){
        cout << "[" << i->first << " -> " << i->second << "]";
    }
    cout << endl;
    mp.erase(4);
    print_umm(mp);
    return 0;
}


//ordered map
int tut_ordered_multimap(){
    multimap<int,int> mp;
    int count = 0;
    srand(time(0));
    while(count < 20){
        int rn=rand()%10;
        mp.insert({rn,rand()%100});
        count++;
    }
    print_omm(mp);
    auto it=mp.equal_range(4);
    auto i=it.first;
    mp.erase(mp.equal_range(4).first);
    print_omm(mp);
    for(;i!=it.second;i++){
        cout << "[" << i->first << " -> " << i->second << "]";
    }
    cout << endl;
    mp.erase(4);
    print_omm(mp);
    return 0;
}


//queue
int tut_queue(){
    queue<int> q;
    for(int i=1;i<10;i++) q.push(i);
    int count=0;
    while(count++<4){
        cout << " front: " << q.front() << " back: " << q.back() << endl;
        q.pop();
    }
    return 0;
}

//deque
int tut_deque(){
    deque<int> dq;
    for(int i=1;i<10;i++) dq.push_back(i);
    int count=0;
    while(count++<4){
        cout << " front: " << dq.front() << " back: " << dq.back() << endl;
        if(count%2) dq.pop_front();
        else dq.pop_back();
    }
    return 0;
}

//custom comparator for priorityqueue
struct comparator{
    bool operator()(int a,int b){
        return a<b;
    }
};

//priority Queue
int tut_pq(){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<10;i++) pq.push(i+1);
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    priority_queue<int,vector<int>,comparator> pq1;
    for(int i=0;i<10;i++) pq1.push(i+1);
    while(!pq1.empty()){
        cout << pq1.top() << endl;
        pq1.pop();
    }
    return 0;
}

int main(){
    int a;
    //a=tut_vec();
    //a=tut_unordered_set();
    //a=tut_ordered_uniq_set();
    // a=tut_unordered_multiset();
    // a=tut_ordered_multiset();
    // a=tut_unordered_map();
    // a=tut_ordered_map();
    // a=tut_unordered_multimap();
    // a=tut_ordered_multimap();
    // a=tut_queue();
    // a=tut_deque();
    // a=tut_pq();
    return a;
}