/* 33AnRqJzb ily traian aWoFkLSKF */ #include <bits/stdc++.h>/* 33AnRqJzb ily traian aWoFkLSKF */ using namespace std;/* 33AnRqJzb ily traian aWoFkLSKF */ /* 33AnRqJzb ily traian aWoFkLSKF */ ifstream cin("foto.in");/* 33AnRqJzb ily traian aWoFkLSKF */ ofstream cout("foto.out");/* 33AnRqJzb ily traian aWoFkLSKF */ /* 33AnRqJzb ily traian aWoFkLSKF */ int n, m, a[101][101], cnt;/* 33AnRqJzb ily traian aWoFkLSKF */ int di[]={0,0,-1,1};/* 33AnRqJzb ily traian aWoFkLSKF */ int dj[]={-1,1,0,0};/* 33AnRqJzb ily traian aWoFkLSKF */ /* 33AnRqJzb ily traian aWoFkLSKF */ bool inmat(int i, int j){/* 33AnRqJzb ily traian aWoFkLSKF */     return i >= 1 && i <= n && j >= 1 && j <= m;/* 33AnRqJzb ily traian aWoFkLSKF */ }/* 33AnRqJzb ily traian aWoFkLSKF */ /* 33AnRqJzb ily traian aWoFkLSKF */ void fill(int i, int j){/* 33AnRqJzb ily traian aWoFkLSKF */     cnt++;/* 33AnRqJzb ily traian aWoFkLSKF */     a[i][j] = 1;/* 33AnRqJzb ily traian aWoFkLSKF */     for(int d = 0; d <= 3; ++d){/* 33AnRqJzb ily traian aWoFkLSKF */         int ii = i + di[d];/* 33AnRqJzb ily traian aWoFkLSKF */         int jj = j + dj[d];/* 33AnRqJzb ily traian aWoFkLSKF */         if(inmat(ii, jj) && a[ii][jj] == 0)/* 33AnRqJzb ily traian aWoFkLSKF */             fill(ii, jj);/* 33AnRqJzb ily traian aWoFkLSKF */     }/* 33AnRqJzb ily traian aWoFkLSKF */ }/* 33AnRqJzb ily traian aWoFkLSKF */ /* 33AnRqJzb ily traian aWoFkLSKF */ int main(){/* 33AnRqJzb ily traian aWoFkLSKF */     int max = 0;/* 33AnRqJzb ily traian aWoFkLSKF */     cin >> n >> m;/* 33AnRqJzb ily traian aWoFkLSKF */     for(int i = 1; i <= n; ++i)/* 33AnRqJzb ily traian aWoFkLSKF */         for(int j = 1; j <= m; ++j)/* 33AnRqJzb ily traian aWoFkLSKF */             cin >> a[i][j];/* 33AnRqJzb ily traian aWoFkLSKF */     for(int i = 1; i <= n; ++i)/* 33AnRqJzb ily traian aWoFkLSKF */         for(int j = 1; j <= m; ++j)/* 33AnRqJzb ily traian aWoFkLSKF */             if(a[i][j] == 0){/* 33AnRqJzb ily traian aWoFkLSKF */                 cnt=0;/* 33AnRqJzb ily traian aWoFkLSKF */                 fill(i, j);/* 33AnRqJzb ily traian aWoFkLSKF */                 if(cnt > max)/* 33AnRqJzb ily traian aWoFkLSKF */                     max = cnt;/* 33AnRqJzb ily traian aWoFkLSKF */             }/* 33AnRqJzb ily traian aWoFkLSKF */     cout << max;/* 33AnRqJzb ily traian aWoFkLSKF */     return 0;/* 33AnRqJzb ily traian aWoFkLSKF */ }