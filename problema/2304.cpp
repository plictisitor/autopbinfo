/* usFBUx5DT ily traian OR4A4584p */ #include <bits/stdc++.h>/* usFBUx5DT ily traian OR4A4584p */ using namespace std;/* usFBUx5DT ily traian OR4A4584p */ /* usFBUx5DT ily traian OR4A4584p */ char a[1000][21];/* usFBUx5DT ily traian OR4A4584p */ /* usFBUx5DT ily traian OR4A4584p */ int main()/* usFBUx5DT ily traian OR4A4584p */ {/* usFBUx5DT ily traian OR4A4584p */     int n;/* usFBUx5DT ily traian OR4A4584p */     cin >> n;/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i < n ; ++i)/* usFBUx5DT ily traian OR4A4584p */         cin >> a[i];/* usFBUx5DT ily traian OR4A4584p */     int k;/* usFBUx5DT ily traian OR4A4584p */     cin >> k;/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i < n ; ++i)/* usFBUx5DT ily traian OR4A4584p */     {/* usFBUx5DT ily traian OR4A4584p */         int j = 0;/* usFBUx5DT ily traian OR4A4584p */         int cnt=0;/* usFBUx5DT ily traian OR4A4584p */         while(a[i][j]!='\0')/* usFBUx5DT ily traian OR4A4584p */         {/* usFBUx5DT ily traian OR4A4584p */             cnt++;/* usFBUx5DT ily traian OR4A4584p */             j++;/* usFBUx5DT ily traian OR4A4584p */         }/* usFBUx5DT ily traian OR4A4584p */         if(cnt==k)/* usFBUx5DT ily traian OR4A4584p */         {/* usFBUx5DT ily traian OR4A4584p */             j=0;/* usFBUx5DT ily traian OR4A4584p */             while(a[i][j]!='\0')/* usFBUx5DT ily traian OR4A4584p */             {/* usFBUx5DT ily traian OR4A4584p */             cout << a[i][j];/* usFBUx5DT ily traian OR4A4584p */             j++;/* usFBUx5DT ily traian OR4A4584p */             }/* usFBUx5DT ily traian OR4A4584p */             cout << ' ';/* usFBUx5DT ily traian OR4A4584p */         }/* usFBUx5DT ily traian OR4A4584p */     }/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i <= n ; ++i)/* usFBUx5DT ily traian OR4A4584p */     {/* usFBUx5DT ily traian OR4A4584p */         int j = 0;/* usFBUx5DT ily traian OR4A4584p */         int cnt=0;/* usFBUx5DT ily traian OR4A4584p */         while(a[i][j]!='\0')/* usFBUx5DT ily traian OR4A4584p */         {/* usFBUx5DT ily traian OR4A4584p */             cnt++;/* usFBUx5DT ily traian OR4A4584p */             j++;/* usFBUx5DT ily traian OR4A4584p */         }/* usFBUx5DT ily traian OR4A4584p */         if(cnt!=k)/* usFBUx5DT ily traian OR4A4584p */         {/* usFBUx5DT ily traian OR4A4584p */             j=0;/* usFBUx5DT ily traian OR4A4584p */             while(a[i][j]!='\0')/* usFBUx5DT ily traian OR4A4584p */             {/* usFBUx5DT ily traian OR4A4584p */             cout << a[i][j];/* usFBUx5DT ily traian OR4A4584p */             j++;/* usFBUx5DT ily traian OR4A4584p */             }/* usFBUx5DT ily traian OR4A4584p */             if(i!=n)/* usFBUx5DT ily traian OR4A4584p */             cout << ' ';/* usFBUx5DT ily traian OR4A4584p */         }/* usFBUx5DT ily traian OR4A4584p */     }/* usFBUx5DT ily traian OR4A4584p */     return 0;/* usFBUx5DT ily traian OR4A4584p */ }