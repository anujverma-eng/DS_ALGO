#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    char c;
    long l;
    float f;
    double lf;
    cin>>n>>c>>l>>f>>lf;
    cout<<n<<endl<<c<<endl<<l;
    cout<<fixed<<setprecision(3)<<f;
    cout<<fixed<<setprecision(9)<<lf;
    
    return 0;
}