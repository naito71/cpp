#include"Line.h"
#include<iostream>


Line::Line(){
    std::cout<<"Line():"<<std::endl;
    this->startX=0;
    this->startY=0;
    this->endX=0;
    this->endY=0;
}

Line::Line(int sx,int sy,int ex,int ey){
    std::cout<<"Line(int sx,int sy,int ex,int ey):"<<std::endl;
    this->startX=sx;
    this->startY=sy;
    this->endX=ex;
    this->endY=ey;
}

Line::~Line(){
    std::cout<<"~Line():"<<std::endl;
}


int Line::Getter(int addr){
    std::cout<<"Getter(int addr):"<<std::endl;

    int ret;
    switch (addr){
    case 1:
        ret=this->startX;
        break;
    case 2:
        ret=this->startY;
        break;
    case 3:
        ret=this->endX;
        break;
    case 4:
        ret=this->endY;
        break;
    default:
        ret=0;
        std::cout<<"    ERROR : NOT addr<<[1,4] and N"<<std::endl;
    }
    std::cout<<"    return "<<ret<<std::endl;
    return ret;
}

void Line::Setter(int addr,int in){
    std::cout<<"Setter(int addr,int in):"<<std::endl;

    switch (addr){
    case 1:
        this->startX=in;
        break;
    case 2:
        this->startY=in;
        break;
    case 3:
        this->endX=in;
        break;
    case 4:
        this->endY=in;
        break;
    default:
        std::cout<<"    ERROR : NOT addr<<[1,4] and N"<<std::endl;
    }
    std::cout<<"    Complete Procedure"<<std::endl;
}

void Line::Print(){
    std::cout<<"Print():"<<std::endl;
    std::cout<<"    Start( "<<this->startX<<" , "<<this->startY<<" )"<<std::endl;
    std::cout<<"      End( "<<this->endX<<" , "<<this->endY<<" )"<<std::endl;
}
