/* tu0FpQRFY ily traian KnAuOIgBJ */ #include <bits/stdc++.h>/* tu0FpQRFY ily traian KnAuOIgBJ */ /* tu0FpQRFY ily traian KnAuOIgBJ */ using namespace std;/* tu0FpQRFY ily traian KnAuOIgBJ */ /* tu0FpQRFY ily traian KnAuOIgBJ */ int main()/* tu0FpQRFY ily traian KnAuOIgBJ */ {/* tu0FpQRFY ily traian KnAuOIgBJ */ int n,i,S=0;/* tu0FpQRFY ily traian KnAuOIgBJ */ cin>>n;/* tu0FpQRFY ily traian KnAuOIgBJ */ while (n<0 || n>100)/* tu0FpQRFY ily traian KnAuOIgBJ */ {/* tu0FpQRFY ily traian KnAuOIgBJ */ cin>>n;/* tu0FpQRFY ily traian KnAuOIgBJ */ }/* tu0FpQRFY ily traian KnAuOIgBJ */ for (i=1;i<=n;i++)/* tu0FpQRFY ily traian KnAuOIgBJ */ if (i%2!=0)/* tu0FpQRFY ily traian KnAuOIgBJ */ S=S+i*(i+1);/* tu0FpQRFY ily traian KnAuOIgBJ */ else/* tu0FpQRFY ily traian KnAuOIgBJ */ S=S-i*(i+1);/* tu0FpQRFY ily traian KnAuOIgBJ */ cout<<"Rezultatul este "<<S;/* tu0FpQRFY ily traian KnAuOIgBJ */ return 0;/* tu0FpQRFY ily traian KnAuOIgBJ */ }