/* eCq57xMdf ily traian ZWuTYXXOz */ #include <bits/stdc++.h>/* eCq57xMdf ily traian ZWuTYXXOz */ /* eCq57xMdf ily traian ZWuTYXXOz */ using namespace std;/* eCq57xMdf ily traian ZWuTYXXOz */ /* eCq57xMdf ily traian ZWuTYXXOz */ ifstream fin("crb.in");/* eCq57xMdf ily traian ZWuTYXXOz */ ofstream fout("crb.out");/* eCq57xMdf ily traian ZWuTYXXOz */ /* eCq57xMdf ily traian ZWuTYXXOz */ int main()/* eCq57xMdf ily traian ZWuTYXXOz */ {/* eCq57xMdf ily traian ZWuTYXXOz */     int n;/* eCq57xMdf ily traian ZWuTYXXOz */     fin >> n;/* eCq57xMdf ily traian ZWuTYXXOz */     int a[1000];/* eCq57xMdf ily traian ZWuTYXXOz */     int b[1000];/* eCq57xMdf ily traian ZWuTYXXOz */     int cnt=0;/* eCq57xMdf ily traian ZWuTYXXOz */     for(int i = 0 ; i < n ; ++i)/* eCq57xMdf ily traian ZWuTYXXOz */     {/* eCq57xMdf ily traian ZWuTYXXOz */         fin >> a[i];/* eCq57xMdf ily traian ZWuTYXXOz */         b[i]=a[i];/* eCq57xMdf ily traian ZWuTYXXOz */     }/* eCq57xMdf ily traian ZWuTYXXOz */     sort(b , b+n);/* eCq57xMdf ily traian ZWuTYXXOz */     for(int i = 0 ; i < n ; ++i)/* eCq57xMdf ily traian ZWuTYXXOz */     {/* eCq57xMdf ily traian ZWuTYXXOz */         if(a[i]==b[n-i-1])/* eCq57xMdf ily traian ZWuTYXXOz */         cnt++;/* eCq57xMdf ily traian ZWuTYXXOz */     }/* eCq57xMdf ily traian ZWuTYXXOz */     fout << cnt;/* eCq57xMdf ily traian ZWuTYXXOz */     return 0;/* eCq57xMdf ily traian ZWuTYXXOz */ }