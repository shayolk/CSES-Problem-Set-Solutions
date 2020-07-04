#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    scanf("%lld", &n);
    while(n!=1) {
        printf("%lld ", n);
        if(n%2) {
            n*=3;
            ++n;
        }
        else {
            n/=2;
        }
    }
    printf("%lld", n);
 
    return 0;
}