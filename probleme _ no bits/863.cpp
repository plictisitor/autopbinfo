/* ppBOauMoP ily traian 40fDFWiSF */ #include <algorithm>
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
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ using namespace std;
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ ifstream cin("parole.in");
/* ppBOauMoP ily traian 40fDFWiSF */ ofstream cout("parole.out");
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ bool lmi(char s[])
/* ppBOauMoP ily traian 40fDFWiSF */ {
/* ppBOauMoP ily traian 40fDFWiSF */     bool ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */     int i = 0;
/* ppBOauMoP ily traian 40fDFWiSF */     while(s[i]!='\0')
/* ppBOauMoP ily traian 40fDFWiSF */     {
/* ppBOauMoP ily traian 40fDFWiSF */         if(s[i]>='a' && s[i]<='z')
/* ppBOauMoP ily traian 40fDFWiSF */             ok=true;
/* ppBOauMoP ily traian 40fDFWiSF */         i++;
/* ppBOauMoP ily traian 40fDFWiSF */     }
/* ppBOauMoP ily traian 40fDFWiSF */     return ok;
/* ppBOauMoP ily traian 40fDFWiSF */ }
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ bool lma(char s[])
/* ppBOauMoP ily traian 40fDFWiSF */ {
/* ppBOauMoP ily traian 40fDFWiSF */     bool ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */     int i = 0;
/* ppBOauMoP ily traian 40fDFWiSF */     while(s[i]!='\0')
/* ppBOauMoP ily traian 40fDFWiSF */     {
/* ppBOauMoP ily traian 40fDFWiSF */         if(s[i]>='A' && s[i]<='Z')
/* ppBOauMoP ily traian 40fDFWiSF */             ok=true;
/* ppBOauMoP ily traian 40fDFWiSF */         i++;
/* ppBOauMoP ily traian 40fDFWiSF */     }
/* ppBOauMoP ily traian 40fDFWiSF */     return ok;
/* ppBOauMoP ily traian 40fDFWiSF */ }
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ bool cif(char s[])
/* ppBOauMoP ily traian 40fDFWiSF */ {
/* ppBOauMoP ily traian 40fDFWiSF */     bool ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */     int i = 0;
/* ppBOauMoP ily traian 40fDFWiSF */     while(s[i]!='\0')
/* ppBOauMoP ily traian 40fDFWiSF */     {
/* ppBOauMoP ily traian 40fDFWiSF */         if(s[i]>='0' && s[i]<='9')
/* ppBOauMoP ily traian 40fDFWiSF */             ok=true;
/* ppBOauMoP ily traian 40fDFWiSF */         i++;
/* ppBOauMoP ily traian 40fDFWiSF */     }
/* ppBOauMoP ily traian 40fDFWiSF */     return ok;
/* ppBOauMoP ily traian 40fDFWiSF */ }
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ bool csp(char s[])
/* ppBOauMoP ily traian 40fDFWiSF */ {
/* ppBOauMoP ily traian 40fDFWiSF */     bool ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */     int i = 0;
/* ppBOauMoP ily traian 40fDFWiSF */     while(s[i]!='\0')
/* ppBOauMoP ily traian 40fDFWiSF */     {
/* ppBOauMoP ily traian 40fDFWiSF */         if(s[i]=='.' || s[i]==',' || s[i]=='?' || s[i]=='!' || s[i]==';' || s[i]==':' || s[i]=='_' || s[i]=='@' || s[i]=='#')
/* ppBOauMoP ily traian 40fDFWiSF */             ok=true;
/* ppBOauMoP ily traian 40fDFWiSF */         i++;
/* ppBOauMoP ily traian 40fDFWiSF */     }
/* ppBOauMoP ily traian 40fDFWiSF */     return ok;
/* ppBOauMoP ily traian 40fDFWiSF */ }
/* ppBOauMoP ily traian 40fDFWiSF */ 
/* ppBOauMoP ily traian 40fDFWiSF */ int main()
/* ppBOauMoP ily traian 40fDFWiSF */ {
/* ppBOauMoP ily traian 40fDFWiSF */     int n;
/* ppBOauMoP ily traian 40fDFWiSF */     cin >> n;
/* ppBOauMoP ily traian 40fDFWiSF */     int cnt=0;
/* ppBOauMoP ily traian 40fDFWiSF */     for(int i = 0 ; i < n ; ++i)
/* ppBOauMoP ily traian 40fDFWiSF */     {
/* ppBOauMoP ily traian 40fDFWiSF */         char s[51];
/* ppBOauMoP ily traian 40fDFWiSF */         cin >> s;
/* ppBOauMoP ily traian 40fDFWiSF */         bool ok = true;
/* ppBOauMoP ily traian 40fDFWiSF */         if(strlen(s) < 8)
/* ppBOauMoP ily traian 40fDFWiSF */             ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */         if(!lmi(s))
/* ppBOauMoP ily traian 40fDFWiSF */             ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */         if(!lma(s))
/* ppBOauMoP ily traian 40fDFWiSF */             ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */         if(!cif(s))
/* ppBOauMoP ily traian 40fDFWiSF */             ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */         if(!csp(s))
/* ppBOauMoP ily traian 40fDFWiSF */             ok=false;
/* ppBOauMoP ily traian 40fDFWiSF */         if(ok)
/* ppBOauMoP ily traian 40fDFWiSF */             cnt++;
/* ppBOauMoP ily traian 40fDFWiSF */     }
/* ppBOauMoP ily traian 40fDFWiSF */     cout << cnt;
/* ppBOauMoP ily traian 40fDFWiSF */     return 0;
/* ppBOauMoP ily traian 40fDFWiSF */ }