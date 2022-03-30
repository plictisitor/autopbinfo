/* FmHD2AXbk ily traian 805dcfMbC */ #include<iostream> 
/* FmHD2AXbk ily traian 805dcfMbC */ using namespace std;
/* FmHD2AXbk ily traian 805dcfMbC */ int main() 
/* FmHD2AXbk ily traian 805dcfMbC */ {   int z,l,a; 
/* FmHD2AXbk ily traian 805dcfMbC */     cin>>z>>l>>a;
/* FmHD2AXbk ily traian 805dcfMbC */     if((l==1 || l==3 || l==5 || l==7 || l==8 || l==10 || l==12)&& z<=31) 
/* FmHD2AXbk ily traian 805dcfMbC */         cout<<"DA";  
/* FmHD2AXbk ily traian 805dcfMbC */     else if((l==4 || l==6 || l==9 || l==11 )&& z<=30) 
/* FmHD2AXbk ily traian 805dcfMbC */         cout<<"DA"; 
/* FmHD2AXbk ily traian 805dcfMbC */     else if (l==2 && z<=29 && a%4==0 && (a%100!=0 || a%400==0)) 
/* FmHD2AXbk ily traian 805dcfMbC */         cout<<"DA"; 
/* FmHD2AXbk ily traian 805dcfMbC */     else if (l==2 && z<=29 && a%4==0 && (a%400!=0))
/* FmHD2AXbk ily traian 805dcfMbC */         cout<<"NU"; 
/* FmHD2AXbk ily traian 805dcfMbC */     else 
/* FmHD2AXbk ily traian 805dcfMbC */         cout << "NU";
/* FmHD2AXbk ily traian 805dcfMbC */  return 0; 
/* FmHD2AXbk ily traian 805dcfMbC */ }