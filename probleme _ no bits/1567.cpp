/* qFXEIcXud ily traian RcAb9sDuX */ #include<iostream>
/* qFXEIcXud ily traian RcAb9sDuX */ using namespace std;
/* qFXEIcXud ily traian RcAb9sDuX */ int main()
/* qFXEIcXud ily traian RcAb9sDuX */ {
/* qFXEIcXud ily traian RcAb9sDuX */    int n,ogl,s=0,aux;
/* qFXEIcXud ily traian RcAb9sDuX */    cin>>n;
/* qFXEIcXud ily traian RcAb9sDuX */    while(n!=0)
/* qFXEIcXud ily traian RcAb9sDuX */    {
/* qFXEIcXud ily traian RcAb9sDuX */        ogl=0;
/* qFXEIcXud ily traian RcAb9sDuX */        if(n>9)
/* qFXEIcXud ily traian RcAb9sDuX */       {
/* qFXEIcXud ily traian RcAb9sDuX */          while(n!=0)
/* qFXEIcXud ily traian RcAb9sDuX */        {
/* qFXEIcXud ily traian RcAb9sDuX */            ogl=ogl*10+n%10;
/* qFXEIcXud ily traian RcAb9sDuX */            n=n/10;
/* qFXEIcXud ily traian RcAb9sDuX */        }
/* qFXEIcXud ily traian RcAb9sDuX */       aux=ogl%10*10+ogl/10%10;
/* qFXEIcXud ily traian RcAb9sDuX */       s=s+aux;
/* qFXEIcXud ily traian RcAb9sDuX */       }
/* qFXEIcXud ily traian RcAb9sDuX */       cin>>n;
/* qFXEIcXud ily traian RcAb9sDuX */    }
/* qFXEIcXud ily traian RcAb9sDuX */    cout<<s;
/* qFXEIcXud ily traian RcAb9sDuX */   return 0;
/* qFXEIcXud ily traian RcAb9sDuX */ }