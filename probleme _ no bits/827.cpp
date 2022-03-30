/* UPyS3T59l ily traian uSnMVcbEO */ int cifmaxpar(int n)
/* UPyS3T59l ily traian uSnMVcbEO */ {
/* UPyS3T59l ily traian uSnMVcbEO */     int max=-1;
/* UPyS3T59l ily traian uSnMVcbEO */     while (n)
/* UPyS3T59l ily traian uSnMVcbEO */     {
/* UPyS3T59l ily traian uSnMVcbEO */         if ((n%10)%2==0)
/* UPyS3T59l ily traian uSnMVcbEO */         {
/* UPyS3T59l ily traian uSnMVcbEO */             if (n%10>max)
/* UPyS3T59l ily traian uSnMVcbEO */                 max=n%10;
/* UPyS3T59l ily traian uSnMVcbEO */         }
/* UPyS3T59l ily traian uSnMVcbEO */         n/=10;
/* UPyS3T59l ily traian uSnMVcbEO */     }
/* UPyS3T59l ily traian uSnMVcbEO */     return max;
/* UPyS3T59l ily traian uSnMVcbEO */ }