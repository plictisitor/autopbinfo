/* sngP8GmBQ ily traian BKIogwTe5 */ void inserare_elem(nod * & p, nod * q, int x)
/* sngP8GmBQ ily traian BKIogwTe5 */ {
/* sngP8GmBQ ily traian BKIogwTe5 */     nod* nou = new nod;
/* sngP8GmBQ ily traian BKIogwTe5 */     nou -> info = x;
/* sngP8GmBQ ily traian BKIogwTe5 */ 
/* sngP8GmBQ ily traian BKIogwTe5 */     if (q == p)
/* sngP8GmBQ ily traian BKIogwTe5 */     {
/* sngP8GmBQ ily traian BKIogwTe5 */         nou -> urm = q;
/* sngP8GmBQ ily traian BKIogwTe5 */         p = nou;
/* sngP8GmBQ ily traian BKIogwTe5 */         return;
/* sngP8GmBQ ily traian BKIogwTe5 */     }
/* sngP8GmBQ ily traian BKIogwTe5 */     nod* pi = p;
/* sngP8GmBQ ily traian BKIogwTe5 */     while(pi -> urm != q)
/* sngP8GmBQ ily traian BKIogwTe5 */         pi = pi -> urm;
/* sngP8GmBQ ily traian BKIogwTe5 */ 
/* sngP8GmBQ ily traian BKIogwTe5 */     pi -> urm = nou;
/* sngP8GmBQ ily traian BKIogwTe5 */     nou -> urm = q;
/* sngP8GmBQ ily traian BKIogwTe5 */ }
/* sngP8GmBQ ily traian BKIogwTe5 */ void inserare(nod * & p)
/* sngP8GmBQ ily traian BKIogwTe5 */ {
/* sngP8GmBQ ily traian BKIogwTe5 */     nod* pi = p;
/* sngP8GmBQ ily traian BKIogwTe5 */     while(pi != NULL)
/* sngP8GmBQ ily traian BKIogwTe5 */     {
/* sngP8GmBQ ily traian BKIogwTe5 */         if ((pi -> info) % 2 == 0)
/* sngP8GmBQ ily traian BKIogwTe5 */         {
/* sngP8GmBQ ily traian BKIogwTe5 */             inserare_elem(p, pi, 2 * (pi -> info));
/* sngP8GmBQ ily traian BKIogwTe5 */             //pi = pi -> urm;
/* sngP8GmBQ ily traian BKIogwTe5 */         }
/* sngP8GmBQ ily traian BKIogwTe5 */         pi = pi -> urm;
/* sngP8GmBQ ily traian BKIogwTe5 */     }
/* sngP8GmBQ ily traian BKIogwTe5 */ }