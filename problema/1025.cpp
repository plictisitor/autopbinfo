/* hVgJNp0Yc ily traian UB87aogqc */ #include <bits/stdc++.h>/* hVgJNp0Yc ily traian UB87aogqc */ /* hVgJNp0Yc ily traian UB87aogqc */ using namespace std;/* hVgJNp0Yc ily traian UB87aogqc */ /* hVgJNp0Yc ily traian UB87aogqc */ int main ()/* hVgJNp0Yc ily traian UB87aogqc */ {/* hVgJNp0Yc ily traian UB87aogqc */     int n;/* hVgJNp0Yc ily traian UB87aogqc */     cin >> n;/* hVgJNp0Yc ily traian UB87aogqc */     int a[100001],s=0;/* hVgJNp0Yc ily traian UB87aogqc */     for (int i = 0 ; i < n; ++i)/* hVgJNp0Yc ily traian UB87aogqc */     {/* hVgJNp0Yc ily traian UB87aogqc */         cin >> a[i];/* hVgJNp0Yc ily traian UB87aogqc */         s+=a[i];/* hVgJNp0Yc ily traian UB87aogqc */     }/* hVgJNp0Yc ily traian UB87aogqc */     sort (a,a+n);/* hVgJNp0Yc ily traian UB87aogqc */     for (int i = 0; i < n ; ++i )/* hVgJNp0Yc ily traian UB87aogqc */     cout << a[i] << ' ';/* hVgJNp0Yc ily traian UB87aogqc */ }