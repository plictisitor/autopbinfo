/* dF7Y2OjXf ily traian bNuauNFLS */ int multiplu(int a[] , int n , int k)
/* dF7Y2OjXf ily traian bNuauNFLS */ {
/* dF7Y2OjXf ily traian bNuauNFLS */     int cnt=0;
/* dF7Y2OjXf ily traian bNuauNFLS */     for(int i = 0 ; i < n ; ++i)
/* dF7Y2OjXf ily traian bNuauNFLS */     {
/* dF7Y2OjXf ily traian bNuauNFLS */         if(a[i]%k==0 && a[i]%10==k)
/* dF7Y2OjXf ily traian bNuauNFLS */             cnt++;
/* dF7Y2OjXf ily traian bNuauNFLS */     }
/* dF7Y2OjXf ily traian bNuauNFLS */     return cnt;
/* dF7Y2OjXf ily traian bNuauNFLS */ }