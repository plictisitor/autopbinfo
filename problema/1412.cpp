/* hcwgf7ijw ily traian s2IBQ3V6P */ #include <bits/stdc++.h>/* hcwgf7ijw ily traian s2IBQ3V6P */ using namespace std;/* hcwgf7ijw ily traian s2IBQ3V6P */ /* hcwgf7ijw ily traian s2IBQ3V6P */ int main ()/* hcwgf7ijw ily traian s2IBQ3V6P */ {/* hcwgf7ijw ily traian s2IBQ3V6P */     int n;/* hcwgf7ijw ily traian s2IBQ3V6P */     int c;/* hcwgf7ijw ily traian s2IBQ3V6P */     cin >> c;/* hcwgf7ijw ily traian s2IBQ3V6P */     cin >> n;/* hcwgf7ijw ily traian s2IBQ3V6P */     if (c==1)/* hcwgf7ijw ily traian s2IBQ3V6P */     for (int i = 1; i <= n; ++i)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= n; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << i;/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << endl;/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     if (c==3)/* hcwgf7ijw ily traian s2IBQ3V6P */     for (int i = 1; i <= n; ++i)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= n*2; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << i;/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << endl;/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     if (c==2)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */     for (int i = 1; i <= n; ++i)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */         // pe linia i scriu n - i spatii/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= n - i; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << ' ';/* hcwgf7ijw ily traian s2IBQ3V6P */             /* hcwgf7ijw ily traian s2IBQ3V6P */         // mai scriu 2 * i - 1 valori de i/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= 2 * i - 1; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << i;/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << '\n';/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     /* hcwgf7ijw ily traian s2IBQ3V6P */     /* hcwgf7ijw ily traian s2IBQ3V6P */     for (int i = 1; i < n; ++i)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */         // scriem i spatii pe linia i/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= i; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << ' ';/* hcwgf7ijw ily traian s2IBQ3V6P */             /* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= 2 * (n - i) - 1; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << n - i;/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << '\n';/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     if (c==4)/* hcwgf7ijw ily traian s2IBQ3V6P */     for (int i = 1; i <= n; ++i)/* hcwgf7ijw ily traian s2IBQ3V6P */     {/* hcwgf7ijw ily traian s2IBQ3V6P */         // pe linia i scriu n - i spatii/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= n - i; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << ' ';/* hcwgf7ijw ily traian s2IBQ3V6P */             /* hcwgf7ijw ily traian s2IBQ3V6P */         // mai scriu 2 * i - 1 valori de i/* hcwgf7ijw ily traian s2IBQ3V6P */         for (int j = 1; j <= 2 * i - 1; ++j)/* hcwgf7ijw ily traian s2IBQ3V6P */             cout << i;/* hcwgf7ijw ily traian s2IBQ3V6P */         cout << '\n';/* hcwgf7ijw ily traian s2IBQ3V6P */     }/* hcwgf7ijw ily traian s2IBQ3V6P */     return 0;  /* hcwgf7ijw ily traian s2IBQ3V6P */ }