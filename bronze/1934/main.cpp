#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int a, b;
    for(int i=0;i<T;i++){
        cin >>a>>b;
        for(int i=1; ;i++){
            if((a*i)%b==0){
                cout<<a*i<<"\n";
                break;
            }
        }
    }
}