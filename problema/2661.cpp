/* Eexg8mxNR ily traian GicmZ7P5G */ #include <bits/stdc++.h>/* Eexg8mxNR ily traian GicmZ7P5G */ using namespace std;/* Eexg8mxNR ily traian GicmZ7P5G */ int a[100] , cnt;/* Eexg8mxNR ily traian GicmZ7P5G */ int main()/* Eexg8mxNR ily traian GicmZ7P5G */ {/* Eexg8mxNR ily traian GicmZ7P5G */     long long n;/* Eexg8mxNR ily traian GicmZ7P5G */     cin >> n;/* Eexg8mxNR ily traian GicmZ7P5G */     while(n != 0)/* Eexg8mxNR ily traian GicmZ7P5G */     {/* Eexg8mxNR ily traian GicmZ7P5G */         a[cnt] = n % 10;/* Eexg8mxNR ily traian GicmZ7P5G */         n /= 10;/* Eexg8mxNR ily traian GicmZ7P5G */         cnt++;/* Eexg8mxNR ily traian GicmZ7P5G */     }/* Eexg8mxNR ily traian GicmZ7P5G */     for(int i = cnt - 1 ; i >= 0 ; i--)/* Eexg8mxNR ily traian GicmZ7P5G */         if(i != cnt / 2) cout << a[i];/* Eexg8mxNR ily traian GicmZ7P5G */ }