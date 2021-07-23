#include <iostream>
using namespace std;
class Distance
{
   private:
	long kilometer;
	float meter;
   public:
  friend istream &operator >>(istream &input,Distance &n)
    {
        input>>n.kilometer>>n.meter;
        return input;
    }
    
  friend ostream &operator <<(ostream &output,Distance &n)
    {
       output<<"kilometer:"<<n.kilometer<<"  meter:"<<n.meter<<endl;
       return output;
    }
    friend  Distance operator+(Distance n,float b);
};
  Distance operator+(Distance n,float b)
{
    Distance d2;
    d2.kilometer=n.kilometer+int(b);
    d2.meter=n.meter+(b-int(b));
    return d2;
}


int main()
{
   Distance d1,d2;
   cout<<"Enter Distance "<<endl;
   cin>>d1;
   cout<<d1;
   
   d2=d1+10.5;
   cout<<d2;
    return 0;
}
