/* tkFj34sGI ily traian TkkQ6igZf */ void adaugare(nod* &prim , int x)/* tkFj34sGI ily traian TkkQ6igZf */ {/* tkFj34sGI ily traian TkkQ6igZf */     nod* nou = new nod;///1/* tkFj34sGI ily traian TkkQ6igZf */     nou -> info = x;///2/* tkFj34sGI ily traian TkkQ6igZf */     nou -> urm = NULL;///3/* tkFj34sGI ily traian TkkQ6igZf */     if(prim == NULL) prim = nou;///este primul/* tkFj34sGI ily traian TkkQ6igZf */     else/* tkFj34sGI ily traian TkkQ6igZf */     {/* tkFj34sGI ily traian TkkQ6igZf */         nod* p = prim;///de la primul/* tkFj34sGI ily traian TkkQ6igZf */         while(p -> urm != NULL)///pana la ultimul/* tkFj34sGI ily traian TkkQ6igZf */             p = p -> urm;///parcurg/* tkFj34sGI ily traian TkkQ6igZf */         p -> urm = nou;///4/* tkFj34sGI ily traian TkkQ6igZf */     }/* tkFj34sGI ily traian TkkQ6igZf */ }