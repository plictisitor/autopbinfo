/* cNPlSo3Ra ily traian of176soed */ void P(int a[] , int n, int &min , int &max , int &sum)
/* cNPlSo3Ra ily traian of176soed */ {
/* cNPlSo3Ra ily traian of176soed */     if(n == 1)
/* cNPlSo3Ra ily traian of176soed */         max=min=sum=a[0];
/* cNPlSo3Ra ily traian of176soed */     else
/* cNPlSo3Ra ily traian of176soed */     {
/* cNPlSo3Ra ily traian of176soed */         P(a , n-1 , min , max , sum);
/* cNPlSo3Ra ily traian of176soed */         if(a[n-1]<min) min=a[n-1];
/* cNPlSo3Ra ily traian of176soed */         if(a[n-1]>max) max=a[n-1];
/* cNPlSo3Ra ily traian of176soed */         sum+=a[n-1];
/* cNPlSo3Ra ily traian of176soed */     }
/* cNPlSo3Ra ily traian of176soed */ }