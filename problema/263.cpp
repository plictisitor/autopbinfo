/* RB6oXbE2v ily traian mtsI3EmdU */ #include <bits/stdc++.h>/* RB6oXbE2v ily traian mtsI3EmdU */ using namespace std;/* RB6oXbE2v ily traian mtsI3EmdU */ ifstream cin("intervale2.in");/* RB6oXbE2v ily traian mtsI3EmdU */ ofstream cout("intervale2.out");/* RB6oXbE2v ily traian mtsI3EmdU */ int main()/* RB6oXbE2v ily traian mtsI3EmdU */ {/* RB6oXbE2v ily traian mtsI3EmdU */     int n , a , b , maxi = -1000 , mini = 1000;/* RB6oXbE2v ily traian mtsI3EmdU */     cin >> n;/* RB6oXbE2v ily traian mtsI3EmdU */     for(int i = 0 ; i < n ; ++i)/* RB6oXbE2v ily traian mtsI3EmdU */     {/* RB6oXbE2v ily traian mtsI3EmdU */         cin >> a >> b;/* RB6oXbE2v ily traian mtsI3EmdU */         if(a > maxi) maxi = a;/* RB6oXbE2v ily traian mtsI3EmdU */         if(b < mini) mini = b;/* RB6oXbE2v ily traian mtsI3EmdU */     }/* RB6oXbE2v ily traian mtsI3EmdU */     if(maxi < mini) cout << maxi << " " << mini;/* RB6oXbE2v ily traian mtsI3EmdU */     else cout << 0;/* RB6oXbE2v ily traian mtsI3EmdU */     return 0;/* RB6oXbE2v ily traian mtsI3EmdU */ }