/* pHT7u2G4e ily traian mTfRAW67o */ #include <algorithm>
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
/* pHT7u2G4e ily traian mTfRAW67o */ 
/* pHT7u2G4e ily traian mTfRAW67o */ using namespace std;
/* pHT7u2G4e ily traian mTfRAW67o */ 
/* pHT7u2G4e ily traian mTfRAW67o */ ifstream fin("comori1.in");
/* pHT7u2G4e ily traian mTfRAW67o */ ofstream fout("comori1.out");
/* pHT7u2G4e ily traian mTfRAW67o */ 
/* pHT7u2G4e ily traian mTfRAW67o */ int main()
/* pHT7u2G4e ily traian mTfRAW67o */ {
/* pHT7u2G4e ily traian mTfRAW67o */     int n;
/* pHT7u2G4e ily traian mTfRAW67o */     fin >> n;
/* pHT7u2G4e ily traian mTfRAW67o */     int a[1000];
/* pHT7u2G4e ily traian mTfRAW67o */     int cnt=0;
/* pHT7u2G4e ily traian mTfRAW67o */     for(int i = 0 ; i < n ; ++i)
/* pHT7u2G4e ily traian mTfRAW67o */     {
/* pHT7u2G4e ily traian mTfRAW67o */         fin >> a[i];    
/* pHT7u2G4e ily traian mTfRAW67o */     }
/* pHT7u2G4e ily traian mTfRAW67o */     for(int i = 0 ; i < n ; ++i)
/* pHT7u2G4e ily traian mTfRAW67o */     {
/* pHT7u2G4e ily traian mTfRAW67o */         if(a[i]>a[i+1] && a[i+1]!=a[n])
/* pHT7u2G4e ily traian mTfRAW67o */         {
/* pHT7u2G4e ily traian mTfRAW67o */         fout << i+2 << ' ';
/* pHT7u2G4e ily traian mTfRAW67o */         cnt++;
/* pHT7u2G4e ily traian mTfRAW67o */         }
/* pHT7u2G4e ily traian mTfRAW67o */     }
/* pHT7u2G4e ily traian mTfRAW67o */     
/* pHT7u2G4e ily traian mTfRAW67o */     if(cnt==0)
/* pHT7u2G4e ily traian mTfRAW67o */     fout << 0;
/* pHT7u2G4e ily traian mTfRAW67o */     
/* pHT7u2G4e ily traian mTfRAW67o */     fin.close();
/* pHT7u2G4e ily traian mTfRAW67o */     fout.close();
/* pHT7u2G4e ily traian mTfRAW67o */     
/* pHT7u2G4e ily traian mTfRAW67o */     return 0;    
/* pHT7u2G4e ily traian mTfRAW67o */ }