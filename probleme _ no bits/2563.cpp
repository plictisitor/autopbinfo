/* RP4IKGPoF ily traian OdOgjeVha */ void inserare_elem(nod * & p, nod * q, int x)
/* RP4IKGPoF ily traian OdOgjeVha */ {
/* RP4IKGPoF ily traian OdOgjeVha */     nod* nou = new nod;
/* RP4IKGPoF ily traian OdOgjeVha */     nou -> info = x;
/* RP4IKGPoF ily traian OdOgjeVha */ 
/* RP4IKGPoF ily traian OdOgjeVha */     if (q == p)
/* RP4IKGPoF ily traian OdOgjeVha */     {
/* RP4IKGPoF ily traian OdOgjeVha */         nou -> urm = q;
/* RP4IKGPoF ily traian OdOgjeVha */         p = nou;
/* RP4IKGPoF ily traian OdOgjeVha */         return;
/* RP4IKGPoF ily traian OdOgjeVha */     }
/* RP4IKGPoF ily traian OdOgjeVha */     nod* pi = p;
/* RP4IKGPoF ily traian OdOgjeVha */     while(pi -> urm != q)
/* RP4IKGPoF ily traian OdOgjeVha */         pi = pi -> urm;
/* RP4IKGPoF ily traian OdOgjeVha */ 
/* RP4IKGPoF ily traian OdOgjeVha */     pi -> urm = nou;
/* RP4IKGPoF ily traian OdOgjeVha */     nou -> urm = q;
/* RP4IKGPoF ily traian OdOgjeVha */ }
/* RP4IKGPoF ily traian OdOgjeVha */ void ins_cresc(nod *&p, int x)
/* RP4IKGPoF ily traian OdOgjeVha */ {
/* RP4IKGPoF ily traian OdOgjeVha */     nod* pi = p;
/* RP4IKGPoF ily traian OdOgjeVha */     while(pi != NULL && (x > pi-> info))
/* RP4IKGPoF ily traian OdOgjeVha */         pi = pi -> urm;
/* RP4IKGPoF ily traian OdOgjeVha */     
/* RP4IKGPoF ily traian OdOgjeVha */     if (pi == NULL)
/* RP4IKGPoF ily traian OdOgjeVha */     {
/* RP4IKGPoF ily traian OdOgjeVha */         nod* nou = new nod;
/* RP4IKGPoF ily traian OdOgjeVha */         nou -> info = x;
/* RP4IKGPoF ily traian OdOgjeVha */         nou -> urm = NULL;
/* RP4IKGPoF ily traian OdOgjeVha */         
/* RP4IKGPoF ily traian OdOgjeVha */         pi = p;
/* RP4IKGPoF ily traian OdOgjeVha */         while(pi -> urm != NULL)
/* RP4IKGPoF ily traian OdOgjeVha */              pi = pi -> urm;
/* RP4IKGPoF ily traian OdOgjeVha */         pi -> urm = nou;
/* RP4IKGPoF ily traian OdOgjeVha */     }
/* RP4IKGPoF ily traian OdOgjeVha */     else inserare_elem(p, pi, x);
/* RP4IKGPoF ily traian OdOgjeVha */ }