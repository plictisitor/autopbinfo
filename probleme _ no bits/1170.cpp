/* sArGCaWpe ily traian hi2Mg6zTv */ void adaugareInainte(nod * & p , int x)
/* sArGCaWpe ily traian hi2Mg6zTv */ {
/* sArGCaWpe ily traian hi2Mg6zTv */     nod* nou = new nod;
/* sArGCaWpe ily traian hi2Mg6zTv */     nou -> info = x;
/* sArGCaWpe ily traian hi2Mg6zTv */ 
/* sArGCaWpe ily traian hi2Mg6zTv */     if(p == NULL) p = nou;
/* sArGCaWpe ily traian hi2Mg6zTv */     else
/* sArGCaWpe ily traian hi2Mg6zTv */     {
/* sArGCaWpe ily traian hi2Mg6zTv */         nou -> urm = p;
/* sArGCaWpe ily traian hi2Mg6zTv */         p = nou;
/* sArGCaWpe ily traian hi2Mg6zTv */     }
/* sArGCaWpe ily traian hi2Mg6zTv */ }