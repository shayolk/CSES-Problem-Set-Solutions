#include <bits/stdc++.h>
using namespace std;
 
int main() {
    const int nax=1e6+5;
    char s[nax];
    scanf("%s", &s);
    char c=s[0];
    int cnt=0, mx=0;;
    for(int i=0; s[i]; ++i) {
        if(s[i]==c) {
            ++cnt;
        }
        else {
            mx=max(mx,cnt);
            cnt=1;
        }
        c=s[i];
    }
    mx=max(mx,cnt);
    printf("%d", mx);
 
    return 0;
}