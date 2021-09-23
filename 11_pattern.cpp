#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if((i<10)&&(j<10)){
                cout<<j<<"  "<<i<<"  ";
            }
            else if((i<10)&&(j>=10)){
                cout<<j<<" "<<i<<"  ";
            }
            else if((i>=10)&&(j<10)){
                cout<<j<<"  "<<i<<" ";
            }
            else if((i>=10)&&(j>=10)){
                cout<<j<<" "<<i<<" ";
            }
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    cout<<endl;
    return 0;
}