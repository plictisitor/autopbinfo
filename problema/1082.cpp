/* FZEQQkiaZ ily traian HoGKEu6La */ #include <bits/stdc++.h>/* FZEQQkiaZ ily traian HoGKEu6La */ using namespace std;/* FZEQQkiaZ ily traian HoGKEu6La */ ifstream cin("triunghi3.in");/* FZEQQkiaZ ily traian HoGKEu6La */ ofstream cout("triunghi3.out");/* FZEQQkiaZ ily traian HoGKEu6La */ long long a[1001][1001], n, pz;/* FZEQQkiaZ ily traian HoGKEu6La */ struct st/* FZEQQkiaZ ily traian HoGKEu6La */ {/* FZEQQkiaZ ily traian HoGKEu6La */     long long nr, poz;/* FZEQQkiaZ ily traian HoGKEu6La */ } x[1001];/* FZEQQkiaZ ily traian HoGKEu6La */ int main()/* FZEQQkiaZ ily traian HoGKEu6La */ {/* FZEQQkiaZ ily traian HoGKEu6La */     cin >> n;/* FZEQQkiaZ ily traian HoGKEu6La */     for (int i = 1; i <= n; i++)/* FZEQQkiaZ ily traian HoGKEu6La */     {/* FZEQQkiaZ ily traian HoGKEu6La */         cin >> x[i].poz >> x[i].nr;/* FZEQQkiaZ ily traian HoGKEu6La */         a[n-i+1][x[i].poz] = x[i].nr;/* FZEQQkiaZ ily traian HoGKEu6La */     }/* FZEQQkiaZ ily traian HoGKEu6La */     for (int i =2; i<=n; i++)/* FZEQQkiaZ ily traian HoGKEu6La */     {/* FZEQQkiaZ ily traian HoGKEu6La */         pz = x[n-i+1].poz-1;/* FZEQQkiaZ ily traian HoGKEu6La */         while (pz >= 1)/* FZEQQkiaZ ily traian HoGKEu6La */         {/* FZEQQkiaZ ily traian HoGKEu6La */             a[i][pz] = a[i-1][pz]-a[i][pz+1];/* FZEQQkiaZ ily traian HoGKEu6La */             pz--;/* FZEQQkiaZ ily traian HoGKEu6La */         }/* FZEQQkiaZ ily traian HoGKEu6La */         pz = x[n-i+1].poz+1;/* FZEQQkiaZ ily traian HoGKEu6La */         while (pz <= i)/* FZEQQkiaZ ily traian HoGKEu6La */         {/* FZEQQkiaZ ily traian HoGKEu6La */             a[i][pz] = a[i-1][pz-1]-a[i][pz-1];/* FZEQQkiaZ ily traian HoGKEu6La */             pz++;/* FZEQQkiaZ ily traian HoGKEu6La */         }/* FZEQQkiaZ ily traian HoGKEu6La */     }/* FZEQQkiaZ ily traian HoGKEu6La */     for(int i =1; i<=n; i++)/* FZEQQkiaZ ily traian HoGKEu6La */         cout << a[n][i] << ' ';/* FZEQQkiaZ ily traian HoGKEu6La */     return 0;/* FZEQQkiaZ ily traian HoGKEu6La */ }