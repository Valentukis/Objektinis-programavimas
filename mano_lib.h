#include <iostream>
#include <vector>
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

using std::istringstream;
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::endl;
using std::cin;
using std::sort;
using std::setw;
using std::ifstream;

struct Stud{
    string var, pav;
    vector<int> paz;
    int egz;
    double vidurkis;
    double mediana;
    double galutinis_pagal_vid;
    double galutinis_pagal_med;
};