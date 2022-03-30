/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ #include <algorithm>
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
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ 
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ 
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ using namespace std;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ 
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ int main ()
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ {
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     ifstream istr;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     ofstream ostr;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     istr.open ("n_suma.in");
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     ostr.open ("n_suma.out");
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     int n;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     istr >> n;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     int s=0;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     int tmp;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     for (int i=1 ; i <= n ; i++)
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     {  istr >> tmp;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     s+=tmp;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ }
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     ostr << s;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     istr.close();
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     ostr.close();
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */     return 0;
/* 4M0qP8Q5P ily traian Tq6KTe5Dn */ }