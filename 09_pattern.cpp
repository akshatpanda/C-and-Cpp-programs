#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(i*j<10){
                if(j==1){
                    cout<<' '<<i*j;
                }
                else{
                    cout<<"  "<<i*j;
                }
            }
            else{
                if(j==1){
                    cout<<i*j;
                }
                else{
                    cout<<' '<<i*j;
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