#ifndef MANO_BIBLIOTEKA
#define MANO_BIBLIOTEKA
#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <random>
#include <ctime>
#include <string>
#include <fstream>
#include <sstream>
#include <chrono>
#include <limits>
#include <exception>

using std::istringstream;
using std::string;
using std::cout;
using std::endl;
using std::list;
using std::endl;
using std::cin;
using std::sort;
using std::setw;
using std::ifstream;
using std::ofstream;

struct Stud{
    string var, pav;
    list<int> paz;
    int egz;
    double vidurkis;
    double mediana;
    double galutinis_pagal_vid;
    double galutinis_pagal_med;
};
#endif