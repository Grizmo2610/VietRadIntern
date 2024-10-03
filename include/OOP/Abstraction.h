#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override;
};

class Square : public Shape {
public:
    void draw() override;
};

#endif // SHAPE_H
