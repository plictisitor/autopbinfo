/* 1fqFRocS3 ily traian 1IXHfEtbQ */ #include <algorithm>
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
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ using namespace std;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ ifstream cin("plimbare1.in");
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ ofstream cout("plimbare1.out");
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int n , m , a , b , c , cer ; 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ long long t;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ struct poz
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     int i , j , c;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }V[125001];
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int T[100001];
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int comp(poz a , poz b)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     return a.c < b.c;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int leaga(int r1 , int r2)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     T[r2] = T[r1];
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int radacina(int a)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     if(a == T[a]) return a;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     else return T[a] = radacina(T[a]);
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ void kruskal()
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     int r1 , r2 , k = 0;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     for(int i = 1 ; i <= m ; i++)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         r1 = radacina(V[i].i);
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         r2 = radacina(V[i].j);
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         if(r1 != r2)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             t += V[i].c;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             leaga(r1 , r2);
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ 
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ int main()
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     cin >> n >> m;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     for(int i = 1 ; i <= m ; i++)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         T[i] = i;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     for(int i = 1 ; i <= m ; i++)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         cin >> cer;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         if(cer == 1)
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             cin >> a >> b;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].i = a;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].j = b;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].c = 0;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         else
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         {
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             cin >> a >> b >> c;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].i = a;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].j = b;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */             V[i].c = c;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */         }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     }
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     sort(V + 1 , V + m + 1 , comp);
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     kruskal();
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     cout << t;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */     return 0;
/* 1fqFRocS3 ily traian 1IXHfEtbQ */ }