#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k = 1;
    while(k<=2){
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=n){
                if((i<10)&&(j<10)){
                    if(k==1){
                        cout<<j<<"  "<<i<<"  ";
                    }
                    else{
                        cout<<i<<"  "<<j<<"  ";
                    }
                }
                else if((i<10)&&(j>=10)){
                    if(k==1){
                        cout<<j<<" "<<i<<"  ";
                    }
                    else{
                        cout<<i<<"  "<<j<<" ";
                    }
                }
                else if((i>=10)&&(j<10)){
                    if(k==1){
                        cout<<j<<"  "<<i<<" ";
                    }
                    else{
                        cout<<i<<" "<<j<<"  ";
                    }
                }
                else if((i>=10)&&(j>=10)){
                    if(k==1){
                        cout<<j<<" "<<i<<" ";
                    }
                    else{
                        cout<<i<<" "<<j<<" ";
                    }
                }
                j = j + 1;
            }
            cout<<endl;
            i = i + 1;
        }
        k = k + 1;
    }
    cout<<endl;
    return 0;
}