/* uncmQZvLW ily traian xQE61DFvE */ void sterge_elem(nod * & p, nod * q)
/* uncmQZvLW ily traian xQE61DFvE */ {
/* uncmQZvLW ily traian xQE61DFvE */     if (q == p)
/* uncmQZvLW ily traian xQE61DFvE */     {
/* uncmQZvLW ily traian xQE61DFvE */         p = p -> urm;
/* uncmQZvLW ily traian xQE61DFvE */         return;
/* uncmQZvLW ily traian xQE61DFvE */     }
/* uncmQZvLW ily traian xQE61DFvE */     nod* pe = p;
/* uncmQZvLW ily traian xQE61DFvE */     while(pe -> urm != q)
/* uncmQZvLW ily traian xQE61DFvE */         pe = pe -> urm;
/* uncmQZvLW ily traian xQE61DFvE */ 
/* uncmQZvLW ily traian xQE61DFvE */     if (q == NULL)pe -> urm = NULL;
/* uncmQZvLW ily traian xQE61DFvE */     else pe -> urm = q -> urm;
/* uncmQZvLW ily traian xQE61DFvE */ }
/* uncmQZvLW ily traian xQE61DFvE */ 
/* uncmQZvLW ily traian xQE61DFvE */ void sterge(nod * & p)
/* uncmQZvLW ily traian xQE61DFvE */ {
/* uncmQZvLW ily traian xQE61DFvE */     nod* pi = p;
/* uncmQZvLW ily traian xQE61DFvE */     while(pi != NULL)
/* uncmQZvLW ily traian xQE61DFvE */     {
/* uncmQZvLW ily traian xQE61DFvE */         if ((pi -> info) % 2 == 0)sterge_elem(p, pi);
/* uncmQZvLW ily traian xQE61DFvE */         pi = pi -> urm;
/* uncmQZvLW ily traian xQE61DFvE */     }
/* uncmQZvLW ily traian xQE61DFvE */ }