/* SBP8wLHpb ily traian 1FV4ah33w */ int fact(int n){
/* SBP8wLHpb ily traian 1FV4ah33w */     int val = 1;
/* SBP8wLHpb ily traian 1FV4ah33w */     for(int i = 1; i <= n; ++i)
/* SBP8wLHpb ily traian 1FV4ah33w */         val *= i;
/* SBP8wLHpb ily traian 1FV4ah33w */     return val;
/* SBP8wLHpb ily traian 1FV4ah33w */ }
/* SBP8wLHpb ily traian 1FV4ah33w */ 
/* SBP8wLHpb ily traian 1FV4ah33w */ void interval(int n, int& a, int& b){
/* SBP8wLHpb ily traian 1FV4ah33w */     a = fact(n - 1) + 1;
/* SBP8wLHpb ily traian 1FV4ah33w */     b = fact(n + 1) - 1;
/* SBP8wLHpb ily traian 1FV4ah33w */ }