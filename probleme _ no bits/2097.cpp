/* XD74XYIke ily traian UOC1hEHFe */ #include <algorithm>
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
/* XD74XYIke ily traian UOC1hEHFe */ using namespace std;
/* XD74XYIke ily traian UOC1hEHFe */ 
/* XD74XYIke ily traian UOC1hEHFe */ ifstream fin("vistiernic.in");
/* XD74XYIke ily traian UOC1hEHFe */ ofstream fout("vistiernic.out");
/* XD74XYIke ily traian UOC1hEHFe */ 
/* XD74XYIke ily traian UOC1hEHFe */ int main()
/* XD74XYIke ily traian UOC1hEHFe */ {
/* XD74XYIke ily traian UOC1hEHFe */     int n;
/* XD74XYIke ily traian UOC1hEHFe */     fin >> n;
/* XD74XYIke ily traian UOC1hEHFe */     long long int tmp , cnt2=0 , cnt5=0;
/* XD74XYIke ily traian UOC1hEHFe */     for(int i = 0 ; i < n ; ++i)
/* XD74XYIke ily traian UOC1hEHFe */     {
/* XD74XYIke ily traian UOC1hEHFe */         fin >> tmp;
/* XD74XYIke ily traian UOC1hEHFe */         while(tmp%2==0)
/* XD74XYIke ily traian UOC1hEHFe */         {
/* XD74XYIke ily traian UOC1hEHFe */             cnt2++;
/* XD74XYIke ily traian UOC1hEHFe */             tmp/=2;
/* XD74XYIke ily traian UOC1hEHFe */         }
/* XD74XYIke ily traian UOC1hEHFe */         while(tmp%5==0)
/* XD74XYIke ily traian UOC1hEHFe */         {
/* XD74XYIke ily traian UOC1hEHFe */             cnt5++;
/* XD74XYIke ily traian UOC1hEHFe */             tmp/=5;
/* XD74XYIke ily traian UOC1hEHFe */         }
/* XD74XYIke ily traian UOC1hEHFe */     }
/* XD74XYIke ily traian UOC1hEHFe */     if(cnt2>cnt5)
/* XD74XYIke ily traian UOC1hEHFe */     fout << cnt5;
/* XD74XYIke ily traian UOC1hEHFe */     else
/* XD74XYIke ily traian UOC1hEHFe */     fout << cnt2;
/* XD74XYIke ily traian UOC1hEHFe */     return 0;
/* XD74XYIke ily traian UOC1hEHFe */ }