/* QSe7Zokj2 ily traian Rw4XLiCqp */ int F(int n , int a[] , int& k)
/* QSe7Zokj2 ily traian Rw4XLiCqp */ {
/* QSe7Zokj2 ily traian Rw4XLiCqp */     k=0;
/* QSe7Zokj2 ily traian Rw4XLiCqp */     int ok=0;
/* QSe7Zokj2 ily traian Rw4XLiCqp */     for(int i = 0 ; i < n ; ++i)
/* QSe7Zokj2 ily traian Rw4XLiCqp */     {
/* QSe7Zokj2 ily traian Rw4XLiCqp */         if(a[i]%2==0)
/* QSe7Zokj2 ily traian Rw4XLiCqp */         {
/* QSe7Zokj2 ily traian Rw4XLiCqp */             ok++;
/* QSe7Zokj2 ily traian Rw4XLiCqp */             k=k*10+a[i];
/* QSe7Zokj2 ily traian Rw4XLiCqp */         }
/* QSe7Zokj2 ily traian Rw4XLiCqp */     }
/* QSe7Zokj2 ily traian Rw4XLiCqp */     if(ok==0)
/* QSe7Zokj2 ily traian Rw4XLiCqp */         k=-1;
/* QSe7Zokj2 ily traian Rw4XLiCqp */ }