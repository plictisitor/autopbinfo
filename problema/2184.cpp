/* 2zvH7dPAu ily traian 149tNQaf0 */ #include <bits/stdc++.h>/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ using namespace std;/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ ifstream cin("schior.in");/* 2zvH7dPAu ily traian 149tNQaf0 */ ofstream cout("schior.out");/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ struct poz/* 2zvH7dPAu ily traian 149tNQaf0 */ {/* 2zvH7dPAu ily traian 149tNQaf0 */     int i , j;/* 2zvH7dPAu ily traian 149tNQaf0 */ };/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ const int di[] = {-1 , -1 , -1 ,  0 , 0 ,  1 , 1 , 1};/* 2zvH7dPAu ily traian 149tNQaf0 */ const int dj[] = {-1 ,  0 ,  1 , -1 , 1 , -1 , 0 , 1};/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ int a[101][101] , n , m , ip , jp , is , js , mini = 10000 , b[101][101];/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ queue < poz>Q;/* 2zvH7dPAu ily traian 149tNQaf0 */ int inside(int i , int j)/* 2zvH7dPAu ily traian 149tNQaf0 */ {/* 2zvH7dPAu ily traian 149tNQaf0 */     return i >= 1 && i <= n && j >= 1 && j <=m;/* 2zvH7dPAu ily traian 149tNQaf0 */ }/* 2zvH7dPAu ily traian 149tNQaf0 */ /* 2zvH7dPAu ily traian 149tNQaf0 */ void lee(int i , int j)/* 2zvH7dPAu ily traian 149tNQaf0 */ {/* 2zvH7dPAu ily traian 149tNQaf0 */     poz x;/* 2zvH7dPAu ily traian 149tNQaf0 */     x.i = i;/* 2zvH7dPAu ily traian 149tNQaf0 */     x.j = j;/* 2zvH7dPAu ily traian 149tNQaf0 */     Q.push(x);/* 2zvH7dPAu ily traian 149tNQaf0 */     b[i][j] = 1;/* 2zvH7dPAu ily traian 149tNQaf0 */     if(a[i][j] < mini) mini = a[i][j];/* 2zvH7dPAu ily traian 149tNQaf0 */     while(!Q.empty())/* 2zvH7dPAu ily traian 149tNQaf0 */     {/* 2zvH7dPAu ily traian 149tNQaf0 */         x = Q.front();/* 2zvH7dPAu ily traian 149tNQaf0 */         for(int i = 0 ; i < 8 ; i++)/* 2zvH7dPAu ily traian 149tNQaf0 */         {/* 2zvH7dPAu ily traian 149tNQaf0 */             int inou = x.i + di[i];/* 2zvH7dPAu ily traian 149tNQaf0 */             int jnou = x.j + dj[i];/* 2zvH7dPAu ily traian 149tNQaf0 */             if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] <= a[x.i][x.j])/* 2zvH7dPAu ily traian 149tNQaf0 */             {/* 2zvH7dPAu ily traian 149tNQaf0 */                 poz y;/* 2zvH7dPAu ily traian 149tNQaf0 */                 y.i = inou;/* 2zvH7dPAu ily traian 149tNQaf0 */                 y.j = jnou;/* 2zvH7dPAu ily traian 149tNQaf0 */                 Q.push(y);/* 2zvH7dPAu ily traian 149tNQaf0 */                 b[inou][jnou] = 1;/* 2zvH7dPAu ily traian 149tNQaf0 */                 if(a[inou][jnou] < mini) mini = a[inou][jnou];/* 2zvH7dPAu ily traian 149tNQaf0 */             }/* 2zvH7dPAu ily traian 149tNQaf0 */         }/* 2zvH7dPAu ily traian 149tNQaf0 */         Q.pop();/* 2zvH7dPAu ily traian 149tNQaf0 */     }/* 2zvH7dPAu ily traian 149tNQaf0 */ }/* 2zvH7dPAu ily traian 149tNQaf0 */ int main()/* 2zvH7dPAu ily traian 149tNQaf0 */ {/* 2zvH7dPAu ily traian 149tNQaf0 */     cin >> n >> m >> ip >> jp;/* 2zvH7dPAu ily traian 149tNQaf0 */     for(int i = 1 ; i <= n ; i++)/* 2zvH7dPAu ily traian 149tNQaf0 */         for(int j = 1 ; j <= m ; j++)/* 2zvH7dPAu ily traian 149tNQaf0 */         cin >> a[i][j];/* 2zvH7dPAu ily traian 149tNQaf0 */     lee(ip , jp);/* 2zvH7dPAu ily traian 149tNQaf0 */     cout << mini;/* 2zvH7dPAu ily traian 149tNQaf0 */ }