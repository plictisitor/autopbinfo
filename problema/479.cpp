/* GcS2Pe3bF ily traian iBvuZxeHV */ #include <bits/stdc++.h>/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ using namespace std;/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ ifstream cin("lantmaxim.in");/* GcS2Pe3bF ily traian iBvuZxeHV */ ofstream cout("lantmaxim.out");/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ vector <int>G[101];/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ int n , m , x , y , P[30] , X[30] , p , q , rez[30] , maxi;/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ void afisare(int k)/* GcS2Pe3bF ily traian iBvuZxeHV */ {/* GcS2Pe3bF ily traian iBvuZxeHV */     maxi = k;/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= k ; i++)/* GcS2Pe3bF ily traian iBvuZxeHV */         rez[i] = X[i];/* GcS2Pe3bF ily traian iBvuZxeHV */ }/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ int ok(int k)/* GcS2Pe3bF ily traian iBvuZxeHV */ {/* GcS2Pe3bF ily traian iBvuZxeHV */     int ok = 0;/* GcS2Pe3bF ily traian iBvuZxeHV */     for(auto x:G[X[k]])/* GcS2Pe3bF ily traian iBvuZxeHV */         if(x == X[k - 1]) ok++;/* GcS2Pe3bF ily traian iBvuZxeHV */     if(ok != 0)return 1;/* GcS2Pe3bF ily traian iBvuZxeHV */     else return 0;/* GcS2Pe3bF ily traian iBvuZxeHV */ }/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ void back(int k)/* GcS2Pe3bF ily traian iBvuZxeHV */ {/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= n ; i++)/* GcS2Pe3bF ily traian iBvuZxeHV */         if(!P[i])/* GcS2Pe3bF ily traian iBvuZxeHV */         {/* GcS2Pe3bF ily traian iBvuZxeHV */             P[i] = 1;/* GcS2Pe3bF ily traian iBvuZxeHV */             X[k] = i;/* GcS2Pe3bF ily traian iBvuZxeHV */             if(ok(k))/* GcS2Pe3bF ily traian iBvuZxeHV */                 if(X[k] == q && k > maxi)afisare(k);/* GcS2Pe3bF ily traian iBvuZxeHV */                 else back(k + 1);/* GcS2Pe3bF ily traian iBvuZxeHV */             P[i] = 0;/* GcS2Pe3bF ily traian iBvuZxeHV */         }/* GcS2Pe3bF ily traian iBvuZxeHV */ }/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */ int main()/* GcS2Pe3bF ily traian iBvuZxeHV */ {/* GcS2Pe3bF ily traian iBvuZxeHV */     cin >> n >> m;/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= m ; i++)/* GcS2Pe3bF ily traian iBvuZxeHV */     {/* GcS2Pe3bF ily traian iBvuZxeHV */         cin >> x >> y;/* GcS2Pe3bF ily traian iBvuZxeHV */         G[x].push_back(y);/* GcS2Pe3bF ily traian iBvuZxeHV */         G[y].push_back(x);/* GcS2Pe3bF ily traian iBvuZxeHV */     }/* GcS2Pe3bF ily traian iBvuZxeHV */     cin >> p >> q;/* GcS2Pe3bF ily traian iBvuZxeHV */     X[1] = p;/* GcS2Pe3bF ily traian iBvuZxeHV */     P[p] = 1;/* GcS2Pe3bF ily traian iBvuZxeHV */     back(2);/* GcS2Pe3bF ily traian iBvuZxeHV */ /* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= maxi ; i++)/* GcS2Pe3bF ily traian iBvuZxeHV */         cout << rez[i] << " ";/* GcS2Pe3bF ily traian iBvuZxeHV */ }