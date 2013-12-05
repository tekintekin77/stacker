#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <cmath>

#include <sys/stat.h>

#include "PrimaryBeam.h"
#include "definitions.h"
#include "msio.h"

#ifndef __MODEL_H__
#define __MODEL_H__

using std::vector;
using std::ifstream;
using std::stringstream;
using std::sin;
using std::asin;
using std::cos;
using std::exp;
using std::log;
using std::cerr;
using std::cout;
using std::endl;

using casa::C::pi;

class Model
{
private:
	struct stat statbuffer;
	string clfile;
public:
	Model(string file);
	~Model();
	void compute(msio* ms, PrimaryBeam* pb);

public:
	int nPointings;
	float** omega_x;
	float** omega_y;
	float** omega_z;
	float** omega_size;
	float** dx;
	float** dy;
	float** x;
	float** y;
	float** flux;
	float** size;
	int* nStackPoints;
};

#endif

