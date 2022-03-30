/* pq79HLvP5 ily traian 2f0LM1bue */ #include <algorithm>
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
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ using namespace std;
/* pq79HLvP5 ily traian 2f0LM1bue */ #define NN 100005
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ ifstream fin("pachete_multe.in");
/* pq79HLvP5 ily traian 2f0LM1bue */ ofstream fout("pachete_multe.out");
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ int n, spatiu[NN], unde[NN], liber ,M;
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ struct manevra{
/* pq79HLvP5 ily traian 2f0LM1bue */     int sursa,dest;
/* pq79HLvP5 ily traian 2f0LM1bue */     manevra(){sursa = 0, dest = 0;}
/* pq79HLvP5 ily traian 2f0LM1bue */     manevra(int i,int j){sursa = i, dest = j;}
/* pq79HLvP5 ily traian 2f0LM1bue */     friend ostream& operator << (ostream &os, manevra x)
/* pq79HLvP5 ily traian 2f0LM1bue */     {
/* pq79HLvP5 ily traian 2f0LM1bue */         os << x.sursa << " " << x.dest;
/* pq79HLvP5 ily traian 2f0LM1bue */         return os;
/* pq79HLvP5 ily traian 2f0LM1bue */     }
/* pq79HLvP5 ily traian 2f0LM1bue */ };
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ manevra v[2*NN+10];
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ void muta(int i){
/* pq79HLvP5 ily traian 2f0LM1bue */     v[++M] = manevra(i,liber);
/* pq79HLvP5 ily traian 2f0LM1bue */     spatiu[liber] = spatiu[i];
/* pq79HLvP5 ily traian 2f0LM1bue */     unde[spatiu[i]] = liber;
/* pq79HLvP5 ily traian 2f0LM1bue */     spatiu[i] = 0;
/* pq79HLvP5 ily traian 2f0LM1bue */     liber = i;
/* pq79HLvP5 ily traian 2f0LM1bue */ }
/* pq79HLvP5 ily traian 2f0LM1bue */ 
/* pq79HLvP5 ily traian 2f0LM1bue */ int main(){
/* pq79HLvP5 ily traian 2f0LM1bue */     assert(fin >> n );
/* pq79HLvP5 ily traian 2f0LM1bue */     for(int i=1 ; i<=n ; ++i)
/* pq79HLvP5 ily traian 2f0LM1bue */         assert(fin >> spatiu[i]), unde[spatiu[i]] = i;
/* pq79HLvP5 ily traian 2f0LM1bue */     liber = n+1;
/* pq79HLvP5 ily traian 2f0LM1bue */     for(int i=1 ; i<=n ; ++i)
/* pq79HLvP5 ily traian 2f0LM1bue */         if(spatiu[i]!=i)
/* pq79HLvP5 ily traian 2f0LM1bue */         {
/* pq79HLvP5 ily traian 2f0LM1bue */             if(spatiu[i]!=0)
/* pq79HLvP5 ily traian 2f0LM1bue */                 muta(i);
/* pq79HLvP5 ily traian 2f0LM1bue */             muta(unde[i]);
/* pq79HLvP5 ily traian 2f0LM1bue */         }
/* pq79HLvP5 ily traian 2f0LM1bue */     fout << M << "\n";
/* pq79HLvP5 ily traian 2f0LM1bue */     for(int i=1;i<=M;++i)
/* pq79HLvP5 ily traian 2f0LM1bue */         fout << v[i] << "\n";
/* pq79HLvP5 ily traian 2f0LM1bue */     return 0;
/* pq79HLvP5 ily traian 2f0LM1bue */ }