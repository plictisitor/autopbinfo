/* 8DmeggKmm ily traian U1sbEM0Dv */ #include<iostream> 
/* 8DmeggKmm ily traian U1sbEM0Dv */ using namespace std;
/* 8DmeggKmm ily traian U1sbEM0Dv */ 
/* 8DmeggKmm ily traian U1sbEM0Dv */ int main() 
/* 8DmeggKmm ily traian U1sbEM0Dv */ { 
/* 8DmeggKmm ily traian U1sbEM0Dv */  int z,l,a,z1,l1,a1; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  cin>>z>>l>>a;
/* 8DmeggKmm ily traian U1sbEM0Dv */  z1=z+1; l1=l+1; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  a1=a+1; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if((l==1 || l==3 || l==5 || l==7 || l==8 || l==10 || l==12)&& z<31) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<z1<<" "<<l<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if((l==1 || l==3 || l==5 || l==7 || l==8 || l==10)&& z==31) 
/* 8DmeggKmm ily traian U1sbEM0Dv */          cout<<1<<" "<<l1<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if(l==12 && z==31) 
/* 8DmeggKmm ily traian U1sbEM0Dv */              cout<<1<<" "<<1<<" "<<a1; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if((l==4 || l==6 || l==9 || l==11 )&& z<30) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<z1<<" "<<l<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if((l==4 || l==6 || l==9 || l==11 )&& z==30)
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<1<<" "<<l1<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if(l==2 && z<29 && a%4==0 && (a%100!=0 || a%400==0)) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<z1<<" "<<l<<" "<<a;
/* 8DmeggKmm ily traian U1sbEM0Dv */  if(l==2 && z==29 && a%4==0 && (a%100!=0 || a%400==0)) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<1<<" "<<l1<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if(l==2 && z<28 && !(a%4==0 && (a%100!=0 || a%400==0))) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<z1<<" "<<l<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  if(l==2 && z==28 && !(a%4==0 && (a%100!=0 || a%400==0))) 
/* 8DmeggKmm ily traian U1sbEM0Dv */      cout<<1<<" "<<l1<<" "<<a; 
/* 8DmeggKmm ily traian U1sbEM0Dv */  return 0; 
/* 8DmeggKmm ily traian U1sbEM0Dv */ }