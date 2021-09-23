#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = i;
        int k = 1;
        while(k<=n){
            if(j<10){
                cout<<" "<<j<<" ";
            }
            else{
                cout<<j<<" ";
            }
            j = j + n;
            k = k + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    cout<<endl;
    return 0;
}