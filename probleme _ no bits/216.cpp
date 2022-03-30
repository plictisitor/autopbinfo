/* nNQ1JsSWF ily traian AD4YOTFjw */ #include<iostream>
/* nNQ1JsSWF ily traian AD4YOTFjw */ using namespace std;
/* nNQ1JsSWF ily traian AD4YOTFjw */ 
/* nNQ1JsSWF ily traian AD4YOTFjw */ int main()
/* nNQ1JsSWF ily traian AD4YOTFjw */ {
/* nNQ1JsSWF ily traian AD4YOTFjw */     int a[25][25], n;
/* nNQ1JsSWF ily traian AD4YOTFjw */     cin>>n;
/* nNQ1JsSWF ily traian AD4YOTFjw */     for (int i = 1 ; i <= n; i++)
/* nNQ1JsSWF ily traian AD4YOTFjw */         for (int j = 1; j <= n ; j++) {
/* nNQ1JsSWF ily traian AD4YOTFjw */             if ((i == j) || ((i + j) == (n + 1))) a[i][j] = 0;
/* nNQ1JsSWF ily traian AD4YOTFjw */             else if ((i < j) && (i + j)<(n + 1)) a[i][j] = 1;
/* nNQ1JsSWF ily traian AD4YOTFjw */                 else if ((i > j) && (i + j)>(n + 1)) a[i][j] = 2;
/* nNQ1JsSWF ily traian AD4YOTFjw */                     else a[i][j] = 3;
/* nNQ1JsSWF ily traian AD4YOTFjw */         }
/* nNQ1JsSWF ily traian AD4YOTFjw */     for (int i = 1 ; i <= n ; i++)
/* nNQ1JsSWF ily traian AD4YOTFjw */     {
/* nNQ1JsSWF ily traian AD4YOTFjw */         for (int j = 1; j <= n ; j++)
/* nNQ1JsSWF ily traian AD4YOTFjw */             cout << a[i][j] << " ";
/* nNQ1JsSWF ily traian AD4YOTFjw */         cout << endl;
/* nNQ1JsSWF ily traian AD4YOTFjw */     }
/* nNQ1JsSWF ily traian AD4YOTFjw */     return 0;
/* nNQ1JsSWF ily traian AD4YOTFjw */ }