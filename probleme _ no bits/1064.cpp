/* Cc7fSl7bZ ily traian mB2kavUXu */ #include <algorithm>
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
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ using namespace std;
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ ifstream f("cri.in");
/* Cc7fSl7bZ ily traian mB2kavUXu */ ofstream g("cri.out");
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ int main()
/* Cc7fSl7bZ ily traian mB2kavUXu */ { int a,i0,j0,n,m,i,j,s1=0,s2=0,s3=0,s4=0,ies=1,k1,k2,k3,k4;
/* Cc7fSl7bZ ily traian mB2kavUXu */ int min1,min2,min3,min4;
/* Cc7fSl7bZ ily traian mB2kavUXu */ min1=min2=min3=min4=2000000000;
/* Cc7fSl7bZ ily traian mB2kavUXu */   f>>n>>m>>i0>>j0;
/* Cc7fSl7bZ ily traian mB2kavUXu */   for(i=1;i<=n;i++)
/* Cc7fSl7bZ ily traian mB2kavUXu */       for(j=1;j<=m;j++)
/* Cc7fSl7bZ ily traian mB2kavUXu */       { f>>a;
/* Cc7fSl7bZ ily traian mB2kavUXu */             if((i<=i0)&&(j<=j0))
/* Cc7fSl7bZ ily traian mB2kavUXu */             { s1+=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */               if((i0-i+j0-j)%2!=0)
/* Cc7fSl7bZ ily traian mB2kavUXu */                  if(min1>a)min1=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */             }
/* Cc7fSl7bZ ily traian mB2kavUXu */             if((i<=i0)&&(j>=j0))
/* Cc7fSl7bZ ily traian mB2kavUXu */             { s2+=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */               if((i0-i+j-j0)%2!=0)
/* Cc7fSl7bZ ily traian mB2kavUXu */                  if(min2>a)min2=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */             }
/* Cc7fSl7bZ ily traian mB2kavUXu */             if((i>=i0)&&(j<=j0))
/* Cc7fSl7bZ ily traian mB2kavUXu */             { s3+=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */               if((i-i0+j0-j)%2!=0)
/* Cc7fSl7bZ ily traian mB2kavUXu */                  if(min3>a)min3=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */             }
/* Cc7fSl7bZ ily traian mB2kavUXu */                  if((i>=i0)&&(j>=j0))
/* Cc7fSl7bZ ily traian mB2kavUXu */             { s4+=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */               if((i-i0+j-j0)%2!=0)
/* Cc7fSl7bZ ily traian mB2kavUXu */                  if(min4>a)min4=a;
/* Cc7fSl7bZ ily traian mB2kavUXu */             }
/* Cc7fSl7bZ ily traian mB2kavUXu */       } 
/* Cc7fSl7bZ ily traian mB2kavUXu */ k1=i0*j0;
/* Cc7fSl7bZ ily traian mB2kavUXu */ k2=i0*(m-j0+1);
/* Cc7fSl7bZ ily traian mB2kavUXu */ k3=(n-i0+1)*j0;
/* Cc7fSl7bZ ily traian mB2kavUXu */ k4=(n-i0+1)*(m-j0+1);
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ if((i0%2==0)&&(j0%2==0))
/* Cc7fSl7bZ ily traian mB2kavUXu */      {k1--; s1=s1-min1;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ if((i0%2==0)&&((m-j0+1)%2==0))
/* Cc7fSl7bZ ily traian mB2kavUXu */      {k2--; s2=s2-min2;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ if(((n-i0+1)%2==0)&&(j0%2==0))
/* Cc7fSl7bZ ily traian mB2kavUXu */      {k3--; s3=s3-min3;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ if(((n-i0+1)%2==0)&&((m-j0+1)%2==0))
/* Cc7fSl7bZ ily traian mB2kavUXu */      {k4--; s4=s4-min4;}
/* Cc7fSl7bZ ily traian mB2kavUXu */      
/* Cc7fSl7bZ ily traian mB2kavUXu */ 
/* Cc7fSl7bZ ily traian mB2kavUXu */ if(s2>s1){ies=2; k1=k2;s1=s2;}
/* Cc7fSl7bZ ily traian mB2kavUXu */   else if((s2==s1)&&(k1>k2)){ies=2; k1=k2;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ if(s3>s1){ies=3; k1=k3; s1=s3;}
/* Cc7fSl7bZ ily traian mB2kavUXu */   else if((s3==s1)&&(k1>k3)){ies=3; k1=k3;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ if(s4>s1){ies=4; k1=k4; s1=s4;}
/* Cc7fSl7bZ ily traian mB2kavUXu */   else if((s4==s1)&&(k1>k4)){ies=4; k1=k4;}
/* Cc7fSl7bZ ily traian mB2kavUXu */ g<<ies<<' '<<s1<<' '<<k1; 
/* Cc7fSl7bZ ily traian mB2kavUXu */   
/* Cc7fSl7bZ ily traian mB2kavUXu */ g.close();
/* Cc7fSl7bZ ily traian mB2kavUXu */   return 0;
/* Cc7fSl7bZ ily traian mB2kavUXu */ }