#include<iostream>
using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"Introduce el numero A: "; cin>>n;
  for(c=1;c<=n;c++)
  cout<<"Introduce el numero B: "; cin>>n;
  for(c=1;c<=n;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;//Si el residuo es cero, se incremento al contador nc, Si al terminarse el segundo ciclo el contador nc es igual a 2, significa que el número es primo y lo imprime
  }
}

