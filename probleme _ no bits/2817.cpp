/* Lw7pKc9yK ily traian KuZelOynR */ bool oky(int a)
/* Lw7pKc9yK ily traian KuZelOynR */ {
/* Lw7pKc9yK ily traian KuZelOynR */     bool ok = true;
/* Lw7pKc9yK ily traian KuZelOynR */     while(a > 9)
/* Lw7pKc9yK ily traian KuZelOynR */     {
/* Lw7pKc9yK ily traian KuZelOynR */         if(a % 10 != (a/10)%10)
/* Lw7pKc9yK ily traian KuZelOynR */             ok=false;
/* Lw7pKc9yK ily traian KuZelOynR */         a/=10;
/* Lw7pKc9yK ily traian KuZelOynR */     }
/* Lw7pKc9yK ily traian KuZelOynR */     return ok;
/* Lw7pKc9yK ily traian KuZelOynR */ }
/* Lw7pKc9yK ily traian KuZelOynR */ 
/* Lw7pKc9yK ily traian KuZelOynR */ void identice(int a , int b)
/* Lw7pKc9yK ily traian KuZelOynR */ {
/* Lw7pKc9yK ily traian KuZelOynR */     int cnt = 0;
/* Lw7pKc9yK ily traian KuZelOynR */     for(int i = a ; i <= b ; ++i)
/* Lw7pKc9yK ily traian KuZelOynR */         if(oky(i))
/* Lw7pKc9yK ily traian KuZelOynR */             cout << i << ' ' , cnt++;
/* Lw7pKc9yK ily traian KuZelOynR */     if(!cnt)
/* Lw7pKc9yK ily traian KuZelOynR */         cout << "nu exista";
/* Lw7pKc9yK ily traian KuZelOynR */ }