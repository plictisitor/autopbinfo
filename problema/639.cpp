/* jT20ZNN4J ily traian aoy4qFFXS */ #include <bits/stdc++.h>/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ using namespace std;/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ ifstream cin("inaltime.in");/* jT20ZNN4J ily traian aoy4qFFXS */ ofstream cout("inaltime.out");/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ vector <int> G[101];/* jT20ZNN4J ily traian aoy4qFFXS */ int n  , p , x , y , k , T[102] , P[101] , q , d[101] , maxi;/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ void dfs(int x)/* jT20ZNN4J ily traian aoy4qFFXS */ {/* jT20ZNN4J ily traian aoy4qFFXS */     P[x] = 1;/* jT20ZNN4J ily traian aoy4qFFXS */     for(auto i:G[x])/* jT20ZNN4J ily traian aoy4qFFXS */         if(!P[i])/* jT20ZNN4J ily traian aoy4qFFXS */         {/* jT20ZNN4J ily traian aoy4qFFXS */             d[i] = d[x] + 1;/* jT20ZNN4J ily traian aoy4qFFXS */             dfs(i);/* jT20ZNN4J ily traian aoy4qFFXS */         }/* jT20ZNN4J ily traian aoy4qFFXS */ }/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */ int main()/* jT20ZNN4J ily traian aoy4qFFXS */ {/* jT20ZNN4J ily traian aoy4qFFXS */     cin >> n;/* jT20ZNN4J ily traian aoy4qFFXS */     for(int i = 1 ; i <= n ; i++)/* jT20ZNN4J ily traian aoy4qFFXS */     {/* jT20ZNN4J ily traian aoy4qFFXS */         cin >> T[i];/* jT20ZNN4J ily traian aoy4qFFXS */         if(T[i] != 0)/* jT20ZNN4J ily traian aoy4qFFXS */         {/* jT20ZNN4J ily traian aoy4qFFXS */             G[T[i]].push_back(i);/* jT20ZNN4J ily traian aoy4qFFXS */             G[i].push_back(T[i]);/* jT20ZNN4J ily traian aoy4qFFXS */         }/* jT20ZNN4J ily traian aoy4qFFXS */         if(T[i] == 0) p = i;/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */     }/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */     dfs(p);/* jT20ZNN4J ily traian aoy4qFFXS */     for(int i = 1 ; i <= n ; i++)/* jT20ZNN4J ily traian aoy4qFFXS */         maxi = max(maxi , d[i]);/* jT20ZNN4J ily traian aoy4qFFXS */ /* jT20ZNN4J ily traian aoy4qFFXS */     cout << maxi + 1;/* jT20ZNN4J ily traian aoy4qFFXS */ }