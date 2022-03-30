/* RM9h3W2H8 ily traian Dt0mmaHej */ #include <iostream>
/* RM9h3W2H8 ily traian Dt0mmaHej */ 
/* RM9h3W2H8 ily traian Dt0mmaHej */ #include <fstream>
/* RM9h3W2H8 ily traian Dt0mmaHej */ 
/* RM9h3W2H8 ily traian Dt0mmaHej */ using namespace std;
/* RM9h3W2H8 ily traian Dt0mmaHej */ 
/* RM9h3W2H8 ily traian Dt0mmaHej */ int main()
/* RM9h3W2H8 ily traian Dt0mmaHej */ {
/* RM9h3W2H8 ily traian Dt0mmaHej */     ifstream istr;
/* RM9h3W2H8 ily traian Dt0mmaHej */     ofstream ostr;
/* RM9h3W2H8 ily traian Dt0mmaHej */     
/* RM9h3W2H8 ily traian Dt0mmaHej */     istr.open("maxim.in");
/* RM9h3W2H8 ily traian Dt0mmaHej */     ostr.open("maxim.out");
/* RM9h3W2H8 ily traian Dt0mmaHej */     
/* RM9h3W2H8 ily traian Dt0mmaHej */     int x,y;
/* RM9h3W2H8 ily traian Dt0mmaHej */     istr >> x >> y;
/* RM9h3W2H8 ily traian Dt0mmaHej */     if (x<y)
/* RM9h3W2H8 ily traian Dt0mmaHej */         ostr << y;
/* RM9h3W2H8 ily traian Dt0mmaHej */     else 
/* RM9h3W2H8 ily traian Dt0mmaHej */         ostr << x;
/* RM9h3W2H8 ily traian Dt0mmaHej */     
/* RM9h3W2H8 ily traian Dt0mmaHej */     istr.close();
/* RM9h3W2H8 ily traian Dt0mmaHej */     ostr.close();
/* RM9h3W2H8 ily traian Dt0mmaHej */         
/* RM9h3W2H8 ily traian Dt0mmaHej */     return 0;
/* RM9h3W2H8 ily traian Dt0mmaHej */ 
/* RM9h3W2H8 ily traian Dt0mmaHej */ }