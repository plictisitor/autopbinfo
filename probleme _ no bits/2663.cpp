/* Dw8WWoISp ily traian BRBmjMXdX */ int NrDiv(int n)
/* Dw8WWoISp ily traian BRBmjMXdX */ {
/* Dw8WWoISp ily traian BRBmjMXdX */     int cnt=0;
/* Dw8WWoISp ily traian BRBmjMXdX */     for(int i = 1 ; i * i <= n ; ++i)
/* Dw8WWoISp ily traian BRBmjMXdX */     {
/* Dw8WWoISp ily traian BRBmjMXdX */         if(n % i == 0)
/* Dw8WWoISp ily traian BRBmjMXdX */             cnt+=2;
/* Dw8WWoISp ily traian BRBmjMXdX */         if(i * i == n)
/* Dw8WWoISp ily traian BRBmjMXdX */             cnt--;
/* Dw8WWoISp ily traian BRBmjMXdX */     }
/* Dw8WWoISp ily traian BRBmjMXdX */     return cnt;
/* Dw8WWoISp ily traian BRBmjMXdX */ }
/* Dw8WWoISp ily traian BRBmjMXdX */ 
/* Dw8WWoISp ily traian BRBmjMXdX */ int NextNrDiv(int n)
/* Dw8WWoISp ily traian BRBmjMXdX */ {
/* Dw8WWoISp ily traian BRBmjMXdX */     for(int i = n + 1 ; i ; ++i)
/* Dw8WWoISp ily traian BRBmjMXdX */         if(NrDiv(i)==NrDiv(n))
/* Dw8WWoISp ily traian BRBmjMXdX */             return i;
/* Dw8WWoISp ily traian BRBmjMXdX */ }
/* Dw8WWoISp ily traian BRBmjMXdX */ 
/* Dw8WWoISp ily traian BRBmjMXdX */ int PrevNrDiv(int n)
/* Dw8WWoISp ily traian BRBmjMXdX */ {
/* Dw8WWoISp ily traian BRBmjMXdX */     for(int i = n - 1 ; i >= 1 ; --i)
/* Dw8WWoISp ily traian BRBmjMXdX */         if(NrDiv(i)==NrDiv(n))
/* Dw8WWoISp ily traian BRBmjMXdX */             return i;
/* Dw8WWoISp ily traian BRBmjMXdX */     return -1;
/* Dw8WWoISp ily traian BRBmjMXdX */ }