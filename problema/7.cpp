/* 8fPlpmu0I ily traian 0mWcmLO0d */ #include <iostream>/* 8fPlpmu0I ily traian 0mWcmLO0d */ /* 8fPlpmu0I ily traian 0mWcmLO0d */ #include <fstream>/* 8fPlpmu0I ily traian 0mWcmLO0d */ /* 8fPlpmu0I ily traian 0mWcmLO0d */ using namespace std;/* 8fPlpmu0I ily traian 0mWcmLO0d */ /* 8fPlpmu0I ily traian 0mWcmLO0d */ int main()/* 8fPlpmu0I ily traian 0mWcmLO0d */ {/* 8fPlpmu0I ily traian 0mWcmLO0d */     ifstream istr;/* 8fPlpmu0I ily traian 0mWcmLO0d */     ofstream ostr;/* 8fPlpmu0I ily traian 0mWcmLO0d */     /* 8fPlpmu0I ily traian 0mWcmLO0d */     istr.open("maxim.in");/* 8fPlpmu0I ily traian 0mWcmLO0d */     ostr.open("maxim.out");/* 8fPlpmu0I ily traian 0mWcmLO0d */     /* 8fPlpmu0I ily traian 0mWcmLO0d */     int x,y;/* 8fPlpmu0I ily traian 0mWcmLO0d */     istr >> x >> y;/* 8fPlpmu0I ily traian 0mWcmLO0d */     if (x<y)/* 8fPlpmu0I ily traian 0mWcmLO0d */         ostr << y;/* 8fPlpmu0I ily traian 0mWcmLO0d */     else /* 8fPlpmu0I ily traian 0mWcmLO0d */         ostr << x;/* 8fPlpmu0I ily traian 0mWcmLO0d */     /* 8fPlpmu0I ily traian 0mWcmLO0d */     istr.close();/* 8fPlpmu0I ily traian 0mWcmLO0d */     ostr.close();/* 8fPlpmu0I ily traian 0mWcmLO0d */         /* 8fPlpmu0I ily traian 0mWcmLO0d */     return 0;/* 8fPlpmu0I ily traian 0mWcmLO0d */ /* 8fPlpmu0I ily traian 0mWcmLO0d */ }