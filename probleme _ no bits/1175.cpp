/* GLXbdcmoZ ily traian K7nKpPYUL */ int suma(nod *prim)
/* GLXbdcmoZ ily traian K7nKpPYUL */ {
/* GLXbdcmoZ ily traian K7nKpPYUL */     int s=0;
/* GLXbdcmoZ ily traian K7nKpPYUL */     if(prim!=NULL && prim->urm!=NULL && prim->urm->urm!=NULL)
/* GLXbdcmoZ ily traian K7nKpPYUL */         for(nod *p=prim;p->urm->urm!=NULL;p=p->urm)
/* GLXbdcmoZ ily traian K7nKpPYUL */             if(p->info%2==0 && p->urm->info%2==1 && p->urm->urm->info%2==0)
/* GLXbdcmoZ ily traian K7nKpPYUL */             s=s+p->urm->info;
/* GLXbdcmoZ ily traian K7nKpPYUL */         return s;
/* GLXbdcmoZ ily traian K7nKpPYUL */ }