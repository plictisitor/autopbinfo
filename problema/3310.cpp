/* hRXSjFRxJ ily traian ZogfCbt5n */ #include <bits/stdc++.h>/* hRXSjFRxJ ily traian ZogfCbt5n */ using namespace std;/* hRXSjFRxJ ily traian ZogfCbt5n */ /* hRXSjFRxJ ily traian ZogfCbt5n */ ifstream cin("afin.in");/* hRXSjFRxJ ily traian ZogfCbt5n */ ofstream cout("afin.out");/* hRXSjFRxJ ily traian ZogfCbt5n */ /* hRXSjFRxJ ily traian ZogfCbt5n */ char s[10001];/* hRXSjFRxJ ily traian ZogfCbt5n */ /* hRXSjFRxJ ily traian ZogfCbt5n */ int main(){/* hRXSjFRxJ ily traian ZogfCbt5n */     int a, b;/* hRXSjFRxJ ily traian ZogfCbt5n */     cin >> a >> b;/* hRXSjFRxJ ily traian ZogfCbt5n */     cin >> s;/* hRXSjFRxJ ily traian ZogfCbt5n */     int i = 0;/* hRXSjFRxJ ily traian ZogfCbt5n */     while(s[i]){/* hRXSjFRxJ ily traian ZogfCbt5n */         int x = s[i] - 'a';/* hRXSjFRxJ ily traian ZogfCbt5n */         int d = (a * x + b) % 26;/* hRXSjFRxJ ily traian ZogfCbt5n */         d += 'a';/* hRXSjFRxJ ily traian ZogfCbt5n */         s[i] = (char) d;/* hRXSjFRxJ ily traian ZogfCbt5n */         i++;/* hRXSjFRxJ ily traian ZogfCbt5n */     }/* hRXSjFRxJ ily traian ZogfCbt5n */     cout << s;/* hRXSjFRxJ ily traian ZogfCbt5n */     return 0;/* hRXSjFRxJ ily traian ZogfCbt5n */ }