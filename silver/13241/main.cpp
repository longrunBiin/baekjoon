#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    cin>>a>>b;
    for(int i=1;;i++){
        if((a*i)%b==0){
            cout<<a*i<<"\n";
            break;
        }
    }
}