/* UUjCZ738Q ily traian wNlFqwnNW */ #include <bits/stdc++.h>/* UUjCZ738Q ily traian wNlFqwnNW */ using namespace std;/* UUjCZ738Q ily traian wNlFqwnNW */ /* UUjCZ738Q ily traian wNlFqwnNW */ int n, r, k;/* UUjCZ738Q ily traian wNlFqwnNW */ int a[100];/* UUjCZ738Q ily traian wNlFqwnNW */ int main()/* UUjCZ738Q ily traian wNlFqwnNW */ {/* UUjCZ738Q ily traian wNlFqwnNW */     cin >> n >> k >> r;/* UUjCZ738Q ily traian wNlFqwnNW */     cout << n / 2 << endl;/* UUjCZ738Q ily traian wNlFqwnNW */     int sum = 0;/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = k * (k - 1) / 2; i < k * (k - 1) / 2 + k; ++i)/* UUjCZ738Q ily traian wNlFqwnNW */         sum += i;/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = r * (r - 1) / 2; i < r * (r - 1) / 2 + r; ++i)/* UUjCZ738Q ily traian wNlFqwnNW */         sum += i;/* UUjCZ738Q ily traian wNlFqwnNW */     cout << sum / (k + r) << endl;/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = r * (r - 1) / 2; i < r * (r - 1) / 2 + r; ++i)/* UUjCZ738Q ily traian wNlFqwnNW */         a[i - r * (r - 1) / 2 + 1] = i;/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = 1, j = 2, z = r, fr = 1 ; fr <= r; fr++, i+=2, j+=2, z--){/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[i] << ' ', fr++;/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[j] << ' ', fr++;/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[z] << ' ';/* UUjCZ738Q ily traian wNlFqwnNW */     }/* UUjCZ738Q ily traian wNlFqwnNW */     return 0;/* UUjCZ738Q ily traian wNlFqwnNW */ }