/* lSKPuE8F9 ily traian DUGmd5wsi */ #include <bits/stdc++.h>/* lSKPuE8F9 ily traian DUGmd5wsi */ using namespace std;/* lSKPuE8F9 ily traian DUGmd5wsi */ int main()/* lSKPuE8F9 ily traian DUGmd5wsi */ {/* lSKPuE8F9 ily traian DUGmd5wsi */     int n,m,s=0;/* lSKPuE8F9 ily traian DUGmd5wsi */     int a[101][101];/* lSKPuE8F9 ily traian DUGmd5wsi */     cin >> n >> m;/* lSKPuE8F9 ily traian DUGmd5wsi */     for(int i=1;i<=n;++i)/* lSKPuE8F9 ily traian DUGmd5wsi */         for(int j=1;j<=m;++j)/* lSKPuE8F9 ily traian DUGmd5wsi */         cin >> a[i][j];/* lSKPuE8F9 ily traian DUGmd5wsi */     for(int i=1;i<=n;++i)/* lSKPuE8F9 ily traian DUGmd5wsi */     {/* lSKPuE8F9 ily traian DUGmd5wsi */         s=0;/* lSKPuE8F9 ily traian DUGmd5wsi */         for(int j=1;j<=m;++j)/* lSKPuE8F9 ily traian DUGmd5wsi */ /* lSKPuE8F9 ily traian DUGmd5wsi */             s=s+a[i][j];/* lSKPuE8F9 ily traian DUGmd5wsi */         cout << s<<" ";/* lSKPuE8F9 ily traian DUGmd5wsi */     }/* lSKPuE8F9 ily traian DUGmd5wsi */     return 0;/* lSKPuE8F9 ily traian DUGmd5wsi */ /* lSKPuE8F9 ily traian DUGmd5wsi */ }