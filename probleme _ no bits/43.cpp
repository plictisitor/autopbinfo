/* ASGI3YH8H ily traian ayfS2LBU4 */ double nreal(int n, int m)
/* ASGI3YH8H ily traian ayfS2LBU4 */ {
/* ASGI3YH8H ily traian ayfS2LBU4 */     int a=m;
/* ASGI3YH8H ily traian ayfS2LBU4 */     int p=1;
/* ASGI3YH8H ily traian ayfS2LBU4 */     while(a)
/* ASGI3YH8H ily traian ayfS2LBU4 */         p*=10 , a/=10;
/* ASGI3YH8H ily traian ayfS2LBU4 */     double b;
/* ASGI3YH8H ily traian ayfS2LBU4 */     b=p*n+m;
/* ASGI3YH8H ily traian ayfS2LBU4 */     b=(double) b/p;
/* ASGI3YH8H ily traian ayfS2LBU4 */     return b;
/* ASGI3YH8H ily traian ayfS2LBU4 */ }