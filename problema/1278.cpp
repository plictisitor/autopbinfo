/* 897AwID1m ily traian o712jSHtk */ #include <bits/stdc++.h>/* 897AwID1m ily traian o712jSHtk */ using namespace std;/* 897AwID1m ily traian o712jSHtk */ /* 897AwID1m ily traian o712jSHtk */ ifstream cin("produscartezian2.in");/* 897AwID1m ily traian o712jSHtk */ ofstream cout("produscartezian2.out");/* 897AwID1m ily traian o712jSHtk */ /* 897AwID1m ily traian o712jSHtk */ int n , m , x[10] , a[11];/* 897AwID1m ily traian o712jSHtk */ /* 897AwID1m ily traian o712jSHtk */ void afisare()/* 897AwID1m ily traian o712jSHtk */ {/* 897AwID1m ily traian o712jSHtk */     for(int i = 1 ; i <= n ; i++)/* 897AwID1m ily traian o712jSHtk */         cout << x[i] << ' ';/* 897AwID1m ily traian o712jSHtk */     cout << '\n';/* 897AwID1m ily traian o712jSHtk */ }/* 897AwID1m ily traian o712jSHtk */ /* 897AwID1m ily traian o712jSHtk */ void back(int k)/* 897AwID1m ily traian o712jSHtk */ {/* 897AwID1m ily traian o712jSHtk */     if(k > n)/* 897AwID1m ily traian o712jSHtk */     {/* 897AwID1m ily traian o712jSHtk */         afisare();/* 897AwID1m ily traian o712jSHtk */         return;/* 897AwID1m ily traian o712jSHtk */     }/* 897AwID1m ily traian o712jSHtk */     else/* 897AwID1m ily traian o712jSHtk */     {/* 897AwID1m ily traian o712jSHtk */         for(int i = 1 ; i <= a[k] ; i++)/* 897AwID1m ily traian o712jSHtk */         {/* 897AwID1m ily traian o712jSHtk */             x[k] = i;/* 897AwID1m ily traian o712jSHtk */             back(k + 1);/* 897AwID1m ily traian o712jSHtk */         }/* 897AwID1m ily traian o712jSHtk */     }/* 897AwID1m ily traian o712jSHtk */ }/* 897AwID1m ily traian o712jSHtk */ /* 897AwID1m ily traian o712jSHtk */ int main()/* 897AwID1m ily traian o712jSHtk */ {/* 897AwID1m ily traian o712jSHtk */     cin >> n;/* 897AwID1m ily traian o712jSHtk */     for(int i = 1 ; i <= n ; i++)/* 897AwID1m ily traian o712jSHtk */         cin >> a[i];/* 897AwID1m ily traian o712jSHtk */     back(1);/* 897AwID1m ily traian o712jSHtk */ }