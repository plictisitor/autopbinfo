/* BdNWoqrnW ily traian Qp96ygl5v */ #include <bits/stdc++.h>/* BdNWoqrnW ily traian Qp96ygl5v */ using namespace std;/* BdNWoqrnW ily traian Qp96ygl5v */ ifstream cin("izolate.in");/* BdNWoqrnW ily traian Qp96ygl5v */ ofstream cout("izolate.out");/* BdNWoqrnW ily traian Qp96ygl5v */ int n , m , a[101][101] , p , r , e[2500];/* BdNWoqrnW ily traian Qp96ygl5v */ int main()/* BdNWoqrnW ily traian Qp96ygl5v */ {/* BdNWoqrnW ily traian Qp96ygl5v */     int cnt = 0;/* BdNWoqrnW ily traian Qp96ygl5v */     cin >> n;/* BdNWoqrnW ily traian Qp96ygl5v */     while(cin >> p >> r)/* BdNWoqrnW ily traian Qp96ygl5v */     {/* BdNWoqrnW ily traian Qp96ygl5v */         a[p][r] = 1;/* BdNWoqrnW ily traian Qp96ygl5v */         a[r][p] = 1;/* BdNWoqrnW ily traian Qp96ygl5v */     }/* BdNWoqrnW ily traian Qp96ygl5v */ /* BdNWoqrnW ily traian Qp96ygl5v */     for(int i = 1 ; i <= n ; ++i)/* BdNWoqrnW ily traian Qp96ygl5v */         {/* BdNWoqrnW ily traian Qp96ygl5v */             int ok = 0;/* BdNWoqrnW ily traian Qp96ygl5v */             for(int j = 1 ; j <= n ; ++j)/* BdNWoqrnW ily traian Qp96ygl5v */                 if (a[i][j]) ok = 1;/* BdNWoqrnW ily traian Qp96ygl5v */             if(ok == 0) cnt++;/* BdNWoqrnW ily traian Qp96ygl5v */         }/* BdNWoqrnW ily traian Qp96ygl5v */     cout << cnt << " ";/* BdNWoqrnW ily traian Qp96ygl5v */     for(int i = 1 ; i <= n ; ++i)/* BdNWoqrnW ily traian Qp96ygl5v */         {/* BdNWoqrnW ily traian Qp96ygl5v */             int ok = 0;/* BdNWoqrnW ily traian Qp96ygl5v */             for(int j = 1 ; j <= n ; ++j)/* BdNWoqrnW ily traian Qp96ygl5v */                 if (a[i][j]) ok = 1;/* BdNWoqrnW ily traian Qp96ygl5v */             if(ok == 0) cout << i << " ";/* BdNWoqrnW ily traian Qp96ygl5v */         }/* BdNWoqrnW ily traian Qp96ygl5v */     return 0;/* BdNWoqrnW ily traian Qp96ygl5v */ }