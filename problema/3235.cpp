/* WSiG383N0 ily traian N9eOeweoB */ #include <bits/stdc++.h>/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ using namespace std;/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ ifstream cin("entries.in");/* WSiG383N0 ily traian N9eOeweoB */ ofstream cout("entries.out");/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ int T[10001] , n , x , y , cer;/* WSiG383N0 ily traian N9eOeweoB */ unordered_map <int , int> M;/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ void leaga(int a , int b)/* WSiG383N0 ily traian N9eOeweoB */ {/* WSiG383N0 ily traian N9eOeweoB */     if(T[a] > T[b]) T[a] = T[b];/* WSiG383N0 ily traian N9eOeweoB */     else T[b] = T[a];/* WSiG383N0 ily traian N9eOeweoB */ }/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ int radacina(int a)/* WSiG383N0 ily traian N9eOeweoB */ {/* WSiG383N0 ily traian N9eOeweoB */     if(a == T[a]) return a;/* WSiG383N0 ily traian N9eOeweoB */     else return T[a] = radacina(T[a]);/* WSiG383N0 ily traian N9eOeweoB */ }/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */ int main()/* WSiG383N0 ily traian N9eOeweoB */ {/* WSiG383N0 ily traian N9eOeweoB */     cin >> n;/* WSiG383N0 ily traian N9eOeweoB */     for(int i = 1 ; i <= 10000 ; i++)/* WSiG383N0 ily traian N9eOeweoB */         T[i] = i;/* WSiG383N0 ily traian N9eOeweoB */     for(int i = 1 ; i <= n ; i++)/* WSiG383N0 ily traian N9eOeweoB */     {/* WSiG383N0 ily traian N9eOeweoB */         cin >> x >> y >> cer;/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */         if(M[x] == 0) M[x] = M.size();/* WSiG383N0 ily traian N9eOeweoB */         if(M[y] == 0) M[y] = M.size();/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */         x = M[x] , y = M[y];/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */         if(cer == 1)/* WSiG383N0 ily traian N9eOeweoB */         {/* WSiG383N0 ily traian N9eOeweoB */             int r1 = radacina(x) , r2 = radacina(y);/* WSiG383N0 ily traian N9eOeweoB */             if(r1 != r2) leaga(r1 , r2);/* WSiG383N0 ily traian N9eOeweoB */         }/* WSiG383N0 ily traian N9eOeweoB */ /* WSiG383N0 ily traian N9eOeweoB */         else cout << (radacina(x) == radacina(y)) << '\n';/* WSiG383N0 ily traian N9eOeweoB */     }/* WSiG383N0 ily traian N9eOeweoB */ }