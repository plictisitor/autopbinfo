/* 5BZ0nYeNS ily traian Rq5cNDZ4K */ bool palindrom(node *l)
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */ {
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     node* pi = l;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     int a[10001];
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     int n = 0;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     while (pi != NULL)
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     {
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */         a[n] = pi ->key;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */         n ++;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */         pi = pi -> next;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     }
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     for (int i = 0 ; i < n; i ++)
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */         if (a[i] != a[n - i - 1])return false;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */ 
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */     return true;
/* 5BZ0nYeNS ily traian Rq5cNDZ4K */ }