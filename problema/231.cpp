/* 5fwuyu40F ily traian 5cZ2JV5ov */ #include <bits/stdc++.h>/* 5fwuyu40F ily traian 5cZ2JV5ov */ using namespace std;/* 5fwuyu40F ily traian 5cZ2JV5ov */ ifstream fin("exista.in");/* 5fwuyu40F ily traian 5cZ2JV5ov */ ofstream fout("exista.out");/* 5fwuyu40F ily traian 5cZ2JV5ov */ int main()/* 5fwuyu40F ily traian 5cZ2JV5ov */ {/* 5fwuyu40F ily traian 5cZ2JV5ov */     int k , n , m , a[12][12] , s = 0 , c = 0;/* 5fwuyu40F ily traian 5cZ2JV5ov */     fin >> k >> n >> m;/* 5fwuyu40F ily traian 5cZ2JV5ov */     for(int i = 0 ; i < n ; ++i)/* 5fwuyu40F ily traian 5cZ2JV5ov */         for(int j = 0 ; j < m ; ++j)/* 5fwuyu40F ily traian 5cZ2JV5ov */             fin >> a[i][j];/* 5fwuyu40F ily traian 5cZ2JV5ov */     for(int j = 0 ; j < m ; ++j)/* 5fwuyu40F ily traian 5cZ2JV5ov */     {/* 5fwuyu40F ily traian 5cZ2JV5ov */         int cnt=0;/* 5fwuyu40F ily traian 5cZ2JV5ov */         for (int i = 0 ; i < n ; ++i)/* 5fwuyu40F ily traian 5cZ2JV5ov */         {/* 5fwuyu40F ily traian 5cZ2JV5ov */             if(a[i][j]==k)/* 5fwuyu40F ily traian 5cZ2JV5ov */             cnt++;/* 5fwuyu40F ily traian 5cZ2JV5ov */         }/* 5fwuyu40F ily traian 5cZ2JV5ov */         if(cnt!=0) {c++ ; s += j + 1;}/* 5fwuyu40F ily traian 5cZ2JV5ov */     }/* 5fwuyu40F ily traian 5cZ2JV5ov */     if(c==0) fout << "NU EXISTA";/* 5fwuyu40F ily traian 5cZ2JV5ov */     else fout << s;/* 5fwuyu40F ily traian 5cZ2JV5ov */     /* 5fwuyu40F ily traian 5cZ2JV5ov */     fin.close();/* 5fwuyu40F ily traian 5cZ2JV5ov */     fout.close();/* 5fwuyu40F ily traian 5cZ2JV5ov */     /* 5fwuyu40F ily traian 5cZ2JV5ov */     return 0;    /* 5fwuyu40F ily traian 5cZ2JV5ov */ }