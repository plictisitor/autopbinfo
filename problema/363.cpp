/* 7ZxmkjmK3 ily traian PV13Sxvq8 */ #include<iostream>/* 7ZxmkjmK3 ily traian PV13Sxvq8 */ using namespace std;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */ int main()/* 7ZxmkjmK3 ily traian PV13Sxvq8 */ {/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    int n,s=0,ogl=0;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    cin>>n;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    while(n!=0)/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    {/* 7ZxmkjmK3 ily traian PV13Sxvq8 */       ogl=ogl*10+n%10;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */       n=n/10;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    }/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    while(ogl!=0)/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    {/* 7ZxmkjmK3 ily traian PV13Sxvq8 */        s=s+ogl%10;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */        ogl=ogl/100;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    }/* 7ZxmkjmK3 ily traian PV13Sxvq8 */    cout<<s;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */   return 0;/* 7ZxmkjmK3 ily traian PV13Sxvq8 */ }