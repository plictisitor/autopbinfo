/* MONLqmwsq ily traian 6ZBjLT8WT */ bool cmmdc(int a , int b)
/* MONLqmwsq ily traian 6ZBjLT8WT */ {
/* MONLqmwsq ily traian 6ZBjLT8WT */     int r;
/* MONLqmwsq ily traian 6ZBjLT8WT */     while(b != 0)
/* MONLqmwsq ily traian 6ZBjLT8WT */     {
/* MONLqmwsq ily traian 6ZBjLT8WT */         r = a % b;
/* MONLqmwsq ily traian 6ZBjLT8WT */         a = b;
/* MONLqmwsq ily traian 6ZBjLT8WT */         b = r;
/* MONLqmwsq ily traian 6ZBjLT8WT */     }
/* MONLqmwsq ily traian 6ZBjLT8WT */     if(a == 1) return 1;
/* MONLqmwsq ily traian 6ZBjLT8WT */     else return 0;
/* MONLqmwsq ily traian 6ZBjLT8WT */ }
/* MONLqmwsq ily traian 6ZBjLT8WT */ int numarare(nod * p)
/* MONLqmwsq ily traian 6ZBjLT8WT */ {
/* MONLqmwsq ily traian 6ZBjLT8WT */     int nr = 0;
/* MONLqmwsq ily traian 6ZBjLT8WT */     nod* pi = p;
/* MONLqmwsq ily traian 6ZBjLT8WT */     nod* pj = p;
/* MONLqmwsq ily traian 6ZBjLT8WT */ 
/* MONLqmwsq ily traian 6ZBjLT8WT */     while(pi != NULL)
/* MONLqmwsq ily traian 6ZBjLT8WT */     {
/* MONLqmwsq ily traian 6ZBjLT8WT */         pj = pi -> urm;
/* MONLqmwsq ily traian 6ZBjLT8WT */         while(pj != NULL)
/* MONLqmwsq ily traian 6ZBjLT8WT */         {
/* MONLqmwsq ily traian 6ZBjLT8WT */             if (cmmdc(pi -> info, pj -> info)) nr ++;
/* MONLqmwsq ily traian 6ZBjLT8WT */             pj = pj -> urm;
/* MONLqmwsq ily traian 6ZBjLT8WT */         }
/* MONLqmwsq ily traian 6ZBjLT8WT */         pi = pi -> urm;
/* MONLqmwsq ily traian 6ZBjLT8WT */     }
/* MONLqmwsq ily traian 6ZBjLT8WT */     return nr;
/* MONLqmwsq ily traian 6ZBjLT8WT */ }