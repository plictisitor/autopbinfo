/* QJbHQrdDS ily traian XDmE6Ufhv */ #include <bits/stdc++.h>/* QJbHQrdDS ily traian XDmE6Ufhv */ using namespace std;/* QJbHQrdDS ily traian XDmE6Ufhv */ /* QJbHQrdDS ily traian XDmE6Ufhv */ ifstream cin("vizita.in");/* QJbHQrdDS ily traian XDmE6Ufhv */ ofstream cout("vizita.out");/* QJbHQrdDS ily traian XDmE6Ufhv */ /* QJbHQrdDS ily traian XDmE6Ufhv */ long long n , a[1002] , b[1002];/* QJbHQrdDS ily traian XDmE6Ufhv */ /* QJbHQrdDS ily traian XDmE6Ufhv */ int main()/* QJbHQrdDS ily traian XDmE6Ufhv */ {/* QJbHQrdDS ily traian XDmE6Ufhv */     cin >> n;/* QJbHQrdDS ily traian XDmE6Ufhv */     for(int i = 1 ; i <= n ; i++)/* QJbHQrdDS ily traian XDmE6Ufhv */     {/* QJbHQrdDS ily traian XDmE6Ufhv */         for(int j = 1 ; j <= i ; j++)/* QJbHQrdDS ily traian XDmE6Ufhv */         {/* QJbHQrdDS ily traian XDmE6Ufhv */             cin >> a[j];/* QJbHQrdDS ily traian XDmE6Ufhv */             if(j == 1) a[j] += b[j];/* QJbHQrdDS ily traian XDmE6Ufhv */             else if(j == i) a[j] += a[j - 1];/* QJbHQrdDS ily traian XDmE6Ufhv */             else  a[j] += min(b[j] , a[j - 1]);/* QJbHQrdDS ily traian XDmE6Ufhv */         }/* QJbHQrdDS ily traian XDmE6Ufhv */         for(int j = 1 ; j <= i ; j++)/* QJbHQrdDS ily traian XDmE6Ufhv */             b[j] = a[j];/* QJbHQrdDS ily traian XDmE6Ufhv */     }/* QJbHQrdDS ily traian XDmE6Ufhv */     b[1] = a[n];/* QJbHQrdDS ily traian XDmE6Ufhv */     for(int i = 2 ; i <= n ; i++)/* QJbHQrdDS ily traian XDmE6Ufhv */     {/* QJbHQrdDS ily traian XDmE6Ufhv */         for(int j = 1 ; j <= i ; j++)/* QJbHQrdDS ily traian XDmE6Ufhv */         {/* QJbHQrdDS ily traian XDmE6Ufhv */             cin >> a[j];/* QJbHQrdDS ily traian XDmE6Ufhv */             if(j == 1) a[j] += b[j];/* QJbHQrdDS ily traian XDmE6Ufhv */             else if(j == i) a[j] += a[j - 1];/* QJbHQrdDS ily traian XDmE6Ufhv */             else  a[j] += min(b[j] , a[j - 1]);/* QJbHQrdDS ily traian XDmE6Ufhv */         }/* QJbHQrdDS ily traian XDmE6Ufhv */         for(int j = 1 ; j <= i ; j++)/* QJbHQrdDS ily traian XDmE6Ufhv */             b[j] = a[j];/* QJbHQrdDS ily traian XDmE6Ufhv */     }/* QJbHQrdDS ily traian XDmE6Ufhv */     cout << a[n];/* QJbHQrdDS ily traian XDmE6Ufhv */     return 0;/* QJbHQrdDS ily traian XDmE6Ufhv */ }