/* iZnaPeEqU ily traian y53AMm8fr */ #include <bits/stdc++.h>/* iZnaPeEqU ily traian y53AMm8fr */ /* iZnaPeEqU ily traian y53AMm8fr */ using namespace std;/* iZnaPeEqU ily traian y53AMm8fr */ int main()/* iZnaPeEqU ily traian y53AMm8fr */ {/* iZnaPeEqU ily traian y53AMm8fr */     char s[1001];/* iZnaPeEqU ily traian y53AMm8fr */     cin >> s;/* iZnaPeEqU ily traian y53AMm8fr */     int n = strlen(s);/* iZnaPeEqU ily traian y53AMm8fr */     for(int i = 0 ; i < n ; i++)/* iZnaPeEqU ily traian y53AMm8fr */         for(int j = 0 ; j < n - 1 ; j++)/* iZnaPeEqU ily traian y53AMm8fr */             if(s[j + 1] < s[j])/* iZnaPeEqU ily traian y53AMm8fr */             {/* iZnaPeEqU ily traian y53AMm8fr */                 char aux;/* iZnaPeEqU ily traian y53AMm8fr */                 aux = s[j];/* iZnaPeEqU ily traian y53AMm8fr */                 s[j] = s[j + 1];/* iZnaPeEqU ily traian y53AMm8fr */                 s[j + 1] = aux;/* iZnaPeEqU ily traian y53AMm8fr */             }/* iZnaPeEqU ily traian y53AMm8fr */     cout << s;/* iZnaPeEqU ily traian y53AMm8fr */     return 0;/* iZnaPeEqU ily traian y53AMm8fr */ }