/* dJeYkPOQZ ily traian ZtE3ObnQO */ #include <bits/stdc++.h>/* dJeYkPOQZ ily traian ZtE3ObnQO */ using namespace std;/* dJeYkPOQZ ily traian ZtE3ObnQO */ int main ()/* dJeYkPOQZ ily traian ZtE3ObnQO */ {/* dJeYkPOQZ ily traian ZtE3ObnQO */     int nrdiv=0,ndmax=0,nrmic,nrmare,a,b,aux;/* dJeYkPOQZ ily traian ZtE3ObnQO */     cin >> a>> b;/* dJeYkPOQZ ily traian ZtE3ObnQO */     if(a%2==1)/* dJeYkPOQZ ily traian ZtE3ObnQO */         a++;/* dJeYkPOQZ ily traian ZtE3ObnQO */     for (int i=a; i<=b; i=i+2)/* dJeYkPOQZ ily traian ZtE3ObnQO */     {/* dJeYkPOQZ ily traian ZtE3ObnQO */         aux=i;/* dJeYkPOQZ ily traian ZtE3ObnQO */         nrdiv=0;/* dJeYkPOQZ ily traian ZtE3ObnQO */         for (int d=1;d*d<=aux;d++)/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(aux%d==0)/* dJeYkPOQZ ily traian ZtE3ObnQO */         {/* dJeYkPOQZ ily traian ZtE3ObnQO */               if(d %2==0) nrdiv++;/* dJeYkPOQZ ily traian ZtE3ObnQO */             if( d*d<aux)/* dJeYkPOQZ ily traian ZtE3ObnQO */             if((aux/d)%2==0) nrdiv++;/* dJeYkPOQZ ily traian ZtE3ObnQO */         }/* dJeYkPOQZ ily traian ZtE3ObnQO */         if(nrdiv>ndmax)/* dJeYkPOQZ ily traian ZtE3ObnQO */         {/* dJeYkPOQZ ily traian ZtE3ObnQO */             ndmax=nrdiv;/* dJeYkPOQZ ily traian ZtE3ObnQO */             nrmic=aux;/* dJeYkPOQZ ily traian ZtE3ObnQO */         }/* dJeYkPOQZ ily traian ZtE3ObnQO */     }/* dJeYkPOQZ ily traian ZtE3ObnQO */     if (b%2==1) b=b-1;/* dJeYkPOQZ ily traian ZtE3ObnQO */     for (int i=b; i>=a;i=i-2)/* dJeYkPOQZ ily traian ZtE3ObnQO */     {/* dJeYkPOQZ ily traian ZtE3ObnQO */          aux=i;/* dJeYkPOQZ ily traian ZtE3ObnQO */         nrdiv=0;/* dJeYkPOQZ ily traian ZtE3ObnQO */         for (int d=1;d*d<=aux;d++)/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(aux%d==0)/* dJeYkPOQZ ily traian ZtE3ObnQO */         {/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(d %2==0) nrdiv++;/* dJeYkPOQZ ily traian ZtE3ObnQO */             if (d*d<aux)/* dJeYkPOQZ ily traian ZtE3ObnQO */             if((aux/d)%2==0) nrdiv++;/* dJeYkPOQZ ily traian ZtE3ObnQO */         }/* dJeYkPOQZ ily traian ZtE3ObnQO */         if(nrdiv==ndmax)/* dJeYkPOQZ ily traian ZtE3ObnQO */         {/* dJeYkPOQZ ily traian ZtE3ObnQO */             nrmare=aux;/* dJeYkPOQZ ily traian ZtE3ObnQO */             break;/* dJeYkPOQZ ily traian ZtE3ObnQO */         }/* dJeYkPOQZ ily traian ZtE3ObnQO */     }/* dJeYkPOQZ ily traian ZtE3ObnQO */     cout << ndmax<<" "<<nrmic<<" "<<nrmare;/* dJeYkPOQZ ily traian ZtE3ObnQO */     return 0;/* dJeYkPOQZ ily traian ZtE3ObnQO */ }