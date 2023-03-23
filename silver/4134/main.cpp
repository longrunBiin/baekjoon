#include <iostream>
#include<math.h>
using namespace std;

bool is_Prime(long long int n){
    if(n==0||n==1) return false;
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long int n;
        cin>>n;
        while(true){
            if(is_Prime(n)){
                cout<< n<<"\n";
                break;
                }
            else n++;
        }
    }
}