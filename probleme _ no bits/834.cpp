/* Jg6OISLNB ily traian LwqPMdRVf */ int elimcif(int n, int c){
/* Jg6OISLNB ily traian LwqPMdRVf */     if(n == 0)
/* Jg6OISLNB ily traian LwqPMdRVf */         return 0;
/* Jg6OISLNB ily traian LwqPMdRVf */     else{
/* Jg6OISLNB ily traian LwqPMdRVf */         if(n % 10 != c)
/* Jg6OISLNB ily traian LwqPMdRVf */             return n % 10 + elimcif(n / 10, c) * 10;
/* Jg6OISLNB ily traian LwqPMdRVf */         else
/* Jg6OISLNB ily traian LwqPMdRVf */             return elimcif(n / 10, c);
/* Jg6OISLNB ily traian LwqPMdRVf */     }
/* Jg6OISLNB ily traian LwqPMdRVf */ }