/* uZW6wORoQ ily traian jrc32c5KN */ #include <bits/stdc++.h>/* uZW6wORoQ ily traian jrc32c5KN */ /* uZW6wORoQ ily traian jrc32c5KN */ using namespace std;/* uZW6wORoQ ily traian jrc32c5KN */ /* uZW6wORoQ ily traian jrc32c5KN */ ifstream cin("permrep.in");/* uZW6wORoQ ily traian jrc32c5KN */ ofstream cout("permrep.out");/* uZW6wORoQ ily traian jrc32c5KN */ /* uZW6wORoQ ily traian jrc32c5KN */ int n , p[30];/* uZW6wORoQ ily traian jrc32c5KN */ char s[256] , cuv[256];/* uZW6wORoQ ily traian jrc32c5KN */ /* uZW6wORoQ ily traian jrc32c5KN */ void afis()/* uZW6wORoQ ily traian jrc32c5KN */ {/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 1 ; i <= n ; i++)/* uZW6wORoQ ily traian jrc32c5KN */         cout << s[i];/* uZW6wORoQ ily traian jrc32c5KN */     cout << '\n';/* uZW6wORoQ ily traian jrc32c5KN */ }/* uZW6wORoQ ily traian jrc32c5KN */ void back(int k)/* uZW6wORoQ ily traian jrc32c5KN */ {/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 0 ; i < 30 ; i++)/* uZW6wORoQ ily traian jrc32c5KN */         if(p[i] > 0)/* uZW6wORoQ ily traian jrc32c5KN */         {/* uZW6wORoQ ily traian jrc32c5KN */             p[i]--;/* uZW6wORoQ ily traian jrc32c5KN */             s[k] = i + 'a';/* uZW6wORoQ ily traian jrc32c5KN */             if(k == n) afis();/* uZW6wORoQ ily traian jrc32c5KN */             else back(k + 1);/* uZW6wORoQ ily traian jrc32c5KN */             p[i]++;/* uZW6wORoQ ily traian jrc32c5KN */         }/* uZW6wORoQ ily traian jrc32c5KN */ }/* uZW6wORoQ ily traian jrc32c5KN */ /* uZW6wORoQ ily traian jrc32c5KN */ int main()/* uZW6wORoQ ily traian jrc32c5KN */ {/* uZW6wORoQ ily traian jrc32c5KN */     cin >> cuv;/* uZW6wORoQ ily traian jrc32c5KN */     n = strlen(cuv);/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 1; i <= n; ++ i) p[cuv[i - 1] - 'a'] ++;/* uZW6wORoQ ily traian jrc32c5KN */     back(1);/* uZW6wORoQ ily traian jrc32c5KN */     return 0;/* uZW6wORoQ ily traian jrc32c5KN */ }