/* VBl8VJrdw ily traian i3AZwMmCQ */ #include <bits/stdc++.h>/* VBl8VJrdw ily traian i3AZwMmCQ */ using namespace std;/* VBl8VJrdw ily traian i3AZwMmCQ */ /* VBl8VJrdw ily traian i3AZwMmCQ */ int main()/* VBl8VJrdw ily traian i3AZwMmCQ */ {/* VBl8VJrdw ily traian i3AZwMmCQ */     int a , b;/* VBl8VJrdw ily traian i3AZwMmCQ */     cin >> a >> b;/* VBl8VJrdw ily traian i3AZwMmCQ */     cout << min(a , b) << ' ';/* VBl8VJrdw ily traian i3AZwMmCQ */     int cnt = 0;/* VBl8VJrdw ily traian i3AZwMmCQ */     while(a!=0 && b!=0)/* VBl8VJrdw ily traian i3AZwMmCQ */     {/* VBl8VJrdw ily traian i3AZwMmCQ */         if(a > b)/* VBl8VJrdw ily traian i3AZwMmCQ */         {/* VBl8VJrdw ily traian i3AZwMmCQ */             int x = a/b;/* VBl8VJrdw ily traian i3AZwMmCQ */             a-=(x*b);/* VBl8VJrdw ily traian i3AZwMmCQ */             cnt += x;/* VBl8VJrdw ily traian i3AZwMmCQ */         }/* VBl8VJrdw ily traian i3AZwMmCQ */         else/* VBl8VJrdw ily traian i3AZwMmCQ */         {/* VBl8VJrdw ily traian i3AZwMmCQ */             int x = b/a;/* VBl8VJrdw ily traian i3AZwMmCQ */             b-=(x*a);/* VBl8VJrdw ily traian i3AZwMmCQ */             cnt += x;/* VBl8VJrdw ily traian i3AZwMmCQ */         }/* VBl8VJrdw ily traian i3AZwMmCQ */     }/* VBl8VJrdw ily traian i3AZwMmCQ */     cout << cnt;/* VBl8VJrdw ily traian i3AZwMmCQ */     return 0;/* VBl8VJrdw ily traian i3AZwMmCQ */ }