/* MbiBsy8hJ ily traian VDhHMw6WG */ #include <bits/stdc++.h>/* MbiBsy8hJ ily traian VDhHMw6WG */ using namespace std;/* MbiBsy8hJ ily traian VDhHMw6WG */ ifstream fin("numere14.in");/* MbiBsy8hJ ily traian VDhHMw6WG */ ofstream fout("numere14.out");/* MbiBsy8hJ ily traian VDhHMw6WG */ int nrcif(int n)/* MbiBsy8hJ ily traian VDhHMw6WG */ {/* MbiBsy8hJ ily traian VDhHMw6WG */     int cnt = 0;/* MbiBsy8hJ ily traian VDhHMw6WG */     while(n != 0)/* MbiBsy8hJ ily traian VDhHMw6WG */     {/* MbiBsy8hJ ily traian VDhHMw6WG */         cnt++;/* MbiBsy8hJ ily traian VDhHMw6WG */         n /= 10;/* MbiBsy8hJ ily traian VDhHMw6WG */     }/* MbiBsy8hJ ily traian VDhHMw6WG */     return cnt;/* MbiBsy8hJ ily traian VDhHMw6WG */ }/* MbiBsy8hJ ily traian VDhHMw6WG */ int main()/* MbiBsy8hJ ily traian VDhHMw6WG */ {/* MbiBsy8hJ ily traian VDhHMw6WG */     int n , x , cnt = 0 , s = 0;/* MbiBsy8hJ ily traian VDhHMw6WG */     fin >> n;/* MbiBsy8hJ ily traian VDhHMw6WG */     for(int i = 1; i <= n; ++i)/* MbiBsy8hJ ily traian VDhHMw6WG */     {/* MbiBsy8hJ ily traian VDhHMw6WG */         fin >> x;/* MbiBsy8hJ ily traian VDhHMw6WG */         int cnt = nrcif(x);/* MbiBsy8hJ ily traian VDhHMw6WG */         if(cnt % 2 == 1)/* MbiBsy8hJ ily traian VDhHMw6WG */         {/* MbiBsy8hJ ily traian VDhHMw6WG */             cnt /= 2;/* MbiBsy8hJ ily traian VDhHMw6WG */             while(cnt != 0)/* MbiBsy8hJ ily traian VDhHMw6WG */             {/* MbiBsy8hJ ily traian VDhHMw6WG */                 cnt--;/* MbiBsy8hJ ily traian VDhHMw6WG */                 x /= 10;/* MbiBsy8hJ ily traian VDhHMw6WG */             }/* MbiBsy8hJ ily traian VDhHMw6WG */             if(x % 10 % 2 == 1) s += x % 10;/* MbiBsy8hJ ily traian VDhHMw6WG */         }/* MbiBsy8hJ ily traian VDhHMw6WG */     }/* MbiBsy8hJ ily traian VDhHMw6WG */     fout << s;/* MbiBsy8hJ ily traian VDhHMw6WG */ /* MbiBsy8hJ ily traian VDhHMw6WG */     fin.close();/* MbiBsy8hJ ily traian VDhHMw6WG */     fout.close();/* MbiBsy8hJ ily traian VDhHMw6WG */ /* MbiBsy8hJ ily traian VDhHMw6WG */     return 0;/* MbiBsy8hJ ily traian VDhHMw6WG */ }/* MbiBsy8hJ ily traian VDhHMw6WG */ 