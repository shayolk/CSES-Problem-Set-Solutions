#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d", &n);
    int a=n, b=0;
    while(--n) {
        int x;  cin>>x;
        a^=n;
        b^=x;
    }
    cout<<int(a^b);
 
    return 0;
}