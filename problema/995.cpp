/* EUu2H0xmt ily traian w34TFY8eC */ #include <bits/stdc++.h>/* EUu2H0xmt ily traian w34TFY8eC */ /* EUu2H0xmt ily traian w34TFY8eC */ using namespace std;/* EUu2H0xmt ily traian w34TFY8eC */ /* EUu2H0xmt ily traian w34TFY8eC */ ifstream fin("numere6.in");/* EUu2H0xmt ily traian w34TFY8eC */ ofstream fout("numere6.out");/* EUu2H0xmt ily traian w34TFY8eC */ /* EUu2H0xmt ily traian w34TFY8eC */ int main()/* EUu2H0xmt ily traian w34TFY8eC */ {/* EUu2H0xmt ily traian w34TFY8eC */     int n , m;/* EUu2H0xmt ily traian w34TFY8eC */     fin >> n >> m;/* EUu2H0xmt ily traian w34TFY8eC */     int v[20];/* EUu2H0xmt ily traian w34TFY8eC */     int p = 0;/* EUu2H0xmt ily traian w34TFY8eC */     if(n==0)/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=0 , p++;/* EUu2H0xmt ily traian w34TFY8eC */     if(m==0)/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=0 , p++;/* EUu2H0xmt ily traian w34TFY8eC */     while(n)/* EUu2H0xmt ily traian w34TFY8eC */     {/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=n%10;/* EUu2H0xmt ily traian w34TFY8eC */         p++;/* EUu2H0xmt ily traian w34TFY8eC */         n/=10;/* EUu2H0xmt ily traian w34TFY8eC */     }/* EUu2H0xmt ily traian w34TFY8eC */     while(m)/* EUu2H0xmt ily traian w34TFY8eC */     {/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=m%10;/* EUu2H0xmt ily traian w34TFY8eC */         p++;/* EUu2H0xmt ily traian w34TFY8eC */         m/=10;/* EUu2H0xmt ily traian w34TFY8eC */     }/* EUu2H0xmt ily traian w34TFY8eC */     for(int i = 9 ; i >= 0 ; --i)/* EUu2H0xmt ily traian w34TFY8eC */     {/* EUu2H0xmt ily traian w34TFY8eC */         for(int j = 0 ; j < p ; ++j)/* EUu2H0xmt ily traian w34TFY8eC */         {/* EUu2H0xmt ily traian w34TFY8eC */             if(i==v[j])/* EUu2H0xmt ily traian w34TFY8eC */             fout << i;/* EUu2H0xmt ily traian w34TFY8eC */         }/* EUu2H0xmt ily traian w34TFY8eC */     }/* EUu2H0xmt ily traian w34TFY8eC */     return 0;/* EUu2H0xmt ily traian w34TFY8eC */ }