/* ZtbtCQn5C ily traian OaNaVdxYp */ #include <algorithm>
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
/* ZtbtCQn5C ily traian OaNaVdxYp */ using namespace std;
/* ZtbtCQn5C ily traian OaNaVdxYp */ 
/* ZtbtCQn5C ily traian OaNaVdxYp */ int main ()
/* ZtbtCQn5C ily traian OaNaVdxYp */ {
/* ZtbtCQn5C ily traian OaNaVdxYp */     ifstream fin("dans.in");
/* ZtbtCQn5C ily traian OaNaVdxYp */     ofstream fout("dans.out");
/* ZtbtCQn5C ily traian OaNaVdxYp */     int n,t,c,tmax=-2,tmin=20000,sc=0,st=0;
/* ZtbtCQn5C ily traian OaNaVdxYp */     fin >> n;
/* ZtbtCQn5C ily traian OaNaVdxYp */     for (int i=1;i<=n;++i)
/* ZtbtCQn5C ily traian OaNaVdxYp */     {
/* ZtbtCQn5C ily traian OaNaVdxYp */         fin >> t >> c;
/* ZtbtCQn5C ily traian OaNaVdxYp */         st=st+t;
/* ZtbtCQn5C ily traian OaNaVdxYp */         if (t>tmax) tmax=t;
/* ZtbtCQn5C ily traian OaNaVdxYp */         if (t< tmin) tmin=t;
/* ZtbtCQn5C ily traian OaNaVdxYp */         sc=sc+c;
/* ZtbtCQn5C ily traian OaNaVdxYp */     }
/* ZtbtCQn5C ily traian OaNaVdxYp */     if (st <= 90)
/* ZtbtCQn5C ily traian OaNaVdxYp */         fout << "DA"<< '\n'<<90-st<<'\n'<< sc<<'\n'<<tmax<<" "<<tmin;
/* ZtbtCQn5C ily traian OaNaVdxYp */     if (st >90)
/* ZtbtCQn5C ily traian OaNaVdxYp */         fout << "NU"<<'\n'<<st-90<<'\n'<<sc<<'\n'<<tmax<<" "<<tmin;
/* ZtbtCQn5C ily traian OaNaVdxYp */     return 0;
/* ZtbtCQn5C ily traian OaNaVdxYp */ 
/* ZtbtCQn5C ily traian OaNaVdxYp */ 
/* ZtbtCQn5C ily traian OaNaVdxYp */ }