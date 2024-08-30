#include <iostream>
#include <string>
using namespace std;
class SV{
    private:
        string name;
    public:
        SV();
        SV(string ten);
        void DiHoc();
        ~SV();
};

SV::SV(){
    cout<<"Khoi tao sinh vien ! \n";
    name="";
}

SV::SV(string ten){
    cout<<"Khoi tao sinh vien co tham so ! \n";
    name=ten;
}

void SV::DiHoc(){
    cout<<"Di Hoc !\n";
}

SV::~SV(){
    cout<<"Doi tuong duoc huy ! \n";
}

int main(){
    
    return 0;
}