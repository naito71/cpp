#pragma once

class Line{

private:
    int startX;
    int startY;
    int endX;
    int endY;


public:
    Line();
    Line(int sx,int sy,int ex,int ey);
    ~Line();

    int Getter(int addr);
    void Setter(int addr,int in);

    void Print();
};
