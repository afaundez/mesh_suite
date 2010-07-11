#ifndef OPTIONS_H
#define OPTIONS_H

#include "Constant.h"

class Options{
public:
    Options();
    void setTriangleSelection(int index);
    Constant::TriangleSelection triangleSelection();
    void setTriangleSelectionValue(int value);
    int triangleSelectionValue();
    void setNewPointMethod(int value);
    Constant::NewPoint newPointMethod();
    void setOutsideNewPointMethod(int value);
    Constant::NewPoint outsideNewPointMethod();
    void setManual(bool manual);
    bool manual();
    void setOnlyFirstPreProcess(bool onlyFirst);
    bool onlyFirstPreProcess();
    void setPreProcess(Constant::PreProcess pp);
    Constant::PreProcess preProcess();
    ~Options();

private:
    Constant::TriangleSelection tsp;
    int tsvp;
    Constant::NewPoint npp;
    Constant::NewPoint onpp;
    bool mp;
    bool ofp;
    Constant::PreProcess ppp;
};

#endif // OPTIONS_H
