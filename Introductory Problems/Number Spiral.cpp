#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int r,c;
        scanf("%d%d", &r,&c);
        long long ans;
        if(r<c) {
            if(c%2) 
                ans=1LL*c*c-(r-1);
            else 
                ans=1LL*(c-1)*(c-1)+1+(r-1);
        }
        else {
            if(r%2==0) 
                ans=1LL*r*r-(c-1);
            else 
                ans=1LL*(r-1)*(r-1)+1+(c-1);
        }
        printf("%lld\n", ans);
    }

    return 0;
}