/* IP2lkT3rm ily traian rNfWVWlTL */ void sterge(nod * & p, nod * q)
/* IP2lkT3rm ily traian rNfWVWlTL */ {
/* IP2lkT3rm ily traian rNfWVWlTL */     if (q == p)
/* IP2lkT3rm ily traian rNfWVWlTL */     {
/* IP2lkT3rm ily traian rNfWVWlTL */         p = p -> urm;
/* IP2lkT3rm ily traian rNfWVWlTL */         return;
/* IP2lkT3rm ily traian rNfWVWlTL */     }
/* IP2lkT3rm ily traian rNfWVWlTL */     nod* pe = p;
/* IP2lkT3rm ily traian rNfWVWlTL */     while(pe -> urm != q)///pana la ultimul
/* IP2lkT3rm ily traian rNfWVWlTL */         pe = pe -> urm;
/* IP2lkT3rm ily traian rNfWVWlTL */ 
/* IP2lkT3rm ily traian rNfWVWlTL */     if (q == NULL)pe -> urm = NULL;
/* IP2lkT3rm ily traian rNfWVWlTL */     else pe -> urm = q -> urm;
/* IP2lkT3rm ily traian rNfWVWlTL */ }