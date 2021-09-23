#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m = n;
    while(n>0){
        int i = n;
        int j = 1;
        while(j<=m){
            if(i==n){
                if(i<10){
                    cout<<' '<<i<<' ';
                }
                else{
                    cout<<i<<' ';
                }
            }
            else{
                if(i<10){
                    cout<<' '<<i<<' ';
                }
                else{
                    cout<<i<<' ';
                }
            }
            i = i + m;
            j = j + 1;
        }
        cout<<endl;
        n = n - 1;
    }
    cout<<endl;
    return 0;
}