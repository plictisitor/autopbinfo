/* xkJV7cFpT ily traian ub1EALkLo */ void inserare(nod * p, nod * q, int x)
/* xkJV7cFpT ily traian ub1EALkLo */ {
/* xkJV7cFpT ily traian ub1EALkLo */     nod* nou = new nod;
/* xkJV7cFpT ily traian ub1EALkLo */     nou -> info = x;
/* xkJV7cFpT ily traian ub1EALkLo */     nou -> urm = q -> urm;
/* xkJV7cFpT ily traian ub1EALkLo */     q -> urm = nou;
/* xkJV7cFpT ily traian ub1EALkLo */ }