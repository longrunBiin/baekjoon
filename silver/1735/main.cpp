#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b>a){
        int t;
        t=a;
        a=b;
        b=t;
    }
    int c=0;
    while(b!=0){
        c= a%b;
        a=b;
        b=c;
    }
    return a;
}
int main()
{
    int a, b, c, d, res1, res2;
    cin >> a >> b >> c >> d;

    res2 = b*d;
    res1 = a*d+b*c;

    int gcdNum = gcd(res1, res2);

    res2 /= gcdNum;
    res1 /= gcdNum;

    cout<<res1<<" "<<res2<<"\n";
}