/* tHcEjk2rE ily traian BrdfKThlL */ int Fibo(int n)
/* tHcEjk2rE ily traian BrdfKThlL */ {
/* tHcEjk2rE ily traian BrdfKThlL */     int x , y;
/* tHcEjk2rE ily traian BrdfKThlL */     x=y=1;
/* tHcEjk2rE ily traian BrdfKThlL */     int cnti=2;
/* tHcEjk2rE ily traian BrdfKThlL */     for(int i = 1 ; cnti < n ; ++i)
/* tHcEjk2rE ily traian BrdfKThlL */     {
/* tHcEjk2rE ily traian BrdfKThlL */         int sum = x + y;
/* tHcEjk2rE ily traian BrdfKThlL */         x = y , y = sum;
/* tHcEjk2rE ily traian BrdfKThlL */         if(y % 2 == 1)
/* tHcEjk2rE ily traian BrdfKThlL */             cnti++;
/* tHcEjk2rE ily traian BrdfKThlL */     }
/* tHcEjk2rE ily traian BrdfKThlL */     return y;
/* tHcEjk2rE ily traian BrdfKThlL */ }