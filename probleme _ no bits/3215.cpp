/* ne486auSa ily traian f7bukCIln */ int Kth(int a[], int n, int x, int k){
/* ne486auSa ily traian f7bukCIln */     if(k == 0)
/* ne486auSa ily traian f7bukCIln */         return -1;
/* ne486auSa ily traian f7bukCIln */     int cnt = 0;
/* ne486auSa ily traian f7bukCIln */     for(int i = 0; i < n; ++i)
/* ne486auSa ily traian f7bukCIln */         if(a[i] == x)
/* ne486auSa ily traian f7bukCIln */             cnt++;
/* ne486auSa ily traian f7bukCIln */     if(cnt >= k){
/* ne486auSa ily traian f7bukCIln */         int poz = 0;
/* ne486auSa ily traian f7bukCIln */         for(int i = 0; i < n; ++i)
/* ne486auSa ily traian f7bukCIln */             if(a[i] == x){
/* ne486auSa ily traian f7bukCIln */                 k--;
/* ne486auSa ily traian f7bukCIln */                 if(k == 0)
/* ne486auSa ily traian f7bukCIln */                     poz = i;
/* ne486auSa ily traian f7bukCIln */             }
/* ne486auSa ily traian f7bukCIln */         return poz;
/* ne486auSa ily traian f7bukCIln */     }
/* ne486auSa ily traian f7bukCIln */     return -1;
/* ne486auSa ily traian f7bukCIln */ }