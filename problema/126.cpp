/* ZJk6ZXyIi ily traian BBsmWSW0Q */ #include <bits/stdc++.h>/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ using namespace std;/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ ifstream cin("dmax.in");/* ZJk6ZXyIi ily traian BBsmWSW0Q */ ofstream cout("dmax.out");/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ int n , m , x , y , a[101][101] , v[101] , nrc , d[101] , maxi , rez;/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ void bfs(int x)/* ZJk6ZXyIi ily traian BBsmWSW0Q */ {/* ZJk6ZXyIi ily traian BBsmWSW0Q */     v[x] = 1;/* ZJk6ZXyIi ily traian BBsmWSW0Q */     d[x] = 1;/* ZJk6ZXyIi ily traian BBsmWSW0Q */     queue <int> Q;/* ZJk6ZXyIi ily traian BBsmWSW0Q */     Q.push(x);/* ZJk6ZXyIi ily traian BBsmWSW0Q */     while(!Q.empty())/* ZJk6ZXyIi ily traian BBsmWSW0Q */     {/* ZJk6ZXyIi ily traian BBsmWSW0Q */         int aux = Q.front();/* ZJk6ZXyIi ily traian BBsmWSW0Q */         Q.pop();/* ZJk6ZXyIi ily traian BBsmWSW0Q */         for(int i = 1 ; i <= n ; i++)/* ZJk6ZXyIi ily traian BBsmWSW0Q */             if(!v[i] && a[aux][i] == 1)/* ZJk6ZXyIi ily traian BBsmWSW0Q */             {/* ZJk6ZXyIi ily traian BBsmWSW0Q */                 v[i] = 1;/* ZJk6ZXyIi ily traian BBsmWSW0Q */                 Q.push(i);/* ZJk6ZXyIi ily traian BBsmWSW0Q */                 d[i] = d[aux] + 1;/* ZJk6ZXyIi ily traian BBsmWSW0Q */             }/* ZJk6ZXyIi ily traian BBsmWSW0Q */     }/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ }/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */ int main()/* ZJk6ZXyIi ily traian BBsmWSW0Q */ {/* ZJk6ZXyIi ily traian BBsmWSW0Q */     cin >> n >> m;/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */     for(int i = 1 ; i <= m ; i++)/* ZJk6ZXyIi ily traian BBsmWSW0Q */     {/* ZJk6ZXyIi ily traian BBsmWSW0Q */         cin >> x >> y;/* ZJk6ZXyIi ily traian BBsmWSW0Q */         a[x][y] = a[y][x] = 1;/* ZJk6ZXyIi ily traian BBsmWSW0Q */     }/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */     bfs(1);/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */     for(int i = 1 ; i <= n ; i++)/* ZJk6ZXyIi ily traian BBsmWSW0Q */         if(d[i] > maxi) maxi = d[i] , rez = i;/* ZJk6ZXyIi ily traian BBsmWSW0Q */ /* ZJk6ZXyIi ily traian BBsmWSW0Q */     cout << rez;/* ZJk6ZXyIi ily traian BBsmWSW0Q */ }