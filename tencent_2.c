#include <iostream>
using namespace std;
int main()
{
    int a,b,A,B;
    cin>>a>>b>>A>>B;
    if(a>A||b>B||a<0||b<0)
    {
        return 0;
    }
    int temp_A=A;
    int count_c=0;
    int count_p=0;
    int sub=1;
    while(temp_A>a)
    {
        if(temp_A%2==0)
        {
            temp_A=temp_A/2;
            if(temp_A>a)
                count_c++;
        }
        else
        {
            temp_A=temp_A-1;
            count_p++;
        }
    }
    if(temp_A+1<a)
        count_p+=(temp_A*2-a);
    for (int i=0;i<count_c;i++)
    {
        sub*=2;
    }
    if((A-a*sub)!=(B-b*sub))
    {
        cout<<0<<endl;
        return 0;
    }
    cout << count_c+count_p << endl;
    return 0;
}
