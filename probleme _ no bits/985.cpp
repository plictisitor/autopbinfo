/* M4Dwvg2Uw ily traian a5PwngsoS */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* M4Dwvg2Uw ily traian a5PwngsoS */ #include<algorithm>
/* M4Dwvg2Uw ily traian a5PwngsoS */ using namespace std;
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ ofstream cout("cifre11.out");
/* M4Dwvg2Uw ily traian a5PwngsoS */ ifstream cin("cifre11.in");
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ struct cifra
/* M4Dwvg2Uw ily traian a5PwngsoS */ {
/* M4Dwvg2Uw ily traian a5PwngsoS */     int nr,s,nrc;
/* M4Dwvg2Uw ily traian a5PwngsoS */ };cifra S[10001];
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ int comp(cifra a , cifra b){return a.s < b.s || (a.s == b.s && a.nr > b.nr);}
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ int cmp(cifra a , cifra b){return a.nrc > b.nrc || (a.nrc == b.nrc && a.nr < b.nr);}
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ int n , f[10001] , q[10001];
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ int main()
/* M4Dwvg2Uw ily traian a5PwngsoS */ {
/* M4Dwvg2Uw ily traian a5PwngsoS */    cin >> n;
/* M4Dwvg2Uw ily traian a5PwngsoS */    for(int i = 1 ; i <= n ; i++)
/* M4Dwvg2Uw ily traian a5PwngsoS */    {
/* M4Dwvg2Uw ily traian a5PwngsoS */         cin >> S[i].nr;
/* M4Dwvg2Uw ily traian a5PwngsoS */         int g[10001] = {0};
/* M4Dwvg2Uw ily traian a5PwngsoS */         int aux = S[i].nr , s1 = 0 , ct = 0;
/* M4Dwvg2Uw ily traian a5PwngsoS */         while(aux) s1 += aux % 10 , f[aux%10]++ , g[aux%10]++ , aux /= 10;
/* M4Dwvg2Uw ily traian a5PwngsoS */         int maxim = -1;
/* M4Dwvg2Uw ily traian a5PwngsoS */         for(int j = 0 ; j <= 10 ; j++)
/* M4Dwvg2Uw ily traian a5PwngsoS */         {
/* M4Dwvg2Uw ily traian a5PwngsoS */             if(g[j] > 0) ct++ , q[j]++;
/* M4Dwvg2Uw ily traian a5PwngsoS */             else
/* M4Dwvg2Uw ily traian a5PwngsoS */             {
/* M4Dwvg2Uw ily traian a5PwngsoS */                 if(ct > maxim) maxim = ct;
/* M4Dwvg2Uw ily traian a5PwngsoS */                 ct = 0;
/* M4Dwvg2Uw ily traian a5PwngsoS */             }
/* M4Dwvg2Uw ily traian a5PwngsoS */         }
/* M4Dwvg2Uw ily traian a5PwngsoS */         S[i].nrc = maxim;
/* M4Dwvg2Uw ily traian a5PwngsoS */         S[i].s = s1;
/* M4Dwvg2Uw ily traian a5PwngsoS */    }
/* M4Dwvg2Uw ily traian a5PwngsoS */     sort(S + 1, S + n + 1 , comp);
/* M4Dwvg2Uw ily traian a5PwngsoS */     cout << S[1].nr << endl;
/* M4Dwvg2Uw ily traian a5PwngsoS */     sort(S + 1, S + n + 1, cmp);
/* M4Dwvg2Uw ily traian a5PwngsoS */     cout << S[1].nr << endl;
/* M4Dwvg2Uw ily traian a5PwngsoS */     int maxi = -1;
/* M4Dwvg2Uw ily traian a5PwngsoS */     for(int i = 0 ; i <= 9 ; i++)
/* M4Dwvg2Uw ily traian a5PwngsoS */         if(q[i] > maxi) maxi = q[i];
/* M4Dwvg2Uw ily traian a5PwngsoS */     
/* M4Dwvg2Uw ily traian a5PwngsoS */      for(int i = 0 ; i <= 9 ; i++)
/* M4Dwvg2Uw ily traian a5PwngsoS */         if(q[i] == maxi) cout << i << " ";
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ 
/* M4Dwvg2Uw ily traian a5PwngsoS */ }