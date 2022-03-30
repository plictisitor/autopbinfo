/* jEPlKL4Lo ily traian LACAzo5Xm */ #include <algorithm>
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
/* jEPlKL4Lo ily traian LACAzo5Xm */ using namespace std;
/* jEPlKL4Lo ily traian LACAzo5Xm */ 
/* jEPlKL4Lo ily traian LACAzo5Xm */ int main()
/* jEPlKL4Lo ily traian LACAzo5Xm */ {
/* jEPlKL4Lo ily traian LACAzo5Xm */     char ch[11];
/* jEPlKL4Lo ily traian LACAzo5Xm */     cin >> ch;
/* jEPlKL4Lo ily traian LACAzo5Xm */     int i = 0;
/* jEPlKL4Lo ily traian LACAzo5Xm */     int indicevoc=-1 , ok=0;
/* jEPlKL4Lo ily traian LACAzo5Xm */     int indicecons=-1;
/* jEPlKL4Lo ily traian LACAzo5Xm */     char cons=0 , voc=0;
/* jEPlKL4Lo ily traian LACAzo5Xm */     while(ch[i]!='\0')
/* jEPlKL4Lo ily traian LACAzo5Xm */     {
/* jEPlKL4Lo ily traian LACAzo5Xm */         if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
/* jEPlKL4Lo ily traian LACAzo5Xm */         {
/* jEPlKL4Lo ily traian LACAzo5Xm */             if(ok==0)
/* jEPlKL4Lo ily traian LACAzo5Xm */                 indicevoc=i , voc=ch[i] , ok++;
/* jEPlKL4Lo ily traian LACAzo5Xm */         }
/* jEPlKL4Lo ily traian LACAzo5Xm */         else
/* jEPlKL4Lo ily traian LACAzo5Xm */             indicecons=i , cons=ch[i];
/* jEPlKL4Lo ily traian LACAzo5Xm */         i++;
/* jEPlKL4Lo ily traian LACAzo5Xm */     }
/* jEPlKL4Lo ily traian LACAzo5Xm */     i=0;
/* jEPlKL4Lo ily traian LACAzo5Xm */     if(indicevoc!=-1 && indicecons!=-1)
/* jEPlKL4Lo ily traian LACAzo5Xm */     {
/* jEPlKL4Lo ily traian LACAzo5Xm */         while(ch[i]!='\0')
/* jEPlKL4Lo ily traian LACAzo5Xm */         {
/* jEPlKL4Lo ily traian LACAzo5Xm */             if(i==indicevoc)
/* jEPlKL4Lo ily traian LACAzo5Xm */                 cout << cons;
/* jEPlKL4Lo ily traian LACAzo5Xm */             else if(i==indicecons)
/* jEPlKL4Lo ily traian LACAzo5Xm */                 cout << voc;
/* jEPlKL4Lo ily traian LACAzo5Xm */             else
/* jEPlKL4Lo ily traian LACAzo5Xm */                 cout << ch[i];
/* jEPlKL4Lo ily traian LACAzo5Xm */             i++;
/* jEPlKL4Lo ily traian LACAzo5Xm */         }
/* jEPlKL4Lo ily traian LACAzo5Xm */     }
/* jEPlKL4Lo ily traian LACAzo5Xm */     else
/* jEPlKL4Lo ily traian LACAzo5Xm */     cout << "IMPOSIBIL";
/* jEPlKL4Lo ily traian LACAzo5Xm */     return 0;    
/* jEPlKL4Lo ily traian LACAzo5Xm */ }