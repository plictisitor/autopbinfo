/* tS8f7NtAr ily traian ETvZ7qDhC */ #include <bits/stdc++.h>/* tS8f7NtAr ily traian ETvZ7qDhC */ /* tS8f7NtAr ily traian ETvZ7qDhC */ using namespace std;/* tS8f7NtAr ily traian ETvZ7qDhC */ /* tS8f7NtAr ily traian ETvZ7qDhC */ int n,a[1005];/* tS8f7NtAr ily traian ETvZ7qDhC */ /* tS8f7NtAr ily traian ETvZ7qDhC */ /* tS8f7NtAr ily traian ETvZ7qDhC */ int main(){/* tS8f7NtAr ily traian ETvZ7qDhC */     cin >> n;/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int i=1; i<=n; ++i)/* tS8f7NtAr ily traian ETvZ7qDhC */         cin >> a[i];/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int p = n ; p >= 1 ; p--)/* tS8f7NtAr ily traian ETvZ7qDhC */         if( a[p] % 2 == 0 ){/* tS8f7NtAr ily traian ETvZ7qDhC */             for(int i = p ; i<n ; ++i)/* tS8f7NtAr ily traian ETvZ7qDhC */                 a[i] = a[i+1];/* tS8f7NtAr ily traian ETvZ7qDhC */             n--;/* tS8f7NtAr ily traian ETvZ7qDhC */         }/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int i=1;i<=n;++i)/* tS8f7NtAr ily traian ETvZ7qDhC */         cout << a[i] << " ";/* tS8f7NtAr ily traian ETvZ7qDhC */     return 0;/* tS8f7NtAr ily traian ETvZ7qDhC */ }