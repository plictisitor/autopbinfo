/* 76djAhQyq ily traian GQLIrVyTC */ #include <algorithm>
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
/* 76djAhQyq ily traian GQLIrVyTC */ 
/* 76djAhQyq ily traian GQLIrVyTC */ #include <stdlib.h>
/* 76djAhQyq ily traian GQLIrVyTC */ using namespace std;
/* 76djAhQyq ily traian GQLIrVyTC */ 
/* 76djAhQyq ily traian GQLIrVyTC */ int main()
/* 76djAhQyq ily traian GQLIrVyTC */ {ifstream in("robot3.in");
/* 76djAhQyq ily traian GQLIrVyTC */  ofstream out("robot3.out");
/* 76djAhQyq ily traian GQLIrVyTC */  char c;
/* 76djAhQyq ily traian GQLIrVyTC */  int a=0,b=0,n=0,m=0,z=0,e,d,p;
/* 76djAhQyq ily traian GQLIrVyTC */  in>>p;
/* 76djAhQyq ily traian GQLIrVyTC */ 
/* 76djAhQyq ily traian GQLIrVyTC */  if(p==1){
/* 76djAhQyq ily traian GQLIrVyTC */    while(!in.eof()){
/* 76djAhQyq ily traian GQLIrVyTC */      in>>c;
/* 76djAhQyq ily traian GQLIrVyTC */      if (c=='A')a++;
/* 76djAhQyq ily traian GQLIrVyTC */    }
/* 76djAhQyq ily traian GQLIrVyTC */    out<<a<<endl;
/* 76djAhQyq ily traian GQLIrVyTC */  }
/* 76djAhQyq ily traian GQLIrVyTC */ 
/* 76djAhQyq ily traian GQLIrVyTC */  if(p==2){
/* 76djAhQyq ily traian GQLIrVyTC */    in>>c;
/* 76djAhQyq ily traian GQLIrVyTC */    b=0;
/* 76djAhQyq ily traian GQLIrVyTC */    while(c!='T'){
/* 76djAhQyq ily traian GQLIrVyTC */       if (c=='D'){
/* 76djAhQyq ily traian GQLIrVyTC */         in>>c;
/* 76djAhQyq ily traian GQLIrVyTC */         a=c-48;
/* 76djAhQyq ily traian GQLIrVyTC */         b=(b+a)%10;
/* 76djAhQyq ily traian GQLIrVyTC */       }else if (c=='S'){
/* 76djAhQyq ily traian GQLIrVyTC */               in>>c;
/* 76djAhQyq ily traian GQLIrVyTC */               a=c-48;
/* 76djAhQyq ily traian GQLIrVyTC */               b=(b+10-a)%10;
/* 76djAhQyq ily traian GQLIrVyTC */             }
/* 76djAhQyq ily traian GQLIrVyTC */       if(c=='A')out<<b;
/* 76djAhQyq ily traian GQLIrVyTC */       in>>c;
/* 76djAhQyq ily traian GQLIrVyTC */    }
/* 76djAhQyq ily traian GQLIrVyTC */  }
/* 76djAhQyq ily traian GQLIrVyTC */ 
/* 76djAhQyq ily traian GQLIrVyTC */  if(p==3){
/* 76djAhQyq ily traian GQLIrVyTC */  in>>a;
/* 76djAhQyq ily traian GQLIrVyTC */  if(a==0)out<<"A";
/* 76djAhQyq ily traian GQLIrVyTC */  else
/* 76djAhQyq ily traian GQLIrVyTC */    if(a<10){if(10-a<a)out<<'S'<<10-a<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */             else out<<'D'<<a<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */             }
/* 76djAhQyq ily traian GQLIrVyTC */    else
/* 76djAhQyq ily traian GQLIrVyTC */     {
/* 76djAhQyq ily traian GQLIrVyTC */     z=0;
/* 76djAhQyq ily traian GQLIrVyTC */     while(a%10==0){
/* 76djAhQyq ily traian GQLIrVyTC */       z++;
/* 76djAhQyq ily traian GQLIrVyTC */       a=a/10;
/* 76djAhQyq ily traian GQLIrVyTC */     }
/* 76djAhQyq ily traian GQLIrVyTC */     while(a!=0){
/* 76djAhQyq ily traian GQLIrVyTC */       b=b*10+a%10;
/* 76djAhQyq ily traian GQLIrVyTC */       a=a/10;
/* 76djAhQyq ily traian GQLIrVyTC */     }
/* 76djAhQyq ily traian GQLIrVyTC */     a=b;
/* 76djAhQyq ily traian GQLIrVyTC */     b=a%10;
/* 76djAhQyq ily traian GQLIrVyTC */     if(10-b<b)out<<'S'<<10-b<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */     else out<<'D'<<b<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */     a=a/10;
/* 76djAhQyq ily traian GQLIrVyTC */     while(a!=0){
/* 76djAhQyq ily traian GQLIrVyTC */       if(b==a%10)out<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */       else
/* 76djAhQyq ily traian GQLIrVyTC */         if(b>a%10)
/* 76djAhQyq ily traian GQLIrVyTC */           if(10-b+a%10<=b-a%10)out<<'D'<<10-b+a%10<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */           else out<<'S'<<b-a%10<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */         else if(10-a%10+b<a%10-b)out<<'S'<<10-a%10+b<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */              else out<<'D'<<a%10-b<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */       b=a%10;
/* 76djAhQyq ily traian GQLIrVyTC */       a=a/10;
/* 76djAhQyq ily traian GQLIrVyTC */     }
/* 76djAhQyq ily traian GQLIrVyTC */     if(z!=0){
/* 76djAhQyq ily traian GQLIrVyTC */       if(10-b<b)out<<'D'<<b;
/* 76djAhQyq ily traian GQLIrVyTC */       else out<<'S'<<b;
/* 76djAhQyq ily traian GQLIrVyTC */       while(z!=0){
/* 76djAhQyq ily traian GQLIrVyTC */         out<<'A';
/* 76djAhQyq ily traian GQLIrVyTC */         z--;
/* 76djAhQyq ily traian GQLIrVyTC */       }
/* 76djAhQyq ily traian GQLIrVyTC */     }
/* 76djAhQyq ily traian GQLIrVyTC */    }
/* 76djAhQyq ily traian GQLIrVyTC */   out<<'T';
/* 76djAhQyq ily traian GQLIrVyTC */  }
/* 76djAhQyq ily traian GQLIrVyTC */  in.close();
/* 76djAhQyq ily traian GQLIrVyTC */  out.close();
/* 76djAhQyq ily traian GQLIrVyTC */ return 0;
/* 76djAhQyq ily traian GQLIrVyTC */ }