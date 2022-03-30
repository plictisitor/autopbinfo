/* KP4ZZYikn ily traian huedAqo8Y */ void Impare(int &n)
/* KP4ZZYikn ily traian huedAqo8Y */ {
/* KP4ZZYikn ily traian huedAqo8Y */     int a[11], x = 0;
/* KP4ZZYikn ily traian huedAqo8Y */     while(n)
/* KP4ZZYikn ily traian huedAqo8Y */     {
/* KP4ZZYikn ily traian huedAqo8Y */         a[x] = n % 10;
/* KP4ZZYikn ily traian huedAqo8Y */         n/=10;
/* KP4ZZYikn ily traian huedAqo8Y */         x++;
/* KP4ZZYikn ily traian huedAqo8Y */     }
/* KP4ZZYikn ily traian huedAqo8Y */     int p = 1;
/* KP4ZZYikn ily traian huedAqo8Y */     for(int i = 0 ; i < x; ++i)
/* KP4ZZYikn ily traian huedAqo8Y */     {
/* KP4ZZYikn ily traian huedAqo8Y */         if(a[i] % 2 == 1)
/* KP4ZZYikn ily traian huedAqo8Y */             a[i] --;
/* KP4ZZYikn ily traian huedAqo8Y */         n = n + a[i] * p;
/* KP4ZZYikn ily traian huedAqo8Y */         p *= 10;
/* KP4ZZYikn ily traian huedAqo8Y */     }
/* KP4ZZYikn ily traian huedAqo8Y */ }