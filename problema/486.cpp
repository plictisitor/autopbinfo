/* W0FrFagh7 ily traian CfE6WTyz5 */ #include <bits/stdc++.h>/* W0FrFagh7 ily traian CfE6WTyz5 */ /* W0FrFagh7 ily traian CfE6WTyz5 */ using namespace std;/* W0FrFagh7 ily traian CfE6WTyz5 */ int main()/* W0FrFagh7 ily traian CfE6WTyz5 */ {/* W0FrFagh7 ily traian CfE6WTyz5 */    int a[10000],n,minim=999999999,maxim=-999999999;/* W0FrFagh7 ily traian CfE6WTyz5 */    cin >>n;/* W0FrFagh7 ily traian CfE6WTyz5 */    for(int i=1;i<=n;++i)/* W0FrFagh7 ily traian CfE6WTyz5 */    {/* W0FrFagh7 ily traian CfE6WTyz5 */        cin >>a[i];/* W0FrFagh7 ily traian CfE6WTyz5 */        if(a[i]>maxim) maxim=a[i];/* W0FrFagh7 ily traian CfE6WTyz5 */        if(a[i]<minim) minim=a[i];/* W0FrFagh7 ily traian CfE6WTyz5 */    }/* W0FrFagh7 ily traian CfE6WTyz5 */    cout <<minim<<" "<<maxim;/* W0FrFagh7 ily traian CfE6WTyz5 */     return 0;/* W0FrFagh7 ily traian CfE6WTyz5 */ }