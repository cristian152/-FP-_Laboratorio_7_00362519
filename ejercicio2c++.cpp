#include <iostream>
using namespace std;

int casos();

int caso;
int num1;
int num2;

int main()
{
    casos();
}
int casos(){
    cout<<"ingrese numero de casos: " <<endl;
    cin>>caso;
    for (int i=0; i<caso; i++){
            cout<<"ingrese numero 1 de casos que sea el mayor: " <<endl;
            cin>>num1;
            cout<<"ingrese numero 2 de casos que sea el menor: " <<endl;
            cin>>num2;
            if (num1 < num2){
                cout<<num1<<"es mayor que: " <<num2<<endl;
            }
            else{
                cout<<num2<<"no es mayor que: "<<num1<<endl;
            }
    }
}
