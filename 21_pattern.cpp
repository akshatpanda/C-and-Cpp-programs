#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(i%2==0){
                cout<<0<<' ';
            }
            else{
                if((i+j)%2==0){
                    cout<<0<<' ';
                }
                else{
                    cout<<1<<' ';
                }
            }
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    cout<<endl;
    return 0;
}