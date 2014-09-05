#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__

const double tol = 1e-9;
const int N_THREAD = 24;
const int N_CHUNK = 2*N_THREAD;
const int CHUNK_SIZE = 10000;
const double c = 299792458;

const int PB_CONST = 0;
const int PB_MS = 1;
const int PB_FITS = 2;

const int FILE_TYPE_MS = 0;
const int FILE_TYPE_FITS = 1;

// Operate on the data column rather than the corrected data column.
const int MS_DATACOLUMN_DATA = 1;

#endif
