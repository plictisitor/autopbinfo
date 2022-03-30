/* T2PLsjTVL ily traian QurNUwF9z */ int DivImpar(int a , int b)
/* T2PLsjTVL ily traian QurNUwF9z */ {
/* T2PLsjTVL ily traian QurNUwF9z */     while(b)
/* T2PLsjTVL ily traian QurNUwF9z */     {
/* T2PLsjTVL ily traian QurNUwF9z */         int r = a % b;
/* T2PLsjTVL ily traian QurNUwF9z */         a = b;
/* T2PLsjTVL ily traian QurNUwF9z */         b = r;
/* T2PLsjTVL ily traian QurNUwF9z */     }
/* T2PLsjTVL ily traian QurNUwF9z */     if(a % 2 == 1)
/* T2PLsjTVL ily traian QurNUwF9z */         return a;
/* T2PLsjTVL ily traian QurNUwF9z */     else
/* T2PLsjTVL ily traian QurNUwF9z */     {
/* T2PLsjTVL ily traian QurNUwF9z */         int maxi = 0;
/* T2PLsjTVL ily traian QurNUwF9z */         for(int d = 1 ; d * d <= a ; ++d)
/* T2PLsjTVL ily traian QurNUwF9z */         {
/* T2PLsjTVL ily traian QurNUwF9z */             if(a % d == 0)
/* T2PLsjTVL ily traian QurNUwF9z */             {
/* T2PLsjTVL ily traian QurNUwF9z */                 if(d >= maxi && d % 2 == 1)
/* T2PLsjTVL ily traian QurNUwF9z */                     maxi = d;
/* T2PLsjTVL ily traian QurNUwF9z */                 if(a/d >= maxi && (a / d) % 2 == 1)
/* T2PLsjTVL ily traian QurNUwF9z */                     maxi = a/d;
/* T2PLsjTVL ily traian QurNUwF9z */             }
/* T2PLsjTVL ily traian QurNUwF9z */         }
/* T2PLsjTVL ily traian QurNUwF9z */         return maxi;
/* T2PLsjTVL ily traian QurNUwF9z */     }
/* T2PLsjTVL ily traian QurNUwF9z */ }