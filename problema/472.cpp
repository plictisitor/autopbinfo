/* fRPt2T2Os ily traian PEnHQi2dQ */ #include <bits/stdc++.h>/* fRPt2T2Os ily traian PEnHQi2dQ */ #include<queue>/* fRPt2T2Os ily traian PEnHQi2dQ */ using namespace std;/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */ ifstream cin("bipartit1.in");/* fRPt2T2Os ily traian PEnHQi2dQ */ ofstream cout("bipartit1.out");/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */ int a[20][20], p[20];/* fRPt2T2Os ily traian PEnHQi2dQ */ int v[20], n, m , q , w;/* fRPt2T2Os ily traian PEnHQi2dQ */ queue<int> Q;/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */ void Bfs(int x)/* fRPt2T2Os ily traian PEnHQi2dQ */ {/* fRPt2T2Os ily traian PEnHQi2dQ */     v[x] = 1;/* fRPt2T2Os ily traian PEnHQi2dQ */     Q.push(x);/* fRPt2T2Os ily traian PEnHQi2dQ */     while(!Q.empty())/* fRPt2T2Os ily traian PEnHQi2dQ */     {/* fRPt2T2Os ily traian PEnHQi2dQ */         int k = Q.front();/* fRPt2T2Os ily traian PEnHQi2dQ */         Q.pop();/* fRPt2T2Os ily traian PEnHQi2dQ */         p[k] = true;/* fRPt2T2Os ily traian PEnHQi2dQ */         for(int i = 1 ; i <= n ; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */             if(!p[i] && a[k][i])/* fRPt2T2Os ily traian PEnHQi2dQ */             {/* fRPt2T2Os ily traian PEnHQi2dQ */                 v[i] = - v[k];/* fRPt2T2Os ily traian PEnHQi2dQ */                 Q.push(i);/* fRPt2T2Os ily traian PEnHQi2dQ */             }/* fRPt2T2Os ily traian PEnHQi2dQ */     }/* fRPt2T2Os ily traian PEnHQi2dQ */ }/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */ int ver()/* fRPt2T2Os ily traian PEnHQi2dQ */ {/* fRPt2T2Os ily traian PEnHQi2dQ */     int ok = 1;/* fRPt2T2Os ily traian PEnHQi2dQ */     for(int i = 1 ; i <= n && ok; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */         for(int j = i + 1 ; j <= n ; j++)/* fRPt2T2Os ily traian PEnHQi2dQ */             if(v[i] == v[j] && a[i][j]) ok = 0;/* fRPt2T2Os ily traian PEnHQi2dQ */     if(ok) return 1;/* fRPt2T2Os ily traian PEnHQi2dQ */     return 0;/* fRPt2T2Os ily traian PEnHQi2dQ */ }/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */ int main()/* fRPt2T2Os ily traian PEnHQi2dQ */ {/* fRPt2T2Os ily traian PEnHQi2dQ */     cin >> n >> m;/* fRPt2T2Os ily traian PEnHQi2dQ */     for(int i = 1 ; i <= m ; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */     {/* fRPt2T2Os ily traian PEnHQi2dQ */         cin >> w >> q;/* fRPt2T2Os ily traian PEnHQi2dQ */         a[w][q] = a[q][w] = 1;/* fRPt2T2Os ily traian PEnHQi2dQ */     }/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */     for(int i = 1 ; i <= n ; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */         if(!p[i]) Bfs(i);/* fRPt2T2Os ily traian PEnHQi2dQ */ /* fRPt2T2Os ily traian PEnHQi2dQ */     if(ver())/* fRPt2T2Os ily traian PEnHQi2dQ */     {/* fRPt2T2Os ily traian PEnHQi2dQ */         cout << "DA" << '\n';/* fRPt2T2Os ily traian PEnHQi2dQ */         for(int i = 1 ; i <= n ; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */             if(v[i] == 1) cout << i << " ";/* fRPt2T2Os ily traian PEnHQi2dQ */         cout << '\n';/* fRPt2T2Os ily traian PEnHQi2dQ */         for(int i = 1 ; i <= n ; i++)/* fRPt2T2Os ily traian PEnHQi2dQ */             if(v[i] == -1) cout << i << " ";/* fRPt2T2Os ily traian PEnHQi2dQ */         cout << '\n';/* fRPt2T2Os ily traian PEnHQi2dQ */     }/* fRPt2T2Os ily traian PEnHQi2dQ */     else cout << "NU";/* fRPt2T2Os ily traian PEnHQi2dQ */     return 0;/* fRPt2T2Os ily traian PEnHQi2dQ */ }