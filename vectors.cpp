#include<iostream>
#include<cmath>
#include<vector>

int main ()
{
  const int n=10;
  std::vector<double> a(n), b(n);
  for (int ii=0;ii<n;++ii)
    {
      std::cout<<a[ii]<<b[ii]<<std::endl;
    }
  return 0;
  }
