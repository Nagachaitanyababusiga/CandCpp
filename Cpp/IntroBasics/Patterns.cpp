#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter no of lines u needed: ";
    cin >> n;
    cout << endl;
    //star pattern in pyramid
    n=n-1;
    int tot=(n*2)+1;
    int stars=1;
    int spaces=tot-stars;
    while(stars<=tot){
        for(int i=0;i<spaces/2;i++) cout << " ";
        for(int i=0;i<stars;i++) cout << "*";
        for(int i=0;i<spaces/2;i++) cout << " "; 
        cout << endl;       
        stars+=2;
        spaces-=2;
    }
    return 0;
}