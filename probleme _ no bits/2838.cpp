/* ctGigXeqL ily traian 8DyQG73LH */ int NrPrime(int n)
/* ctGigXeqL ily traian 8DyQG73LH */ {
/* ctGigXeqL ily traian 8DyQG73LH */     int cnt = 0;
/* ctGigXeqL ily traian 8DyQG73LH */     while(n)
/* ctGigXeqL ily traian 8DyQG73LH */     {
/* ctGigXeqL ily traian 8DyQG73LH */         if(n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
/* ctGigXeqL ily traian 8DyQG73LH */             cnt++;
/* ctGigXeqL ily traian 8DyQG73LH */         n/=10;
/* ctGigXeqL ily traian 8DyQG73LH */     }
/* ctGigXeqL ily traian 8DyQG73LH */     return cnt;
/* ctGigXeqL ily traian 8DyQG73LH */ }