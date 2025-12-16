#include <bits/stdc++.h>
using namespace std;

void upper(string &st){
    for(int i=0;i<st.size();i++){
        st[i]=static_cast<char>(toupper(static_cast<unsigned char>(st[i])));
    }
}

void printcharwise(string s){
    for(int i=0;i<s.length();i++){
        if(islower(static_cast<unsigned char>(s[i]))){
            cout <<  s[i] << " is lower" << endl;
        }else if(isupper(static_cast<unsigned char>(s[i]))){
            cout <<  s[i] << " is upper" << endl;
        }else cout << s[i] << " is neither of these" << endl;
        if(isalnum(static_cast<unsigned char>(s[i]))){
            cout <<  s[i] << " is alphanumeric" << endl;
        }else{
            cout <<  s[i] << " is not alphanumeric" << endl;
        }
    }
}

int main(){
    string name = "babu is a king";
    char arr[] = {'a','b','c','d','e'};
    cout << string(arr,5) << endl;
    cout << name << endl;
    //substring
    cout << "substring is: " << name.substr(5,2) << endl;
    upper(name);
    cout << "upper case string: " << name << endl;
    string test= "abcDEF_*2";
    printcharwise(test);
    return 0;
}
