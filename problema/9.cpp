/* w3rFXidM2 ily traian JcCiFM7Mw */ #include <iostream>/* w3rFXidM2 ily traian JcCiFM7Mw */ using namespace std;/* w3rFXidM2 ily traian JcCiFM7Mw */ /* w3rFXidM2 ily traian JcCiFM7Mw */ int main(){/* w3rFXidM2 ily traian JcCiFM7Mw */     int a, b, c;/* w3rFXidM2 ily traian JcCiFM7Mw */     cin >> a >> b >> c;/* w3rFXidM2 ily traian JcCiFM7Mw */     int min = a, max = a;/* w3rFXidM2 ily traian JcCiFM7Mw */     if(b > max)/* w3rFXidM2 ily traian JcCiFM7Mw */         max = b;/* w3rFXidM2 ily traian JcCiFM7Mw */     if(c > max)/* w3rFXidM2 ily traian JcCiFM7Mw */         max = c;/* w3rFXidM2 ily traian JcCiFM7Mw */     if(b < min)/* w3rFXidM2 ily traian JcCiFM7Mw */         min = b;/* w3rFXidM2 ily traian JcCiFM7Mw */     if(c < min)/* w3rFXidM2 ily traian JcCiFM7Mw */         min = c;/* w3rFXidM2 ily traian JcCiFM7Mw */     cout << max - min;/* w3rFXidM2 ily traian JcCiFM7Mw */     return 0;   /* w3rFXidM2 ily traian JcCiFM7Mw */ }