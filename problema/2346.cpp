/* 4v9ALMU7y ily traian FSEVtlPF2 */ #include <bits/stdc++.h>/* 4v9ALMU7y ily traian FSEVtlPF2 */ using namespace std;/* 4v9ALMU7y ily traian FSEVtlPF2 */ /* 4v9ALMU7y ily traian FSEVtlPF2 */ ifstream cin("paritatesiruri.in");/* 4v9ALMU7y ily traian FSEVtlPF2 */ ofstream cout("paritatesiruri.out");/* 4v9ALMU7y ily traian FSEVtlPF2 */ /* 4v9ALMU7y ily traian FSEVtlPF2 */ int main()/* 4v9ALMU7y ily traian FSEVtlPF2 */ {/* 4v9ALMU7y ily traian FSEVtlPF2 */     int n;/* 4v9ALMU7y ily traian FSEVtlPF2 */     cin >> n;/* 4v9ALMU7y ily traian FSEVtlPF2 */     for(int q = 1 ; q <= n ; ++q)/* 4v9ALMU7y ily traian FSEVtlPF2 */     {/* 4v9ALMU7y ily traian FSEVtlPF2 */         char s[1000];/* 4v9ALMU7y ily traian FSEVtlPF2 */         cin >> s;/* 4v9ALMU7y ily traian FSEVtlPF2 */         int i = 1;/* 4v9ALMU7y ily traian FSEVtlPF2 */         while(s[i]!='\0')/* 4v9ALMU7y ily traian FSEVtlPF2 */         {/* 4v9ALMU7y ily traian FSEVtlPF2 */             if(i % 2 == 1)/* 4v9ALMU7y ily traian FSEVtlPF2 */             cout << s[i];/* 4v9ALMU7y ily traian FSEVtlPF2 */             i++;/* 4v9ALMU7y ily traian FSEVtlPF2 */         }/* 4v9ALMU7y ily traian FSEVtlPF2 */         i = 0;/* 4v9ALMU7y ily traian FSEVtlPF2 */         cout << ' ';/* 4v9ALMU7y ily traian FSEVtlPF2 */         while(s[i]!='\0')/* 4v9ALMU7y ily traian FSEVtlPF2 */         {/* 4v9ALMU7y ily traian FSEVtlPF2 */             if(i % 2 == 0)/* 4v9ALMU7y ily traian FSEVtlPF2 */             cout << s[i];/* 4v9ALMU7y ily traian FSEVtlPF2 */             i++;/* 4v9ALMU7y ily traian FSEVtlPF2 */         }/* 4v9ALMU7y ily traian FSEVtlPF2 */         cout << '\n';/* 4v9ALMU7y ily traian FSEVtlPF2 */     }/* 4v9ALMU7y ily traian FSEVtlPF2 */     return 0;/* 4v9ALMU7y ily traian FSEVtlPF2 */ }