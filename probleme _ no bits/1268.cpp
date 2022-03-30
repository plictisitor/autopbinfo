/* ImlTipaqR ily traian eEJM11Osn */ #include <algorithm>
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
/* ImlTipaqR ily traian eEJM11Osn */ using namespace std;
/* ImlTipaqR ily traian eEJM11Osn */ ifstream fin("easyquery.in");
/* ImlTipaqR ily traian eEJM11Osn */ ofstream fout("easyquery.out");
/* ImlTipaqR ily traian eEJM11Osn */ int main()
/* ImlTipaqR ily traian eEJM11Osn */ {
/* ImlTipaqR ily traian eEJM11Osn */     long long A[100002], B[100002], n,S=0,q,op,st,dr,v;
/* ImlTipaqR ily traian eEJM11Osn */     B[0]=0;
/* ImlTipaqR ily traian eEJM11Osn */     fin>>n;
/* ImlTipaqR ily traian eEJM11Osn */     for (int i=1;i<=n;++i)
/* ImlTipaqR ily traian eEJM11Osn */     {
/* ImlTipaqR ily traian eEJM11Osn */         fin>>A[i];
/* ImlTipaqR ily traian eEJM11Osn */         B[i]=A[i] -S;
/* ImlTipaqR ily traian eEJM11Osn */         S += B[i];
/* ImlTipaqR ily traian eEJM11Osn */     }
/* ImlTipaqR ily traian eEJM11Osn */     fin >>q;
/* ImlTipaqR ily traian eEJM11Osn */     for (int i=1;i<=q;++i)
/* ImlTipaqR ily traian eEJM11Osn */     {
/* ImlTipaqR ily traian eEJM11Osn */         fin>>op;
/* ImlTipaqR ily traian eEJM11Osn */         fin>>st>>dr>>v;
/* ImlTipaqR ily traian eEJM11Osn */         if(op==2) v=(-1)*v;
/* ImlTipaqR ily traian eEJM11Osn */         B[st]=B[st] +v;
/* ImlTipaqR ily traian eEJM11Osn */         if (dr<= n) B[dr+1]=B[dr+1]-v;
/* ImlTipaqR ily traian eEJM11Osn */     }
/* ImlTipaqR ily traian eEJM11Osn */     for(int i=1;i<=n;++i)
/* ImlTipaqR ily traian eEJM11Osn */     {
/* ImlTipaqR ily traian eEJM11Osn */         B[i]=B[i-1] + B[i];
/* ImlTipaqR ily traian eEJM11Osn */         fout <<B[i]<<" ";
/* ImlTipaqR ily traian eEJM11Osn */     }
/* ImlTipaqR ily traian eEJM11Osn */     fin.close();
/* ImlTipaqR ily traian eEJM11Osn */     fout.close();
/* ImlTipaqR ily traian eEJM11Osn */     return 0;
/* ImlTipaqR ily traian eEJM11Osn */ }