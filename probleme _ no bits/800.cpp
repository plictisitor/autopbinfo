/* VmTbst6lN ily traian L26ZFnbaM */ int sumdiv(int n){
/* VmTbst6lN ily traian L26ZFnbaM */     if(n == 1)
/* VmTbst6lN ily traian L26ZFnbaM */         return 0;
/* VmTbst6lN ily traian L26ZFnbaM */     int sum = 1;
/* VmTbst6lN ily traian L26ZFnbaM */     for(int d = 2; d * d <= n; ++d){
/* VmTbst6lN ily traian L26ZFnbaM */         if(n % d == 0)
/* VmTbst6lN ily traian L26ZFnbaM */             sum += d + (n / d);
/* VmTbst6lN ily traian L26ZFnbaM */         if(d * d == n)
/* VmTbst6lN ily traian L26ZFnbaM */             sum -= d;
/* VmTbst6lN ily traian L26ZFnbaM */     }
/* VmTbst6lN ily traian L26ZFnbaM */     return sum;
/* VmTbst6lN ily traian L26ZFnbaM */ }
/* VmTbst6lN ily traian L26ZFnbaM */ 
/* VmTbst6lN ily traian L26ZFnbaM */ void perfect(int a, int b){
/* VmTbst6lN ily traian L26ZFnbaM */     bool gasit = false;
/* VmTbst6lN ily traian L26ZFnbaM */     if(a > b)
/* VmTbst6lN ily traian L26ZFnbaM */         swap(a, b);
/* VmTbst6lN ily traian L26ZFnbaM */     for(int i = b; i >= a; --i)
/* VmTbst6lN ily traian L26ZFnbaM */         if(i == sumdiv(i))
/* VmTbst6lN ily traian L26ZFnbaM */             cout << i << ' ', gasit = true;
/* VmTbst6lN ily traian L26ZFnbaM */     if(!gasit)
/* VmTbst6lN ily traian L26ZFnbaM */         cout << "nu exista";
/* VmTbst6lN ily traian L26ZFnbaM */ }