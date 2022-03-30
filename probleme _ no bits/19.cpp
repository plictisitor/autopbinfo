/* m4NJQBvGy ily traian mOzGmlONl */ #include <fstream>
/* m4NJQBvGy ily traian mOzGmlONl */ #include <vector>
/* m4NJQBvGy ily traian mOzGmlONl */ #include <queue>
/* m4NJQBvGy ily traian mOzGmlONl */ #include <algorithm>
/* m4NJQBvGy ily traian mOzGmlONl */ using namespace std;
/* m4NJQBvGy ily traian mOzGmlONl */ 
/* m4NJQBvGy ily traian mOzGmlONl */ ifstream cin("BFS.in");
/* m4NJQBvGy ily traian mOzGmlONl */ ofstream cout("BFS.out");
/* m4NJQBvGy ily traian mOzGmlONl */ 
/* m4NJQBvGy ily traian mOzGmlONl */ vector  G[1001];
/* m4NJQBvGy ily traian mOzGmlONl */ queue  Q;
/* m4NJQBvGy ily traian mOzGmlONl */ int n , m , x , y , nod , d[1001] , T[1001] , v[1001];
/* m4NJQBvGy ily traian mOzGmlONl */ 
/* m4NJQBvGy ily traian mOzGmlONl */ void bfs(int nod)
/* m4NJQBvGy ily traian mOzGmlONl */ {
/* m4NJQBvGy ily traian mOzGmlONl */     d[nod] = 0 , v[nod] = 1 , T[nod] = 0;
/* m4NJQBvGy ily traian mOzGmlONl */     Q.push(nod);
/* m4NJQBvGy ily traian mOzGmlONl */     while(!Q.empty())
/* m4NJQBvGy ily traian mOzGmlONl */     {
/* m4NJQBvGy ily traian mOzGmlONl */         int x = Q.front();
/* m4NJQBvGy ily traian mOzGmlONl */         Q.pop();
/* m4NJQBvGy ily traian mOzGmlONl */         for(auto i : G[x])
/* m4NJQBvGy ily traian mOzGmlONl */             if(!v[i])
/* m4NJQBvGy ily traian mOzGmlONl */             {
/* m4NJQBvGy ily traian mOzGmlONl */                 v[i] = 1;
/* m4NJQBvGy ily traian mOzGmlONl */                 d[i] = d[x] + 1;
/* m4NJQBvGy ily traian mOzGmlONl */                 T[i] = x;
/* m4NJQBvGy ily traian mOzGmlONl */                 Q.push(i);
/* m4NJQBvGy ily traian mOzGmlONl */             }
/* m4NJQBvGy ily traian mOzGmlONl */         cout << x << " "; } } int main() { cin >> n >> m >> nod;
/* m4NJQBvGy ily traian mOzGmlONl */     for(int i = 1 ; i <= m ; i++) { cin >> x >> y;
/* m4NJQBvGy ily traian mOzGmlONl */         G[x].push_back(y);
/* m4NJQBvGy ily traian mOzGmlONl */         G[y].push_back(x);
/* m4NJQBvGy ily traian mOzGmlONl */     }
/* m4NJQBvGy ily traian mOzGmlONl */ 
/* m4NJQBvGy ily traian mOzGmlONl */     for(int i = 1 ; i <= n ; i++)
/* m4NJQBvGy ily traian mOzGmlONl */         sort(G[i].begin() , G[i].end());
/* m4NJQBvGy ily traian mOzGmlONl */ 
/* m4NJQBvGy ily traian mOzGmlONl */     bfs(nod);
/* m4NJQBvGy ily traian mOzGmlONl */     return 0;
/* m4NJQBvGy ily traian mOzGmlONl */ }