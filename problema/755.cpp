/* QcGRnP2Ay ily traian 4pGFNn6ih */ #include <bits/stdc++.h>/* QcGRnP2Ay ily traian 4pGFNn6ih */ using namespace std;/* QcGRnP2Ay ily traian 4pGFNn6ih */ ifstream cin("postordine1.in");/* QcGRnP2Ay ily traian 4pGFNn6ih */ ofstream cout("postordine1.out");/* QcGRnP2Ay ily traian 4pGFNn6ih */ /* QcGRnP2Ay ily traian 4pGFNn6ih */ struct nod/* QcGRnP2Ay ily traian 4pGFNn6ih */ {/* QcGRnP2Ay ily traian 4pGFNn6ih */     int info;/* QcGRnP2Ay ily traian 4pGFNn6ih */     nod *st, *dr;/* QcGRnP2Ay ily traian 4pGFNn6ih */ };/* QcGRnP2Ay ily traian 4pGFNn6ih */ /* QcGRnP2Ay ily traian 4pGFNn6ih */ void SDR(nod *p)/* QcGRnP2Ay ily traian 4pGFNn6ih */ {/* QcGRnP2Ay ily traian 4pGFNn6ih */     if(p)/* QcGRnP2Ay ily traian 4pGFNn6ih */     {/* QcGRnP2Ay ily traian 4pGFNn6ih */         SDR(p->st);/* QcGRnP2Ay ily traian 4pGFNn6ih */         SDR(p->dr);/* QcGRnP2Ay ily traian 4pGFNn6ih */         cout << p -> info << " ";/* QcGRnP2Ay ily traian 4pGFNn6ih */     }/* QcGRnP2Ay ily traian 4pGFNn6ih */ }/* QcGRnP2Ay ily traian 4pGFNn6ih */ /* QcGRnP2Ay ily traian 4pGFNn6ih */ void read(nod * &p)/* QcGRnP2Ay ily traian 4pGFNn6ih */ {/* QcGRnP2Ay ily traian 4pGFNn6ih */     int x;/* QcGRnP2Ay ily traian 4pGFNn6ih */     cin >> x;/* QcGRnP2Ay ily traian 4pGFNn6ih */     if(x == 0) p = NULL;/* QcGRnP2Ay ily traian 4pGFNn6ih */     else/* QcGRnP2Ay ily traian 4pGFNn6ih */     {/* QcGRnP2Ay ily traian 4pGFNn6ih */         p = new nod;/* QcGRnP2Ay ily traian 4pGFNn6ih */         p->info = x;/* QcGRnP2Ay ily traian 4pGFNn6ih */         read(p -> st);/* QcGRnP2Ay ily traian 4pGFNn6ih */         read(p -> dr);/* QcGRnP2Ay ily traian 4pGFNn6ih */     }/* QcGRnP2Ay ily traian 4pGFNn6ih */ }/* QcGRnP2Ay ily traian 4pGFNn6ih */ /* QcGRnP2Ay ily traian 4pGFNn6ih */ int main()/* QcGRnP2Ay ily traian 4pGFNn6ih */ {/* QcGRnP2Ay ily traian 4pGFNn6ih */     nod *p = NULL;/* QcGRnP2Ay ily traian 4pGFNn6ih */     read(p);/* QcGRnP2Ay ily traian 4pGFNn6ih */     SDR(p);/* QcGRnP2Ay ily traian 4pGFNn6ih */     return 0;/* QcGRnP2Ay ily traian 4pGFNn6ih */ }