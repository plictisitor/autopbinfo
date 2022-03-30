/* 5UtpIgkHJ ily traian oyh8nqa7B */ #include <algorithm>
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
/* 5UtpIgkHJ ily traian oyh8nqa7B */ using namespace std;
/* 5UtpIgkHJ ily traian oyh8nqa7B */ 
/* 5UtpIgkHJ ily traian oyh8nqa7B */ int main()
/* 5UtpIgkHJ ily traian oyh8nqa7B */ {
/* 5UtpIgkHJ ily traian oyh8nqa7B */     int n;
/* 5UtpIgkHJ ily traian oyh8nqa7B */     cin >> n;
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==1)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     cout << "*";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==2)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==3)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==4)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==5)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==6)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==7)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "      *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "     * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *         *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==8)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "      * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "     *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *         *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *           *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==9)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "        *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "       * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "      *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "     *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    *       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *         *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *           *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *             *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * * * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */     if (n==10)
/* 5UtpIgkHJ ily traian oyh8nqa7B */     {
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "         *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "        * *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "       *   *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "      *     *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "     *       *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "    *         *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "   *           *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "  *             *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << " *               *" << endl;
/* 5UtpIgkHJ ily traian oyh8nqa7B */         cout << "* * * * * * * * * *";
/* 5UtpIgkHJ ily traian oyh8nqa7B */     }
/* 5UtpIgkHJ ily traian oyh8nqa7B */ }