/* FpOV4GEYC ily traian Uy6LbbJYS */ #include <bits/stdc++.h>/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ using namespace std;/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ vector <int> G[101];/* FpOV4GEYC ily traian Uy6LbbJYS */ vector <int> H[101];/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ int n , m , x , y , k , S[101] , D[101] , c , cnt;/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ void dfs_succ(int nod , int val)/* FpOV4GEYC ily traian Uy6LbbJYS */ {/* FpOV4GEYC ily traian Uy6LbbJYS */     S[nod] = val;/* FpOV4GEYC ily traian Uy6LbbJYS */     for(auto p : G[nod])/* FpOV4GEYC ily traian Uy6LbbJYS */         if(!S[p]) dfs_succ(p , val);/* FpOV4GEYC ily traian Uy6LbbJYS */ }/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ void dfs_pred(int nod , int val)/* FpOV4GEYC ily traian Uy6LbbJYS */ {/* FpOV4GEYC ily traian Uy6LbbJYS */     D[nod] = val;/* FpOV4GEYC ily traian Uy6LbbJYS */     for(auto p : H[nod])/* FpOV4GEYC ily traian Uy6LbbJYS */         if(!D[p]) dfs_pred(p , val);/* FpOV4GEYC ily traian Uy6LbbJYS */ }/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */ int main()/* FpOV4GEYC ily traian Uy6LbbJYS */ {/* FpOV4GEYC ily traian Uy6LbbJYS */     cin >> n >> m >> k;/* FpOV4GEYC ily traian Uy6LbbJYS */     for(int i = 1 ; i <= m ; i++)/* FpOV4GEYC ily traian Uy6LbbJYS */     {/* FpOV4GEYC ily traian Uy6LbbJYS */         cin >> x >> y;/* FpOV4GEYC ily traian Uy6LbbJYS */         G[x].push_back(y);/* FpOV4GEYC ily traian Uy6LbbJYS */         H[y].push_back(x);/* FpOV4GEYC ily traian Uy6LbbJYS */     }/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */     for(int i = 1 ; i <= n ; i++)/* FpOV4GEYC ily traian Uy6LbbJYS */         if(!S[i])/* FpOV4GEYC ily traian Uy6LbbJYS */         {/* FpOV4GEYC ily traian Uy6LbbJYS */             c++;/* FpOV4GEYC ily traian Uy6LbbJYS */             dfs_succ(i , c);/* FpOV4GEYC ily traian Uy6LbbJYS */             dfs_pred(i , c);/* FpOV4GEYC ily traian Uy6LbbJYS */             for(int j = 1 ; j <= n ; j++)/* FpOV4GEYC ily traian Uy6LbbJYS */                 if(S[j] != D[j]) S[j] = D[j] = 0;/* FpOV4GEYC ily traian Uy6LbbJYS */         }/* FpOV4GEYC ily traian Uy6LbbJYS */ /* FpOV4GEYC ily traian Uy6LbbJYS */     for(int i = 1 ; i <= n ; i++)/* FpOV4GEYC ily traian Uy6LbbJYS */         if(S[i] == S[k]) cnt++;/* FpOV4GEYC ily traian Uy6LbbJYS */     cout << cnt;/* FpOV4GEYC ily traian Uy6LbbJYS */ }