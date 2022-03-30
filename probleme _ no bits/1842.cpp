/* jV6ryw0nc ily traian bcFX1YRDw */ int F(int n , int a[] , int& k)
/* jV6ryw0nc ily traian bcFX1YRDw */ {
/* jV6ryw0nc ily traian bcFX1YRDw */     k = -1;
/* jV6ryw0nc ily traian bcFX1YRDw */     for(int i = 0 ; i < n ; ++i)
/* jV6ryw0nc ily traian bcFX1YRDw */     {
/* jV6ryw0nc ily traian bcFX1YRDw */         if(a[i]%2==0)
/* jV6ryw0nc ily traian bcFX1YRDw */         {
/* jV6ryw0nc ily traian bcFX1YRDw */             if(k==-1)
/* jV6ryw0nc ily traian bcFX1YRDw */                 k=0;
/* jV6ryw0nc ily traian bcFX1YRDw */             k=k*10+a[i];
/* jV6ryw0nc ily traian bcFX1YRDw */         }
/* jV6ryw0nc ily traian bcFX1YRDw */     }
/* jV6ryw0nc ily traian bcFX1YRDw */ }