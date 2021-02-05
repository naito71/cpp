#include"Line.h"
#include<iostream>

int main(void){
    Line* l=new Line(5,10,10,20);
    l->Print();
    std::cout<<"Getter : "<<l->Getter(3)<<std::endl;
    l->Setter(4,15);
    l->Print();

    Line line(1,1,1,1);
    line.Print();
    
    delete l;
    
    return 0;
}
