#include<iostream>
#include<cmath>
#include<vector>

int main ()
{
    int n=100;
  std::vector<int> data(n);
    double prom=0.0;
    double sum=0.0;
  for ( int ii=0; ii<n;++ii)
    {
      data[ii]=ii+1;
      prom+=data[ii];
  }
  double a=prom/n;
  for (int ii=0; ii<n;++ii)
    {
      sum+=std::pow(data[ii]-a,2);
   }
  double b=std::sqrt(sum/n-1);
  std::cout<<a<<'\t'<<b<<std::endl;

  return 0;
}

