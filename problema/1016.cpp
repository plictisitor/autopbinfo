/* nzOSPj9KE ily traian R0EHKuXfd */ #include <bits/stdc++.h>/* nzOSPj9KE ily traian R0EHKuXfd */ using namespace std;/* nzOSPj9KE ily traian R0EHKuXfd */ int main()/* nzOSPj9KE ily traian R0EHKuXfd */ {/* nzOSPj9KE ily traian R0EHKuXfd */    long long n , p = 1;/* nzOSPj9KE ily traian R0EHKuXfd */    cin >> n;/* nzOSPj9KE ily traian R0EHKuXfd */    if(n % 2 == 1) cout << 0;/* nzOSPj9KE ily traian R0EHKuXfd */    else {for(int i = 1 ; i <= n / 2 ;++i)/* nzOSPj9KE ily traian R0EHKuXfd */    {/* nzOSPj9KE ily traian R0EHKuXfd */        p = p * i * i;/* nzOSPj9KE ily traian R0EHKuXfd */    }/* nzOSPj9KE ily traian R0EHKuXfd */    cout << p;}/* nzOSPj9KE ily traian R0EHKuXfd */    return 0;/* nzOSPj9KE ily traian R0EHKuXfd */ }