#include <bits/stdc++.h>
using namespace std;

const int nax=1e9+5;
vector<vector<long long>> a(nax, vector<long long> (nax)); 

void init() {
    a[1][1]=1;
    a[1][2]=2;
    a[2][1]=3;
    a[2][2]=4;
    long long val=5;
    int row=3, col=3, now=2, dir=0;
    while(row<nax && col<nax) {
        if(dir)
        else {
            int i=row,j;
            for(j=1; j<col; ++j) {
                a[i][j]=val++;
            }
        }
    }
}

void Main() {
    int r,c;
    scanf("%d%d", &r,&c);
}

int main() {
    
    int T;
    scanf("%d", &T);
    while(T--) {
        Main();
    }

    return 0;
}