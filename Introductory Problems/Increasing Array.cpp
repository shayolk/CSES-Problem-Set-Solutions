#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int &i: a) {
    	scanf("%d", &i);
    }
    long long ans=0;
    for(int i=1; i<n; ++i) {
        if(a[i]<a[i-1]) {
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    printf("%lld", ans);;
 
    return 0;
}