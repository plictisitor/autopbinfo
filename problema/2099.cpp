/* 7JKG9jQGe ily traian 3PND8qhPA */ #include <bits/stdc++.h>/* 7JKG9jQGe ily traian 3PND8qhPA */ using namespace std;/* 7JKG9jQGe ily traian 3PND8qhPA */ ifstream fin("unupatru.in");/* 7JKG9jQGe ily traian 3PND8qhPA */ ofstream fout("unupatru.out");/* 7JKG9jQGe ily traian 3PND8qhPA */ int pat(long long n)/* 7JKG9jQGe ily traian 3PND8qhPA */ {/* 7JKG9jQGe ily traian 3PND8qhPA */     long long cnt = 0 , n1 = n;/* 7JKG9jQGe ily traian 3PND8qhPA */     while(1)/* 7JKG9jQGe ily traian 3PND8qhPA */     {/* 7JKG9jQGe ily traian 3PND8qhPA */         if(n == 1 || n == 4) break;/* 7JKG9jQGe ily traian 3PND8qhPA */         cnt++;/* 7JKG9jQGe ily traian 3PND8qhPA */         long long n1 = n;/* 7JKG9jQGe ily traian 3PND8qhPA */         n = 0;/* 7JKG9jQGe ily traian 3PND8qhPA */         while(n1 != 0)/* 7JKG9jQGe ily traian 3PND8qhPA */         {/* 7JKG9jQGe ily traian 3PND8qhPA */             n += (n1 % 10) * (n1 % 10);/* 7JKG9jQGe ily traian 3PND8qhPA */             n1 /= 10;/* 7JKG9jQGe ily traian 3PND8qhPA */         }/* 7JKG9jQGe ily traian 3PND8qhPA */     }/* 7JKG9jQGe ily traian 3PND8qhPA */ /* 7JKG9jQGe ily traian 3PND8qhPA */     return cnt;/* 7JKG9jQGe ily traian 3PND8qhPA */ } main()/* 7JKG9jQGe ily traian 3PND8qhPA */ {/* 7JKG9jQGe ily traian 3PND8qhPA */     long long n , x;/* 7JKG9jQGe ily traian 3PND8qhPA */     fin >> n;/* 7JKG9jQGe ily traian 3PND8qhPA */     for(int i = 1 ; i <= n ; ++i)/* 7JKG9jQGe ily traian 3PND8qhPA */     {/* 7JKG9jQGe ily traian 3PND8qhPA */         fin >> x;/* 7JKG9jQGe ily traian 3PND8qhPA */         fout << pat(x) << " ";/* 7JKG9jQGe ily traian 3PND8qhPA */     }/* 7JKG9jQGe ily traian 3PND8qhPA */ /* 7JKG9jQGe ily traian 3PND8qhPA */     fin.close();/* 7JKG9jQGe ily traian 3PND8qhPA */     fout.close();/* 7JKG9jQGe ily traian 3PND8qhPA */ /* 7JKG9jQGe ily traian 3PND8qhPA */     return 0;/* 7JKG9jQGe ily traian 3PND8qhPA */ }