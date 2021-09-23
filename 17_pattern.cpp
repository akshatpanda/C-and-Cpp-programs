#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 2*i-1;
        int k = 1;
        while(k<=n){
            if(j<10){
                cout<<" "<<j<<" ";
            }
            else{
                cout<<j<<" ";
            }
            j = j + 2;
            k = k + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    cout<<endl;
    return 0;
}