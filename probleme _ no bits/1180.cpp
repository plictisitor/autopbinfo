/* PJZx3rQCr ily traian fXxwV32LO */ void inserare(nod * & p, nod * q, int x)
/* PJZx3rQCr ily traian fXxwV32LO */ {
/* PJZx3rQCr ily traian fXxwV32LO */     nod* nou = new nod;
/* PJZx3rQCr ily traian fXxwV32LO */     nou -> info = x;
/* PJZx3rQCr ily traian fXxwV32LO */ 
/* PJZx3rQCr ily traian fXxwV32LO */     if (q == p)
/* PJZx3rQCr ily traian fXxwV32LO */     {
/* PJZx3rQCr ily traian fXxwV32LO */         nou -> urm = q;
/* PJZx3rQCr ily traian fXxwV32LO */         p = nou;
/* PJZx3rQCr ily traian fXxwV32LO */         return;
/* PJZx3rQCr ily traian fXxwV32LO */     }
/* PJZx3rQCr ily traian fXxwV32LO */     nod* pi = p;
/* PJZx3rQCr ily traian fXxwV32LO */     while(pi -> urm != q)
/* PJZx3rQCr ily traian fXxwV32LO */         pi = pi -> urm;
/* PJZx3rQCr ily traian fXxwV32LO */ 
/* PJZx3rQCr ily traian fXxwV32LO */     pi -> urm = nou;
/* PJZx3rQCr ily traian fXxwV32LO */     nou -> urm = q;
/* PJZx3rQCr ily traian fXxwV32LO */ }