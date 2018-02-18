#include <iostream>
using namespace std;
class Sum
{
int n,s=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
int sum()
{
    	cout<<"OUTPUT"<<endl;
for(int i=1;i<=n;i++)
    {
s=s+i;
}
return s;
}
};
int main()
{
Sum s;
s.get();
cout<<s.sum();
return 0;
}