/* Yk6hrJ7R8 ily traian xzkC74pr9 */ #include <bits/stdc++.h>/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ using namespace std;/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ ifstream cin("subarbore.in");/* Yk6hrJ7R8 ily traian xzkC74pr9 */ ofstream cout("subarbore.out");/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ vector <int> G[101];/* Yk6hrJ7R8 ily traian xzkC74pr9 */ int n  , p , x , y , k , T[102] , P[101] , rez[101] , cnt;/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ void dfs(int x)/* Yk6hrJ7R8 ily traian xzkC74pr9 */ {/* Yk6hrJ7R8 ily traian xzkC74pr9 */     P[x] = 1;/* Yk6hrJ7R8 ily traian xzkC74pr9 */     rez[++cnt] = x;/* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(auto i:G[x])/* Yk6hrJ7R8 ily traian xzkC74pr9 */         if(!P[i]) dfs(i);/* Yk6hrJ7R8 ily traian xzkC74pr9 */ }/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ int main()/* Yk6hrJ7R8 ily traian xzkC74pr9 */ {/* Yk6hrJ7R8 ily traian xzkC74pr9 */     cin >> n >> p;/* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(int i = 1 ; i <= n ; i++)/* Yk6hrJ7R8 ily traian xzkC74pr9 */     {/* Yk6hrJ7R8 ily traian xzkC74pr9 */         cin >> T[i];/* Yk6hrJ7R8 ily traian xzkC74pr9 */         if(T[i] != 0)/* Yk6hrJ7R8 ily traian xzkC74pr9 */             G[T[i]].push_back(i);/* Yk6hrJ7R8 ily traian xzkC74pr9 */     }/* Yk6hrJ7R8 ily traian xzkC74pr9 */     dfs(p);/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */     sort(rez + 1 , rez + cnt + 1);/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(int i = 1 ; i <= cnt ; i++)/* Yk6hrJ7R8 ily traian xzkC74pr9 */         cout << rez[i] << " ";/* Yk6hrJ7R8 ily traian xzkC74pr9 */ /* Yk6hrJ7R8 ily traian xzkC74pr9 */ }