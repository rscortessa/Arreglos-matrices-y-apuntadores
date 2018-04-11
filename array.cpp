#include<iostream>
#include<cmath>
#include<array>

int main ()
{
  const int n=10;
  std::array<double, n> a, b;
  for (int ii=0;ii<n;++ii)
    {
      a[ii]=0;
      b[ii]=1;
      std::cout<<a[ii]<<b[ii]<<std::endl;
    }
  return 0;
}

  
    
