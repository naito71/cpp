#include<iostream>


void PrintDouble(double f){
    std::cout<<"PrintDouble():"<<std::endl;
    std::cout<<"|    double f : "<<f<<std::endl;
    std::cout<<"|    Addr : "<<&f<<std::endl;
}


void Double(){
    std::cout<<"Double():"<<std::endl;

    double *f;

    f=new double;
    
    *f=10.2;
    PrintDouble(*f);

    *f=10.7;
    PrintDouble(*f);

    delete f;

    PrintDouble(*f);

    *f=11.2;
    PrintDouble(*f);

}




void PrintInteger(int f){
    std::cout<<"PrintInteger():"<<std::endl;
    std::cout<<"|    int f : "<<f<<std::endl;
    std::cout<<"|    Addr : "<<&f<<std::endl;
}


void Array(){
    std::cout<<"Array():"<<std::endl;

    int *array;
    array=new int[5];
    for(int i=0;i<5;i++){
        array[i]=i+1;
    }

    for(int i=0;i<5;i++){
        PrintInteger(array[i]);
    }

    delete[] array;

    for(int i=0;i<5;i++){
        PrintInteger(array[i]);
    }

}




class Hoge{

private:
    int f;
    std::string name;

public:
    Hoge(int f,std::string name){
        this->f=f;
        this->name=name;
    }

    void Update(int f,std::string name){
        this->f=f;
        this->name=name;
    }

    void Print(){
        std::cout<<"Hoge.Print():"<<std::endl;
        std::cout<<"|    int f : "<<this->f<<std::endl;
        std::cout<<"|    string name : "<<this->name<<std::endl;
    }

};


int main(void){
    Double();
    Array();

    return 0;
}
