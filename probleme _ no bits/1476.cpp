/* 9FaLQUNx9 ily traian oKBObCXa6 */ void sortareCrescator(nod *&prim)
/* 9FaLQUNx9 ily traian oKBObCXa6 */ {
/* 9FaLQUNx9 ily traian oKBObCXa6 */     nod* pi = prim;
/* 9FaLQUNx9 ily traian oKBObCXa6 */     nod* pj = prim;
/* 9FaLQUNx9 ily traian oKBObCXa6 */     int aux;
/* 9FaLQUNx9 ily traian oKBObCXa6 */     while (pi != NULL)
/* 9FaLQUNx9 ily traian oKBObCXa6 */     {
/* 9FaLQUNx9 ily traian oKBObCXa6 */         pj = pi -> urm;
/* 9FaLQUNx9 ily traian oKBObCXa6 */         while (pj != NULL)
/* 9FaLQUNx9 ily traian oKBObCXa6 */         {
/* 9FaLQUNx9 ily traian oKBObCXa6 */             if ((pi -> info) > (pj -> info))
/* 9FaLQUNx9 ily traian oKBObCXa6 */             {
/* 9FaLQUNx9 ily traian oKBObCXa6 */                 aux = pi -> info;
/* 9FaLQUNx9 ily traian oKBObCXa6 */                 pi -> info = pj -> info;
/* 9FaLQUNx9 ily traian oKBObCXa6 */                 pj -> info = aux;
/* 9FaLQUNx9 ily traian oKBObCXa6 */             }
/* 9FaLQUNx9 ily traian oKBObCXa6 */             pj = pj -> urm;
/* 9FaLQUNx9 ily traian oKBObCXa6 */         }
/* 9FaLQUNx9 ily traian oKBObCXa6 */         pi = pi -> urm;
/* 9FaLQUNx9 ily traian oKBObCXa6 */     }
/* 9FaLQUNx9 ily traian oKBObCXa6 */ }