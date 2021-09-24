#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n*n){
        int j = 1;
        while(j<=n){
            cout<<(char)(i+64)<<' ';
            j = j + 1;
            i = i + 1;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}