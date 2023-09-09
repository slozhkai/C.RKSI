//Вариант 12
#include <iostream>
#include <math.h>

using namespace std;
 
 
int main()
{
    double x=0,y=0,s=0;
    cout<<"Введите два числа через пробел: ";
    cin>>x>>y;
    if(y>2*x){
        for(int i=1;i<=20;i++)
            s=(tan(x)+pow(x,2));
    }

    else if(y<2*x){
        for(int i=1;i<=10;i++)
            s=pow(abs(x+y),3);
    }

    else{
        s=pow(abs(pow(y,3)-pow(x,2)),1/3);
    }
    cout<<s;
    return 0;
}
