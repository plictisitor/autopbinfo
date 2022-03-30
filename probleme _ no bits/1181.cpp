/* 89RGLL0XM ily traian DTWIkjic2 */ void inserare_elem(nod * p, nod * q, int x)
/* 89RGLL0XM ily traian DTWIkjic2 */ {
/* 89RGLL0XM ily traian DTWIkjic2 */     nod* nou = new nod;
/* 89RGLL0XM ily traian DTWIkjic2 */     nou -> info = x;
/* 89RGLL0XM ily traian DTWIkjic2 */     nou -> urm = q -> urm;
/* 89RGLL0XM ily traian DTWIkjic2 */     q -> urm = nou;
/* 89RGLL0XM ily traian DTWIkjic2 */ }
/* 89RGLL0XM ily traian DTWIkjic2 */ void inserare(nod * p)
/* 89RGLL0XM ily traian DTWIkjic2 */ {
/* 89RGLL0XM ily traian DTWIkjic2 */     nod* pi = p;
/* 89RGLL0XM ily traian DTWIkjic2 */     while(pi != NULL)
/* 89RGLL0XM ily traian DTWIkjic2 */     {
/* 89RGLL0XM ily traian DTWIkjic2 */         if ((pi -> info) % 2 == 0)
/* 89RGLL0XM ily traian DTWIkjic2 */         {
/* 89RGLL0XM ily traian DTWIkjic2 */             inserare_elem(p, pi, 2 * (pi -> info));
/* 89RGLL0XM ily traian DTWIkjic2 */             pi = pi -> urm;
/* 89RGLL0XM ily traian DTWIkjic2 */         }
/* 89RGLL0XM ily traian DTWIkjic2 */         pi = pi -> urm;
/* 89RGLL0XM ily traian DTWIkjic2 */     }
/* 89RGLL0XM ily traian DTWIkjic2 */ }