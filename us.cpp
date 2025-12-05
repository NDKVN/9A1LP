#include<bits/stdc++.h>
using namespace std;
long long du(long long n) {
    long long d=0;
    for(long long i=1;i*i<=n;i++) {
        if(n%i==0) {
            d+=2;
            if(i*i==n) d--;
        }
    }
    return d;
}
int main() {
    freopen("us.inp","r",stdin);
    freopen("us.out","w",stdout);
    long long a,b,mx=0;
    long long t=0;
    cin>>a>>b;
    for(long long i=a;i<=b;i++) {
        long long p=sqrt(i);
        if(p*p==i) {
            t+=i;
            long long o=du(i);
            mx=max(mx,o);

        }
    }
    cout<<t<<endl<<mx;
}