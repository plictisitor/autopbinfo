/* UdIbcxabX ily traian fw0qDDPnM */ int multiplu(int a[] , int n , int k)
/* UdIbcxabX ily traian fw0qDDPnM */ {
/* UdIbcxabX ily traian fw0qDDPnM */     int cnt=0;
/* UdIbcxabX ily traian fw0qDDPnM */     for(int i = 0 ; i < n ; ++i)
/* UdIbcxabX ily traian fw0qDDPnM */     {
/* UdIbcxabX ily traian fw0qDDPnM */         if(a[i]%k==0 && a[i]%10==k)
/* UdIbcxabX ily traian fw0qDDPnM */             cnt++;
/* UdIbcxabX ily traian fw0qDDPnM */     }
/* UdIbcxabX ily traian fw0qDDPnM */     return cnt;
/* UdIbcxabX ily traian fw0qDDPnM */ }