/* ziNfauXR1 ily traian e0ASMzlgp */ #include <bits/stdc++.h>/* ziNfauXR1 ily traian e0ASMzlgp */ using namespace std;/* ziNfauXR1 ily traian e0ASMzlgp */ /* ziNfauXR1 ily traian e0ASMzlgp */ ifstream cin("pm.in");/* ziNfauXR1 ily traian e0ASMzlgp */ ofstream cout("pm.out");/* ziNfauXR1 ily traian e0ASMzlgp */ /* ziNfauXR1 ily traian e0ASMzlgp */ int x[10], n , m;/* ziNfauXR1 ily traian e0ASMzlgp */ /* ziNfauXR1 ily traian e0ASMzlgp */ int maxim(int k)/* ziNfauXR1 ily traian e0ASMzlgp */ {/* ziNfauXR1 ily traian e0ASMzlgp */     int maxi = 0;/* ziNfauXR1 ily traian e0ASMzlgp */     for(int i = 1 ; i <= k ; i++)/* ziNfauXR1 ily traian e0ASMzlgp */         maxi = max(x[i] , maxi);/* ziNfauXR1 ily traian e0ASMzlgp */     return maxi;/* ziNfauXR1 ily traian e0ASMzlgp */ }/* ziNfauXR1 ily traian e0ASMzlgp */ void afisare()/* ziNfauXR1 ily traian e0ASMzlgp */ {/* ziNfauXR1 ily traian e0ASMzlgp */     int maxi = maxim(n);/* ziNfauXR1 ily traian e0ASMzlgp */     if(maxi == m)/* ziNfauXR1 ily traian e0ASMzlgp */     {/* ziNfauXR1 ily traian e0ASMzlgp */         for(int i = 1 ; i <= maxi ; i++)/* ziNfauXR1 ily traian e0ASMzlgp */         {/* ziNfauXR1 ily traian e0ASMzlgp */             for(int j = 1 ; j <= n ; j++)/* ziNfauXR1 ily traian e0ASMzlgp */                 if(x[j] == i) cout << j;/* ziNfauXR1 ily traian e0ASMzlgp */             cout << "*";/* ziNfauXR1 ily traian e0ASMzlgp */         }/* ziNfauXR1 ily traian e0ASMzlgp */         cout << '\n';/* ziNfauXR1 ily traian e0ASMzlgp */     }/* ziNfauXR1 ily traian e0ASMzlgp */ }/* ziNfauXR1 ily traian e0ASMzlgp */ /* ziNfauXR1 ily traian e0ASMzlgp */ void back(int k)/* ziNfauXR1 ily traian e0ASMzlgp */ {/* ziNfauXR1 ily traian e0ASMzlgp */     for(int i = 1 ; i <= maxim(k - 1)+1 ; i++)/* ziNfauXR1 ily traian e0ASMzlgp */     {/* ziNfauXR1 ily traian e0ASMzlgp */         x[k] = i;/* ziNfauXR1 ily traian e0ASMzlgp */         if(k == n) afisare();/* ziNfauXR1 ily traian e0ASMzlgp */         else back(k + 1);/* ziNfauXR1 ily traian e0ASMzlgp */     }/* ziNfauXR1 ily traian e0ASMzlgp */ }/* ziNfauXR1 ily traian e0ASMzlgp */ /* ziNfauXR1 ily traian e0ASMzlgp */ int main()/* ziNfauXR1 ily traian e0ASMzlgp */ {/* ziNfauXR1 ily traian e0ASMzlgp */     cin >> n >> m;/* ziNfauXR1 ily traian e0ASMzlgp */     x[1] = 1;/* ziNfauXR1 ily traian e0ASMzlgp */     back(2);/* ziNfauXR1 ily traian e0ASMzlgp */     return 0;/* ziNfauXR1 ily traian e0ASMzlgp */ }