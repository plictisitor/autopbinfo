/* azst61Rr0 ily traian 5z3feyehr */ void sumcif(int n, int& s){/* azst61Rr0 ily traian 5z3feyehr */     if(n == 0)/* azst61Rr0 ily traian 5z3feyehr */         s = 0;/* azst61Rr0 ily traian 5z3feyehr */     else/* azst61Rr0 ily traian 5z3feyehr */         sumcif(n / 10, s), s += n % 10;/* azst61Rr0 ily traian 5z3feyehr */ }