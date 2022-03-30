/* KOQMFA4Zt ily traian PWCpaGdoB */ #include<fstream>
/* KOQMFA4Zt ily traian PWCpaGdoB */ using namespace std;
/* KOQMFA4Zt ily traian PWCpaGdoB */ ifstream cin("matrice.in");
/* KOQMFA4Zt ily traian PWCpaGdoB */ ofstream cout("matrice.out");
/* KOQMFA4Zt ily traian PWCpaGdoB */ int prim(int n)
/* KOQMFA4Zt ily traian PWCpaGdoB */ {
/* KOQMFA4Zt ily traian PWCpaGdoB */     if(n == 0 || n == 1) return 0;
/* KOQMFA4Zt ily traian PWCpaGdoB */     if(n == 2) return 1;
/* KOQMFA4Zt ily traian PWCpaGdoB */     if(n % 2 == 0) return 0;
/* KOQMFA4Zt ily traian PWCpaGdoB */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* KOQMFA4Zt ily traian PWCpaGdoB */     return 1;
/* KOQMFA4Zt ily traian PWCpaGdoB */ }
/* KOQMFA4Zt ily traian PWCpaGdoB */ 
/* KOQMFA4Zt ily traian PWCpaGdoB */ int put(int n)
/* KOQMFA4Zt ily traian PWCpaGdoB */ {
/* KOQMFA4Zt ily traian PWCpaGdoB */     int p = 1;
/* KOQMFA4Zt ily traian PWCpaGdoB */     while(n != 0)
/* KOQMFA4Zt ily traian PWCpaGdoB */     {
/* KOQMFA4Zt ily traian PWCpaGdoB */         p *= 10;
/* KOQMFA4Zt ily traian PWCpaGdoB */         n /= 10;
/* KOQMFA4Zt ily traian PWCpaGdoB */     }
/* KOQMFA4Zt ily traian PWCpaGdoB */     return p;
/* KOQMFA4Zt ily traian PWCpaGdoB */ }
/* KOQMFA4Zt ily traian PWCpaGdoB */ 
/* KOQMFA4Zt ily traian PWCpaGdoB */ int super(int n)
/* KOQMFA4Zt ily traian PWCpaGdoB */ {
/* KOQMFA4Zt ily traian PWCpaGdoB */     int aux = n;
/* KOQMFA4Zt ily traian PWCpaGdoB */     int putere = put(n / 10);
/* KOQMFA4Zt ily traian PWCpaGdoB */     while(n != 0)
/* KOQMFA4Zt ily traian PWCpaGdoB */     {
/* KOQMFA4Zt ily traian PWCpaGdoB */         aux = putere * (aux % 10) + aux / 10;
/* KOQMFA4Zt ily traian PWCpaGdoB */         if(prim(aux)) return 1;
/* KOQMFA4Zt ily traian PWCpaGdoB */         n /= 10;
/* KOQMFA4Zt ily traian PWCpaGdoB */     }
/* KOQMFA4Zt ily traian PWCpaGdoB */     return 0;
/* KOQMFA4Zt ily traian PWCpaGdoB */ }
/* KOQMFA4Zt ily traian PWCpaGdoB */ int main()
/* KOQMFA4Zt ily traian PWCpaGdoB */ {
/* KOQMFA4Zt ily traian PWCpaGdoB */     int n , a[52][52];
/* KOQMFA4Zt ily traian PWCpaGdoB */     cin >> n;
/* KOQMFA4Zt ily traian PWCpaGdoB */     for(int i = 1 ; i <= n ; i++)
/* KOQMFA4Zt ily traian PWCpaGdoB */         for(int j = 1 ; j <= n ; j++)
/* KOQMFA4Zt ily traian PWCpaGdoB */             cin >> a[i][j];
/* KOQMFA4Zt ily traian PWCpaGdoB */ 
/* KOQMFA4Zt ily traian PWCpaGdoB */     for(int i = 1 ; i <= n ; i++)
/* KOQMFA4Zt ily traian PWCpaGdoB */         for(int j = 1 ; j <= n ; j++)
/* KOQMFA4Zt ily traian PWCpaGdoB */             if(i < j && i + j <= n)
/* KOQMFA4Zt ily traian PWCpaGdoB */                 swap(a[i][j] , a[n-i+1][j]);
/* KOQMFA4Zt ily traian PWCpaGdoB */ 
/* KOQMFA4Zt ily traian PWCpaGdoB */     for(int i = 1 ; i <= n ; i++)
/* KOQMFA4Zt ily traian PWCpaGdoB */         for(int j = 1 ; j <= n ; j++)
/* KOQMFA4Zt ily traian PWCpaGdoB */             if(i > j && i + j <= n)
/* KOQMFA4Zt ily traian PWCpaGdoB */                 if(super(a[i][j])==1 && super(a[i][n-j+1])==1)
/* KOQMFA4Zt ily traian PWCpaGdoB */                     swap(a[i][j] , a[i][n-j+1]);
/* KOQMFA4Zt ily traian PWCpaGdoB */ 
/* KOQMFA4Zt ily traian PWCpaGdoB */     for(int i = 1 ; i <= n ; i++)
/* KOQMFA4Zt ily traian PWCpaGdoB */     {
/* KOQMFA4Zt ily traian PWCpaGdoB */         for(int j = 1 ; j <= n ; j++)
/* KOQMFA4Zt ily traian PWCpaGdoB */             cout << a[i][j] <<  ' ';
/* KOQMFA4Zt ily traian PWCpaGdoB */         cout << endl;
/* KOQMFA4Zt ily traian PWCpaGdoB */     }
/* KOQMFA4Zt ily traian PWCpaGdoB */     return 0;
/* KOQMFA4Zt ily traian PWCpaGdoB */ }