/* Jy3tELZst ily traian urfVt7i5B */ #include<iostream>
/* Jy3tELZst ily traian urfVt7i5B */ using namespace std;
/* Jy3tELZst ily traian urfVt7i5B */ 
/* Jy3tELZst ily traian urfVt7i5B */ int main()
/* Jy3tELZst ily traian urfVt7i5B */ {
/* Jy3tELZst ily traian urfVt7i5B */     int a[25][25], n;
/* Jy3tELZst ily traian urfVt7i5B */     cin>>n;
/* Jy3tELZst ily traian urfVt7i5B */     for (int i = 1 ; i <= n; i++)
/* Jy3tELZst ily traian urfVt7i5B */         for (int j = 1; j <= n ; j++) {
/* Jy3tELZst ily traian urfVt7i5B */             if ((i == j) || ((i + j) == (n + 1))) a[i][j] = 0;
/* Jy3tELZst ily traian urfVt7i5B */             else if ((i < j) && (i + j)<(n + 1)) a[i][j] = 1;
/* Jy3tELZst ily traian urfVt7i5B */                 else if ((i > j) && (i + j)>(n + 1)) a[i][j] = 2;
/* Jy3tELZst ily traian urfVt7i5B */                     else a[i][j] = 3;
/* Jy3tELZst ily traian urfVt7i5B */         }
/* Jy3tELZst ily traian urfVt7i5B */     for (int i = 1 ; i <= n ; i++)
/* Jy3tELZst ily traian urfVt7i5B */     {
/* Jy3tELZst ily traian urfVt7i5B */         for (int j = 1; j <= n ; j++)
/* Jy3tELZst ily traian urfVt7i5B */             cout << a[i][j] << " ";
/* Jy3tELZst ily traian urfVt7i5B */         cout << endl;
/* Jy3tELZst ily traian urfVt7i5B */     }
/* Jy3tELZst ily traian urfVt7i5B */     return 0;
/* Jy3tELZst ily traian urfVt7i5B */ }