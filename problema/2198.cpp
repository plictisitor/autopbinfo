/* ugiizTXVY ily traian ldMxJAKjQ */ #include <bits/stdc++.h>/* ugiizTXVY ily traian ldMxJAKjQ */ using namespace std;/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ ifstream cin ("elimin_prime.in");/* ugiizTXVY ily traian ldMxJAKjQ */ ofstream cout ("elimin_prime.out");/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ struct nod/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     int info;/* ugiizTXVY ily traian ldMxJAKjQ */     nod* urm;/* ugiizTXVY ily traian ldMxJAKjQ */ };/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ #define Max 100010/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ bool ok[Max];/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ void Ciur()/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     for (int i = 2; i * i < Max; i ++)/* ugiizTXVY ily traian ldMxJAKjQ */         if (!ok[i])/* ugiizTXVY ily traian ldMxJAKjQ */             for (int j = i * i; j < Max; j += i)/* ugiizTXVY ily traian ldMxJAKjQ */                 ok[j] = 1;/* ugiizTXVY ily traian ldMxJAKjQ */ }/* ugiizTXVY ily traian ldMxJAKjQ */ void sterge(nod * p, nod * q)/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     nod* ne = q -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */     if(ne != NULL)q -> urm = ne -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */     else q -> urm = NULL;/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ }/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ void adaugare(nod *&prim , nod *&ultim , int x)/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     nod *nou = new nod;/* ugiizTXVY ily traian ldMxJAKjQ */     nou ->info = x;/* ugiizTXVY ily traian ldMxJAKjQ */     nou ->urm = NULL;/* ugiizTXVY ily traian ldMxJAKjQ */     if(prim == NULL) prim = ultim=nou;/* ugiizTXVY ily traian ldMxJAKjQ */     else/* ugiizTXVY ily traian ldMxJAKjQ */     {/* ugiizTXVY ily traian ldMxJAKjQ */         ultim ->urm = nou;/* ugiizTXVY ily traian ldMxJAKjQ */         ultim = nou;/* ugiizTXVY ily traian ldMxJAKjQ */     }/* ugiizTXVY ily traian ldMxJAKjQ */ }/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */ void afisare(nod *prim)/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     while(prim != NULL)/* ugiizTXVY ily traian ldMxJAKjQ */     {/* ugiizTXVY ily traian ldMxJAKjQ */         cout << prim -> info << " ";/* ugiizTXVY ily traian ldMxJAKjQ */         prim = prim -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */     }/* ugiizTXVY ily traian ldMxJAKjQ */ }/* ugiizTXVY ily traian ldMxJAKjQ */ int main()/* ugiizTXVY ily traian ldMxJAKjQ */ {/* ugiizTXVY ily traian ldMxJAKjQ */     Ciur();/* ugiizTXVY ily traian ldMxJAKjQ */     int n;/* ugiizTXVY ily traian ldMxJAKjQ */     cin >> n;/* ugiizTXVY ily traian ldMxJAKjQ */     nod* prim = NULL;/* ugiizTXVY ily traian ldMxJAKjQ */     nod* ultim = NULL;/* ugiizTXVY ily traian ldMxJAKjQ */     int x;/* ugiizTXVY ily traian ldMxJAKjQ */     for (int i = 1; i <= n; i ++)/* ugiizTXVY ily traian ldMxJAKjQ */     {/* ugiizTXVY ily traian ldMxJAKjQ */         cin >> x;/* ugiizTXVY ily traian ldMxJAKjQ */         adaugare(prim , ultim , x);/* ugiizTXVY ily traian ldMxJAKjQ */     }/* ugiizTXVY ily traian ldMxJAKjQ */     //afisare(prim);/* ugiizTXVY ily traian ldMxJAKjQ */ /* ugiizTXVY ily traian ldMxJAKjQ */     while(n)/* ugiizTXVY ily traian ldMxJAKjQ */     {/* ugiizTXVY ily traian ldMxJAKjQ */         int s = 0 , i = 2;/* ugiizTXVY ily traian ldMxJAKjQ */         nod *p = prim;/* ugiizTXVY ily traian ldMxJAKjQ */         cout << prim ->info << " ";/* ugiizTXVY ily traian ldMxJAKjQ */         while(i <= n)/* ugiizTXVY ily traian ldMxJAKjQ */         {/* ugiizTXVY ily traian ldMxJAKjQ */             if(!ok[i])/* ugiizTXVY ily traian ldMxJAKjQ */             {/* ugiizTXVY ily traian ldMxJAKjQ */                 cout << p -> urm -> info << " ";/* ugiizTXVY ily traian ldMxJAKjQ */                 nod *q = p -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */                 p -> urm = q -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */                 delete q;/* ugiizTXVY ily traian ldMxJAKjQ */                 s++;/* ugiizTXVY ily traian ldMxJAKjQ */             }/* ugiizTXVY ily traian ldMxJAKjQ */             else p = p ->urm;/* ugiizTXVY ily traian ldMxJAKjQ */             i++;/* ugiizTXVY ily traian ldMxJAKjQ */         }/* ugiizTXVY ily traian ldMxJAKjQ */         p = prim;/* ugiizTXVY ily traian ldMxJAKjQ */         prim = prim -> urm;/* ugiizTXVY ily traian ldMxJAKjQ */         delete(p);/* ugiizTXVY ily traian ldMxJAKjQ */         s++;/* ugiizTXVY ily traian ldMxJAKjQ */         n -= s;/* ugiizTXVY ily traian ldMxJAKjQ */     }/* ugiizTXVY ily traian ldMxJAKjQ */     return 0;/* ugiizTXVY ily traian ldMxJAKjQ */ }/* ugiizTXVY ily traian ldMxJAKjQ */ 