/* IU6DGYLa0 ily traian AptqxXo4c */ #include <iostream>
/* IU6DGYLa0 ily traian AptqxXo4c */ using namespace std;
/* IU6DGYLa0 ily traian AptqxXo4c */ 
/* IU6DGYLa0 ily traian AptqxXo4c */ int main()
/* IU6DGYLa0 ily traian AptqxXo4c */ {
/* IU6DGYLa0 ily traian AptqxXo4c */     int n, sum = 0;
/* IU6DGYLa0 ily traian AptqxXo4c */     cin >> n;
/* IU6DGYLa0 ily traian AptqxXo4c */     while(n > 0){
/* IU6DGYLa0 ily traian AptqxXo4c */         sum += n % 10;
/* IU6DGYLa0 ily traian AptqxXo4c */         n/=10;
/* IU6DGYLa0 ily traian AptqxXo4c */     }
/* IU6DGYLa0 ily traian AptqxXo4c */     cout << sum;
/* IU6DGYLa0 ily traian AptqxXo4c */     return 0;
/* IU6DGYLa0 ily traian AptqxXo4c */ }