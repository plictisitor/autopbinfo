/* TbQKuxQTV ily traian Bv4RXlDjq */ #include <algorithm>
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
/* TbQKuxQTV ily traian Bv4RXlDjq */ 
/* TbQKuxQTV ily traian Bv4RXlDjq */ using namespace std;
/* TbQKuxQTV ily traian Bv4RXlDjq */ ifstream fin("evip.in");
/* TbQKuxQTV ily traian Bv4RXlDjq */ ofstream fout("evip.out");
/* TbQKuxQTV ily traian Bv4RXlDjq */ unsigned long long S;
/* TbQKuxQTV ily traian Bv4RXlDjq */ int c,i,L,impar,par,p,k,kmax,imax,u;
/* TbQKuxQTV ily traian Bv4RXlDjq */ char s[10005];
/* TbQKuxQTV ily traian Bv4RXlDjq */ bool cif[10];
/* TbQKuxQTV ily traian Bv4RXlDjq */ 
/* TbQKuxQTV ily traian Bv4RXlDjq */ bool maiMare(int p1, int p2)
/* TbQKuxQTV ily traian Bv4RXlDjq */ { int i=0;
/* TbQKuxQTV ily traian Bv4RXlDjq */   while(s[i] && s[p1+i]==s[p2+i])i++;
/* TbQKuxQTV ily traian Bv4RXlDjq */   return (s[p1+i]>s[p2+i]);
/* TbQKuxQTV ily traian Bv4RXlDjq */ }
/* TbQKuxQTV ily traian Bv4RXlDjq */ int main()
/* TbQKuxQTV ily traian Bv4RXlDjq */ { fin>>c>>s;
/* TbQKuxQTV ily traian Bv4RXlDjq */   while(s[i]%2==0)i++;
/* TbQKuxQTV ily traian Bv4RXlDjq */   while(s[i]){while(s[i]%2){impar++;i++;}
/* TbQKuxQTV ily traian Bv4RXlDjq */               while(s[i] && s[i]%2==0) {par++;i++;}
/* TbQKuxQTV ily traian Bv4RXlDjq */               S+=impar*par;
/* TbQKuxQTV ily traian Bv4RXlDjq */               L=impar+par;
/* TbQKuxQTV ily traian Bv4RXlDjq */               if(impar*par && L>kmax) {kmax=L; imax=i-L;}
/* TbQKuxQTV ily traian Bv4RXlDjq */               else if(L==kmax && maiMare(i-L,imax)) imax=i-L;
/* TbQKuxQTV ily traian Bv4RXlDjq */               impar=par=0;
/* TbQKuxQTV ily traian Bv4RXlDjq */              }
/* TbQKuxQTV ily traian Bv4RXlDjq */   if(c==1)fout<<S<<'\n';
/* TbQKuxQTV ily traian Bv4RXlDjq */   else if(c==2){p=1;
/* TbQKuxQTV ily traian Bv4RXlDjq */                 for(i=2; i*i<=S;++i)if(S%i==0) p=i;
/* TbQKuxQTV ily traian Bv4RXlDjq */                 fout<<p+S/p<<'\n';
/* TbQKuxQTV ily traian Bv4RXlDjq */                }
/* TbQKuxQTV ily traian Bv4RXlDjq */        else { for(i=0;i<kmax;i++) cif[s[imax+i]-'0']=true;
/* TbQKuxQTV ily traian Bv4RXlDjq */               k=S=0;u=11;
/* TbQKuxQTV ily traian Bv4RXlDjq */               for(i=0;i<=9;i++) if(cif[i]) {k++;S+=i;}
/* TbQKuxQTV ily traian Bv4RXlDjq */               for(i=2;i<k;i++) {S=S*i;u=u*10+1;}
/* TbQKuxQTV ily traian Bv4RXlDjq */               fout<<S*u<<'\n';
/* TbQKuxQTV ily traian Bv4RXlDjq */             }
/* TbQKuxQTV ily traian Bv4RXlDjq */   fin.close();fout.close();
/* TbQKuxQTV ily traian Bv4RXlDjq */   return 0;
/* TbQKuxQTV ily traian Bv4RXlDjq */ }