/* 2pxoVqqIG ily traian Bu0xp4h6u */ #include <bits/stdc++.h>/* 2pxoVqqIG ily traian Bu0xp4h6u */ /* 2pxoVqqIG ily traian Bu0xp4h6u */ using namespace std;/* 2pxoVqqIG ily traian Bu0xp4h6u */ int prim(int n)/* 2pxoVqqIG ily traian Bu0xp4h6u */ {/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n==0 || n==1) return 0;/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n==2) return 1;/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n %2==0) return 0;/* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i=3;i*i<=n;i=i+2)/* 2pxoVqqIG ily traian Bu0xp4h6u */     {/* 2pxoVqqIG ily traian Bu0xp4h6u */         if(n%i==0) return 0;/* 2pxoVqqIG ily traian Bu0xp4h6u */     }/* 2pxoVqqIG ily traian Bu0xp4h6u */     return 1;/* 2pxoVqqIG ily traian Bu0xp4h6u */ }/* 2pxoVqqIG ily traian Bu0xp4h6u */ int main()/* 2pxoVqqIG ily traian Bu0xp4h6u */ {/* 2pxoVqqIG ily traian Bu0xp4h6u */     int n , m, a[101][101];/* 2pxoVqqIG ily traian Bu0xp4h6u */     cin >> n >> m;/* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i = 0 ;i < n; ++i)/* 2pxoVqqIG ily traian Bu0xp4h6u */         for(int j = 0 ; j < m; ++j) cin >> a[i][j];/* 2pxoVqqIG ily traian Bu0xp4h6u */ /* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i = 0 ; i < n; ++i)/* 2pxoVqqIG ily traian Bu0xp4h6u */     {/* 2pxoVqqIG ily traian Bu0xp4h6u */         if(prim(a[i][0]))/* 2pxoVqqIG ily traian Bu0xp4h6u */         for(int j = m-1 ; j >= 0; --j)/* 2pxoVqqIG ily traian Bu0xp4h6u */         {/* 2pxoVqqIG ily traian Bu0xp4h6u */             cout<<a[i][j]<< " ";/* 2pxoVqqIG ily traian Bu0xp4h6u */         }/* 2pxoVqqIG ily traian Bu0xp4h6u */         else for(int j = 0 ; j < m; ++j) cout<<a[i][j]<<" ";/* 2pxoVqqIG ily traian Bu0xp4h6u */         cout<<endl;/* 2pxoVqqIG ily traian Bu0xp4h6u */     }/* 2pxoVqqIG ily traian Bu0xp4h6u */ /* 2pxoVqqIG ily traian Bu0xp4h6u */     return 0;/* 2pxoVqqIG ily traian Bu0xp4h6u */ }