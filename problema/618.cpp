/* inPnLdwaw ily traian JFdbJm53M */ #include <bits/stdc++.h>/* inPnLdwaw ily traian JFdbJm53M */ /* inPnLdwaw ily traian JFdbJm53M */ using namespace std;/* inPnLdwaw ily traian JFdbJm53M */ /* inPnLdwaw ily traian JFdbJm53M */ int main()/* inPnLdwaw ily traian JFdbJm53M */ {/* inPnLdwaw ily traian JFdbJm53M */     int n;/* inPnLdwaw ily traian JFdbJm53M */     int INF = 10000 + 1;/* inPnLdwaw ily traian JFdbJm53M */     cin >> n;/* inPnLdwaw ily traian JFdbJm53M */     int a[1001];/* inPnLdwaw ily traian JFdbJm53M */     for(int i = 1; i <= n; ++i)/* inPnLdwaw ily traian JFdbJm53M */         cin >> a[i];/* inPnLdwaw ily traian JFdbJm53M */ /* inPnLdwaw ily traian JFdbJm53M */     for(int i = 1; i <= n; ++i){/* inPnLdwaw ily traian JFdbJm53M */         int min = INF, poz = 0;/* inPnLdwaw ily traian JFdbJm53M */         for(int j = 1; j <= n; ++j)/* inPnLdwaw ily traian JFdbJm53M */             if(a[j] < min)/* inPnLdwaw ily traian JFdbJm53M */                 min = a[j], poz = j;/* inPnLdwaw ily traian JFdbJm53M */         a[poz] = INF;/* inPnLdwaw ily traian JFdbJm53M */         cout << poz << ' ';/* inPnLdwaw ily traian JFdbJm53M */     }/* inPnLdwaw ily traian JFdbJm53M */ /* inPnLdwaw ily traian JFdbJm53M */     return 0;/* inPnLdwaw ily traian JFdbJm53M */ }