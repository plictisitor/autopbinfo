/* dIwsdB1tl ily traian N2SDtT559 */ #include <bits/stdc++.h>/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ using namespace std;/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ ifstream cin("dmin.in");/* dIwsdB1tl ily traian N2SDtT559 */ ofstream cout("dmin.out");/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ int n , m , s , x , y , v[101] , d[101] , p , T[101] , L[101] , cnt , maxi , ind;/* dIwsdB1tl ily traian N2SDtT559 */ vector <int> G[101];/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ void bfs(int s)/* dIwsdB1tl ily traian N2SDtT559 */ {/* dIwsdB1tl ily traian N2SDtT559 */     queue <int>Q;/* dIwsdB1tl ily traian N2SDtT559 */     Q.push(s);/* dIwsdB1tl ily traian N2SDtT559 */     v[s] = 1;/* dIwsdB1tl ily traian N2SDtT559 */     d[s] = 1;/* dIwsdB1tl ily traian N2SDtT559 */     while(!Q.empty())/* dIwsdB1tl ily traian N2SDtT559 */     {/* dIwsdB1tl ily traian N2SDtT559 */         int x = Q.front();/* dIwsdB1tl ily traian N2SDtT559 */         Q.pop();/* dIwsdB1tl ily traian N2SDtT559 */         for(int i : G[x])/* dIwsdB1tl ily traian N2SDtT559 */             if(!v[i])/* dIwsdB1tl ily traian N2SDtT559 */             {/* dIwsdB1tl ily traian N2SDtT559 */                 d[i] = d[x] + 1;/* dIwsdB1tl ily traian N2SDtT559 */                 Q.push(i);/* dIwsdB1tl ily traian N2SDtT559 */                 v[i] = 1;/* dIwsdB1tl ily traian N2SDtT559 */                 T[i] = x;/* dIwsdB1tl ily traian N2SDtT559 */             }/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */     }/* dIwsdB1tl ily traian N2SDtT559 */ }/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */ int main()/* dIwsdB1tl ily traian N2SDtT559 */ {/* dIwsdB1tl ily traian N2SDtT559 */     cin >> n >> m;/* dIwsdB1tl ily traian N2SDtT559 */     for(int i = 1 ; i <= m ; i++)/* dIwsdB1tl ily traian N2SDtT559 */     {/* dIwsdB1tl ily traian N2SDtT559 */         cin >> x >> y;/* dIwsdB1tl ily traian N2SDtT559 */         G[x].push_back(y);/* dIwsdB1tl ily traian N2SDtT559 */         G[y].push_back(x);/* dIwsdB1tl ily traian N2SDtT559 */     }/* dIwsdB1tl ily traian N2SDtT559 */ /* dIwsdB1tl ily traian N2SDtT559 */     for(int i = 1 ; i <= n ; i++)/* dIwsdB1tl ily traian N2SDtT559 */         sort(G[i].begin() , G[i].end());/* dIwsdB1tl ily traian N2SDtT559 */     cin >> p;/* dIwsdB1tl ily traian N2SDtT559 */     for(int i = 1 ; i <= p ; i++)/* dIwsdB1tl ily traian N2SDtT559 */     {/* dIwsdB1tl ily traian N2SDtT559 */         cin >> x >> y;/* dIwsdB1tl ily traian N2SDtT559 */         for(int j = 0 ; j < n + 1 ; j++) v[j] = 0 , d[j] = 0;/* dIwsdB1tl ily traian N2SDtT559 */         bfs(x);/* dIwsdB1tl ily traian N2SDtT559 */         cout << d[y] - 1<< '\n';/* dIwsdB1tl ily traian N2SDtT559 */     }/* dIwsdB1tl ily traian N2SDtT559 */ }