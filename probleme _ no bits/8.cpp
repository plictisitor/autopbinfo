/* F8TPxz23M ily traian 0EazbhBrr */ #include <iostream>
/* F8TPxz23M ily traian 0EazbhBrr */ 
/* F8TPxz23M ily traian 0EazbhBrr */ #include <fstream>
/* F8TPxz23M ily traian 0EazbhBrr */ 
/* F8TPxz23M ily traian 0EazbhBrr */ using namespace std;
/* F8TPxz23M ily traian 0EazbhBrr */ 
/* F8TPxz23M ily traian 0EazbhBrr */ int main()
/* F8TPxz23M ily traian 0EazbhBrr */ {
/* F8TPxz23M ily traian 0EazbhBrr */     ifstream istr;
/* F8TPxz23M ily traian 0EazbhBrr */     ofstream ostr;
/* F8TPxz23M ily traian 0EazbhBrr */     
/* F8TPxz23M ily traian 0EazbhBrr */     istr.open("maxim3.in");
/* F8TPxz23M ily traian 0EazbhBrr */     ostr.open("maxim3.out");
/* F8TPxz23M ily traian 0EazbhBrr */     
/* F8TPxz23M ily traian 0EazbhBrr */     int a,b,c;
/* F8TPxz23M ily traian 0EazbhBrr */     istr >> a >> b >> c;
/* F8TPxz23M ily traian 0EazbhBrr */     if (a>b && a>c)
/* F8TPxz23M ily traian 0EazbhBrr */         ostr << a; 
/* F8TPxz23M ily traian 0EazbhBrr */     else if (b>a && b>c)
/* F8TPxz23M ily traian 0EazbhBrr */         ostr << b;
/* F8TPxz23M ily traian 0EazbhBrr */     else
/* F8TPxz23M ily traian 0EazbhBrr */         ostr<< c;
/* F8TPxz23M ily traian 0EazbhBrr */     istr.close();
/* F8TPxz23M ily traian 0EazbhBrr */     ostr.close();
/* F8TPxz23M ily traian 0EazbhBrr */     return 0;
/* F8TPxz23M ily traian 0EazbhBrr */ }