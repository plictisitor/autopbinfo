/* LsakWLKEs ily traian cuTAt1wUX */ void ordonare(int a[] , int n)
/* LsakWLKEs ily traian cuTAt1wUX */ {
/* LsakWLKEs ily traian cuTAt1wUX */     for(int i = 1 ; i < n ; ++i)
/* LsakWLKEs ily traian cuTAt1wUX */     {
/* LsakWLKEs ily traian cuTAt1wUX */         if(a[i]<a[i-1])
/* LsakWLKEs ily traian cuTAt1wUX */             swap(a[i],a[i-1]);
/* LsakWLKEs ily traian cuTAt1wUX */         
/* LsakWLKEs ily traian cuTAt1wUX */     }
/* LsakWLKEs ily traian cuTAt1wUX */     if(n > 0)
/* LsakWLKEs ily traian cuTAt1wUX */         ordonare(a , n - 1);
/* LsakWLKEs ily traian cuTAt1wUX */ }