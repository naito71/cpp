#include<iostream>

namespace ns1{

    class Hoge{
        
    public:
        void Print(){
            std::cout<<"namespace1"<<std::endl;
        }

    };

}


namespace ns2{

    class Hoge{

    public:
        void Print(){
            std::cout<<"namespace2"<<std::endl;
        }

    };

}


int main(void){
    
    ns1::Hoge h1;
    ns2::Hoge h2;

    h1.Print();
    h2.Print();

    return 0;
}
