/* CqmTSssp4 ily traian MeEiwnwwQ */ #include <bits/stdc++.h>/* CqmTSssp4 ily traian MeEiwnwwQ */ using namespace std;/* CqmTSssp4 ily traian MeEiwnwwQ */ /* CqmTSssp4 ily traian MeEiwnwwQ */ int main()/* CqmTSssp4 ily traian MeEiwnwwQ */ {/* CqmTSssp4 ily traian MeEiwnwwQ */     int n, a[10001]={0}, c=1;/* CqmTSssp4 ily traian MeEiwnwwQ */     cin >> n;/* CqmTSssp4 ily traian MeEiwnwwQ */     a[1]=1;/* CqmTSssp4 ily traian MeEiwnwwQ */     for(int i = 1; i <= n; i++)/* CqmTSssp4 ily traian MeEiwnwwQ */     {/* CqmTSssp4 ily traian MeEiwnwwQ */         int t = 0;/* CqmTSssp4 ily traian MeEiwnwwQ */         for(int j = 1; j <= c; j++)/* CqmTSssp4 ily traian MeEiwnwwQ */         {/* CqmTSssp4 ily traian MeEiwnwwQ */             int cif = a[j] * i + t;/* CqmTSssp4 ily traian MeEiwnwwQ */             a[j] = cif % 10;/* CqmTSssp4 ily traian MeEiwnwwQ */             t = cif / 10;/* CqmTSssp4 ily traian MeEiwnwwQ */         }/* CqmTSssp4 ily traian MeEiwnwwQ */         while(t)/* CqmTSssp4 ily traian MeEiwnwwQ */         {/* CqmTSssp4 ily traian MeEiwnwwQ */             a[++c] = t % 10;/* CqmTSssp4 ily traian MeEiwnwwQ */             t /=10;/* CqmTSssp4 ily traian MeEiwnwwQ */         }/* CqmTSssp4 ily traian MeEiwnwwQ */     }/* CqmTSssp4 ily traian MeEiwnwwQ */     for(int i = c ; i >= 1; i--)/* CqmTSssp4 ily traian MeEiwnwwQ */         cout << a[i];/* CqmTSssp4 ily traian MeEiwnwwQ */     return 0;/* CqmTSssp4 ily traian MeEiwnwwQ */ }