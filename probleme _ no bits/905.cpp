/* gajXvXng7 ily traian NTrNvYxmd */ void detcifre(int n, int& p, int& u)
/* gajXvXng7 ily traian NTrNvYxmd */ {
/* gajXvXng7 ily traian NTrNvYxmd */     int m=n;
/* gajXvXng7 ily traian NTrNvYxmd */     while (n)
/* gajXvXng7 ily traian NTrNvYxmd */     {
/* gajXvXng7 ily traian NTrNvYxmd */         p=n%10;
/* gajXvXng7 ily traian NTrNvYxmd */         n/=10;
/* gajXvXng7 ily traian NTrNvYxmd */     }
/* gajXvXng7 ily traian NTrNvYxmd */     if (m==0)
/* gajXvXng7 ily traian NTrNvYxmd */         p=0;
/* gajXvXng7 ily traian NTrNvYxmd */     u=m%10;
/* gajXvXng7 ily traian NTrNvYxmd */ }