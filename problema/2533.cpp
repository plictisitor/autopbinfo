/* qUaGFWuhD ily traian VVjJxO04Z */ #include <bits/stdc++.h>/* qUaGFWuhD ily traian VVjJxO04Z */ /* qUaGFWuhD ily traian VVjJxO04Z */ using namespace std;/* qUaGFWuhD ily traian VVjJxO04Z */ ifstream cin("secventaincadrata.in");/* qUaGFWuhD ily traian VVjJxO04Z */ ofstream cout("secventaincadrata.out");/* qUaGFWuhD ily traian VVjJxO04Z */ #define Inf 0x3f3f3f/* qUaGFWuhD ily traian VVjJxO04Z */ /* qUaGFWuhD ily traian VVjJxO04Z */ int A[10], x, n, mx, lmax[10];/* qUaGFWuhD ily traian VVjJxO04Z */ int main()/* qUaGFWuhD ily traian VVjJxO04Z */ {/* qUaGFWuhD ily traian VVjJxO04Z */     for (int i = 0; i < 10; i ++)/* qUaGFWuhD ily traian VVjJxO04Z */         A[i] = Inf;/* qUaGFWuhD ily traian VVjJxO04Z */ /* qUaGFWuhD ily traian VVjJxO04Z */     //cin >> n;/* qUaGFWuhD ily traian VVjJxO04Z */     int i = 1;/* qUaGFWuhD ily traian VVjJxO04Z */     while(cin >> x)/* qUaGFWuhD ily traian VVjJxO04Z */     {/* qUaGFWuhD ily traian VVjJxO04Z */ /* qUaGFWuhD ily traian VVjJxO04Z */         lmax[x] = max(i - A[x] + 1, lmax[x]);/* qUaGFWuhD ily traian VVjJxO04Z */         if (A[x] == Inf)A[x] = i;/* qUaGFWuhD ily traian VVjJxO04Z */         mx = max(lmax[x], mx);/* qUaGFWuhD ily traian VVjJxO04Z */         i++;/* qUaGFWuhD ily traian VVjJxO04Z */     }/* qUaGFWuhD ily traian VVjJxO04Z */     cout << mx << '\n';/* qUaGFWuhD ily traian VVjJxO04Z */     for (int i = 0; i < 10; i ++)/* qUaGFWuhD ily traian VVjJxO04Z */         if (lmax[i] == mx)/* qUaGFWuhD ily traian VVjJxO04Z */             cout << i << ' ';/* qUaGFWuhD ily traian VVjJxO04Z */     return 0;/* qUaGFWuhD ily traian VVjJxO04Z */ }