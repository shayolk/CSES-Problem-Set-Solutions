#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	scanf("%d", &n);
    if(n==1) {
        printf("1");
        return 0;
    }
    if(n<4) {
        printf("NO SOLUTION");
        return 0;
    }
    if(n%4==0) {
        for(int i=1; i<n; i+=4) {
        	printf("%d %d %d %d ", i+1,i+3,i,i+2);
        }
        return 0;
    }
    if(n%4==1) {
        printf("1 ");
        for(int i=2; i<n; i+=4) {
        	printf("%d %d %d %d ", i+1,i+3,i,i+2);
        }
        return 0;
    }
    if(n%4==2) {
        printf("1 4 2 5 3 6 ");
        for(int i=7; i<n-1; i+=4) {
        	printf("%d %d %d %d ", i+1,i+3,i,i+2);
        }
        return 0;
    }
    printf("1 5 2 4 6 3 7 ");
    for(int i=8; i<n; i+=4) {
    	printf("%d %d %d %d ", i+1,i+3,i,i+2);
    }
 
    return 0;
}