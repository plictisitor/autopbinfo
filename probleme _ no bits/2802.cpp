/* jCPXJnxMP ily traian XaJsfr0lz */ #include <algorithm>
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
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ using namespace std;
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ char nume1[101][101] , prenume1[101][101];
/* jCPXJnxMP ily traian XaJsfr0lz */ double x , y , z;
/* jCPXJnxMP ily traian XaJsfr0lz */ int n , cer , cnt;
/* jCPXJnxMP ily traian XaJsfr0lz */ double s;
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ struct poz
/* jCPXJnxMP ily traian XaJsfr0lz */ {
/* jCPXJnxMP ily traian XaJsfr0lz */     char nume[101] , prenume[101];
/* jCPXJnxMP ily traian XaJsfr0lz */     double media;
/* jCPXJnxMP ily traian XaJsfr0lz */ }A[101];
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ int maimic(poz a , poz b)
/* jCPXJnxMP ily traian XaJsfr0lz */ {
/* jCPXJnxMP ily traian XaJsfr0lz */     if(a.media > b. media) return 1;
/* jCPXJnxMP ily traian XaJsfr0lz */     else if(a.media == b.media && strcmp(a.nume , b.nume) < 0) return 1;
/* jCPXJnxMP ily traian XaJsfr0lz */     else if(a.media == b.media && strcmp(a.nume , b.nume) == 0 && strcmp(a.prenume , b.prenume) < 0) return 1;
/* jCPXJnxMP ily traian XaJsfr0lz */     else return 0;
/* jCPXJnxMP ily traian XaJsfr0lz */ }
/* jCPXJnxMP ily traian XaJsfr0lz */ 
/* jCPXJnxMP ily traian XaJsfr0lz */ int main()
/* jCPXJnxMP ily traian XaJsfr0lz */ {
/* jCPXJnxMP ily traian XaJsfr0lz */     cin >> n >> cer;
/* jCPXJnxMP ily traian XaJsfr0lz */     for(int i = 1 ; i <= n ; i++)
/* jCPXJnxMP ily traian XaJsfr0lz */     {
/* jCPXJnxMP ily traian XaJsfr0lz */         cin >> nume1[i] >> prenume1[i] >> x >> y >> z;
/* jCPXJnxMP ily traian XaJsfr0lz */         A[i].media = (x + y + z) /3;
/* jCPXJnxMP ily traian XaJsfr0lz */         strcpy(A[i].nume , nume1[i]);
/* jCPXJnxMP ily traian XaJsfr0lz */         strcpy(A[i].prenume , prenume1[i]);
/* jCPXJnxMP ily traian XaJsfr0lz */         s += A[i].media;
/* jCPXJnxMP ily traian XaJsfr0lz */     }
/* jCPXJnxMP ily traian XaJsfr0lz */     double medgen = s / n;
/* jCPXJnxMP ily traian XaJsfr0lz */     //cout << medgen << '\n';
/* jCPXJnxMP ily traian XaJsfr0lz */     for(int i = 1 ; i <= n ; i++)
/* jCPXJnxMP ily traian XaJsfr0lz */         if(A[i].media > medgen) cnt++;
/* jCPXJnxMP ily traian XaJsfr0lz */     if(cer == 1) cout << cnt;
/* jCPXJnxMP ily traian XaJsfr0lz */     else if(cer == 2)
/* jCPXJnxMP ily traian XaJsfr0lz */     {
/* jCPXJnxMP ily traian XaJsfr0lz */         cout << fixed << setprecision(2) << floor(medgen * 100) / 100 << '\n';
/* jCPXJnxMP ily traian XaJsfr0lz */         sort(A+1 , A+n+1 , maimic);
/* jCPXJnxMP ily traian XaJsfr0lz */         for(int i = 1 ; i <= n ; i++)
/* jCPXJnxMP ily traian XaJsfr0lz */         {
/* jCPXJnxMP ily traian XaJsfr0lz */             cout << A[i].nume << " " << A[i].prenume << " " << fixed << setprecision(2) << floor(A[i].media * 100) / 100 << '\n';
/* jCPXJnxMP ily traian XaJsfr0lz */         }
/* jCPXJnxMP ily traian XaJsfr0lz */     }
/* jCPXJnxMP ily traian XaJsfr0lz */ }