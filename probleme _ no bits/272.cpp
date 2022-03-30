/* 9iUQZIaPg ily traian XGAaqpD6M */ #include <algorithm>
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
/* 9iUQZIaPg ily traian XGAaqpD6M */ 
/* 9iUQZIaPg ily traian XGAaqpD6M */ using namespace std;
/* 9iUQZIaPg ily traian XGAaqpD6M */ 
/* 9iUQZIaPg ily traian XGAaqpD6M */ ifstream fin("paresort.in");
/* 9iUQZIaPg ily traian XGAaqpD6M */ ofstream fout("paresort.out");
/* 9iUQZIaPg ily traian XGAaqpD6M */ 
/* 9iUQZIaPg ily traian XGAaqpD6M */ int main()
/* 9iUQZIaPg ily traian XGAaqpD6M */ {
/* 9iUQZIaPg ily traian XGAaqpD6M */     int n;
/* 9iUQZIaPg ily traian XGAaqpD6M */     fin >> n;
/* 9iUQZIaPg ily traian XGAaqpD6M */     int a[1000];
/* 9iUQZIaPg ily traian XGAaqpD6M */     int p[1000];
/* 9iUQZIaPg ily traian XGAaqpD6M */     int ind=0;
/* 9iUQZIaPg ily traian XGAaqpD6M */     for(int i = 0 ; i < n ; ++i)
/* 9iUQZIaPg ily traian XGAaqpD6M */     {
/* 9iUQZIaPg ily traian XGAaqpD6M */         fin >> a[i];
/* 9iUQZIaPg ily traian XGAaqpD6M */         if(a[i]%2==0)
/* 9iUQZIaPg ily traian XGAaqpD6M */         {
/* 9iUQZIaPg ily traian XGAaqpD6M */             p[ind]=a[i];
/* 9iUQZIaPg ily traian XGAaqpD6M */             ind++;
/* 9iUQZIaPg ily traian XGAaqpD6M */         }
/* 9iUQZIaPg ily traian XGAaqpD6M */     }
/* 9iUQZIaPg ily traian XGAaqpD6M */     sort(p, p+ind);
/* 9iUQZIaPg ily traian XGAaqpD6M */     if(ind!=0)
/* 9iUQZIaPg ily traian XGAaqpD6M */     fout << ind << endl;
/* 9iUQZIaPg ily traian XGAaqpD6M */     for(int i = 0 ; i < ind ; ++i)
/* 9iUQZIaPg ily traian XGAaqpD6M */     fout << p[i] << ' ';
/* 9iUQZIaPg ily traian XGAaqpD6M */     if(ind==0)
/* 9iUQZIaPg ily traian XGAaqpD6M */     fout << "nu exista";
/* 9iUQZIaPg ily traian XGAaqpD6M */     
/* 9iUQZIaPg ily traian XGAaqpD6M */     fin.close();
/* 9iUQZIaPg ily traian XGAaqpD6M */     fout.close();
/* 9iUQZIaPg ily traian XGAaqpD6M */     
/* 9iUQZIaPg ily traian XGAaqpD6M */     return 0;
/* 9iUQZIaPg ily traian XGAaqpD6M */ }