
#ifndef __MPEG2TABLES_H
#define __MPEG2TABLES_H


#define MAXTABLE 3


// Tables for layer 2. 

// bitalloclengthtable :0,1 supported 2. 2 ot tested & disabled
// this table merges the subbands to the longer one. 
// 8 < 12 , 27 < 30 but the "length" is the same

static const int bitalloclengthtable[MAXTABLE][MAXSUBBAND]=
{ {4,4,3,3,3,3,3,3,3,3,3,3,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3, 3,3,3,3,3,3,3,2,2,2,2,2,2,2,0,0},
  {4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2, 2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0} };


/*
Orignal is:
{ {4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3, 3,3,3,3,3,3,3,2,2,2,2,0,0,0,0,0},
  {4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3, 3,3,3,3,3,3,3,2,2,2,2,2,2,2,0,0},
  {4,4,3,3,3,3,3,3,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {4,4,3,3,3,3,3,3,3,3,3,3,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2, 2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0} };
  
*/





static const REAL group5bits[27*3]=
{
  -2.0/3.0, -2.0/3.0, -2.0/3.0,
       0.0, -2.0/3.0, -2.0/3.0,
   2.0/3.0, -2.0/3.0, -2.0/3.0,
  -2.0/3.0,      0.0, -2.0/3.0,
       0.0,      0.0, -2.0/3.0,
   2.0/3.0,      0.0, -2.0/3.0,
  -2.0/3.0,  2.0/3.0, -2.0/3.0,
       0.0,  2.0/3.0, -2.0/3.0,
   2.0/3.0,  2.0/3.0, -2.0/3.0,
  -2.0/3.0, -2.0/3.0,      0.0,
       0.0, -2.0/3.0,      0.0,
   2.0/3.0, -2.0/3.0,      0.0,
  -2.0/3.0,      0.0,      0.0,
       0.0,      0.0,      0.0,
   2.0/3.0,      0.0,      0.0,
  -2.0/3.0,  2.0/3.0,      0.0,
       0.0,  2.0/3.0,      0.0,
   2.0/3.0,  2.0/3.0,      0.0,
  -2.0/3.0, -2.0/3.0,  2.0/3.0,
       0.0, -2.0/3.0,  2.0/3.0,
   2.0/3.0, -2.0/3.0,  2.0/3.0,
  -2.0/3.0,      0.0,  2.0/3.0,
       0.0,      0.0,  2.0/3.0,
   2.0/3.0,      0.0,  2.0/3.0,
  -2.0/3.0,  2.0/3.0,  2.0/3.0,
       0.0,  2.0/3.0,  2.0/3.0,
   2.0/3.0,  2.0/3.0,  2.0/3.0
};

static const REAL group7bits[125*3]=
{
 -0.8,-0.8,-0.8, -0.4,-0.8,-0.8, 0.0,-0.8,-0.8, 0.4,-0.8,-0.8, 0.8,-0.8,-0.8,
 -0.8,-0.4,-0.8, -0.4,-0.4,-0.8, 0.0,-0.4,-0.8, 0.4,-0.4,-0.8, 0.8,-0.4,-0.8,
 -0.8, 0.0,-0.8, -0.4, 0.0,-0.8, 0.0, 0.0,-0.8, 0.4, 0.0,-0.8, 0.8, 0.0,-0.8,
 -0.8, 0.4,-0.8, -0.4, 0.4,-0.8, 0.0, 0.4,-0.8, 0.4, 0.4,-0.8, 0.8, 0.4,-0.8,
 -0.8, 0.8,-0.8, -0.4, 0.8,-0.8, 0.0, 0.8,-0.8, 0.4, 0.8,-0.8, 0.8, 0.8,-0.8,
 -0.8,-0.8,-0.4, -0.4,-0.8,-0.4, 0.0,-0.8,-0.4, 0.4,-0.8,-0.4, 0.8,-0.8,-0.4,
 -0.8,-0.4,-0.4, -0.4,-0.4,-0.4, 0.0,-0.4,-0.4, 0.4,-0.4,-0.4, 0.8,-0.4,-0.4,
 -0.8, 0.0,-0.4, -0.4, 0.0,-0.4, 0.0, 0.0,-0.4, 0.4, 0.0,-0.4, 0.8, 0.0,-0.4,
 -0.8, 0.4,-0.4, -0.4, 0.4,-0.4, 0.0, 0.4,-0.4, 0.4, 0.4,-0.4, 0.8, 0.4,-0.4,
 -0.8, 0.8,-0.4, -0.4, 0.8,-0.4, 0.0, 0.8,-0.4, 0.4, 0.8,-0.4, 0.8, 0.8,-0.4,
 -0.8,-0.8, 0.0, -0.4,-0.8, 0.0, 0.0,-0.8, 0.0, 0.4,-0.8, 0.0, 0.8,-0.8, 0.0,
 -0.8,-0.4, 0.0, -0.4,-0.4, 0.0, 0.0,-0.4, 0.0, 0.4,-0.4, 0.0, 0.8,-0.4, 0.0,
 -0.8, 0.0, 0.0, -0.4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.4, 0.0, 0.0, 0.8, 0.0, 0.0,
 -0.8, 0.4, 0.0, -0.4, 0.4, 0.0, 0.0, 0.4, 0.0, 0.4, 0.4, 0.0, 0.8, 0.4, 0.0,
 -0.8, 0.8, 0.0, -0.4, 0.8, 0.0, 0.0, 0.8, 0.0, 0.4, 0.8, 0.0, 0.8, 0.8, 0.0,
 -0.8,-0.8, 0.4, -0.4,-0.8, 0.4, 0.0,-0.8, 0.4, 0.4,-0.8, 0.4, 0.8,-0.8, 0.4,
 -0.8,-0.4, 0.4, -0.4,-0.4, 0.4, 0.0,-0.4, 0.4, 0.4,-0.4, 0.4, 0.8,-0.4, 0.4,
 -0.8, 0.0, 0.4, -0.4, 0.0, 0.4, 0.0, 0.0, 0.4, 0.4, 0.0, 0.4, 0.8, 0.0, 0.4,
 -0.8, 0.4, 0.4, -0.4, 0.4, 0.4, 0.0, 0.4, 0.4, 0.4, 0.4, 0.4, 0.8, 0.4, 0.4,
 -0.8, 0.8, 0.4, -0.4, 0.8, 0.4, 0.0, 0.8, 0.4, 0.4, 0.8, 0.4, 0.8, 0.8, 0.4,
 -0.8,-0.8, 0.8, -0.4,-0.8, 0.8, 0.0,-0.8, 0.8, 0.4,-0.8, 0.8, 0.8,-0.8, 0.8,
 -0.8,-0.4, 0.8, -0.4,-0.4, 0.8, 0.0,-0.4, 0.8, 0.4,-0.4, 0.8, 0.8,-0.4, 0.8,
 -0.8, 0.0, 0.8, -0.4, 0.0, 0.8, 0.0, 0.0, 0.8, 0.4, 0.0, 0.8, 0.8, 0.0, 0.8,
 -0.8, 0.4, 0.8, -0.4, 0.4, 0.8, 0.0, 0.4, 0.8, 0.4, 0.4, 0.8, 0.8, 0.4, 0.8,
 -0.8, 0.8, 0.8, -0.4, 0.8, 0.8, 0.0, 0.8, 0.8, 0.4, 0.8, 0.8, 0.8, 0.8, 0.8
};

static const REAL group10bits[729*3]=
{
 -8.0/9.0,-8.0/9.0,-8.0/9.0, -6.0/9.0,-8.0/9.0,-8.0/9.0, -4.0/9.0,-8.0/9.0,-8.0/9.0,
 -2.0/9.0,-8.0/9.0,-8.0/9.0,      0.0,-8.0/9.0,-8.0/9.0,  2.0/9.0,-8.0/9.0,-8.0/9.0,
  4.0/9.0,-8.0/9.0,-8.0/9.0,  6.0/9.0,-8.0/9.0,-8.0/9.0,  8.0/9.0,-8.0/9.0,-8.0/9.0,
 -8.0/9.0,-6.0/9.0,-8.0/9.0, -6.0/9.0,-6.0/9.0,-8.0/9.0, -4.0/9.0,-6.0/9.0,-8.0/9.0,
 -2.0/9.0,-6.0/9.0,-8.0/9.0,      0.0,-6.0/9.0,-8.0/9.0,  2.0/9.0,-6.0/9.0,-8.0/9.0,
  4.0/9.0,-6.0/9.0,-8.0/9.0,  6.0/9.0,-6.0/9.0,-8.0/9.0,  8.0/9.0,-6.0/9.0,-8.0/9.0,
 -8.0/9.0,-4.0/9.0,-8.0/9.0, -6.0/9.0,-4.0/9.0,-8.0/9.0, -4.0/9.0,-4.0/9.0,-8.0/9.0,
 -2.0/9.0,-4.0/9.0,-8.0/9.0,      0.0,-4.0/9.0,-8.0/9.0,  2.0/9.0,-4.0/9.0,-8.0/9.0,
  4.0/9.0,-4.0/9.0,-8.0/9.0,  6.0/9.0,-4.0/9.0,-8.0/9.0,  8.0/9.0,-4.0/9.0,-8.0/9.0,
 -8.0/9.0,-2.0/9.0,-8.0/9.0, -6.0/9.0,-2.0/9.0,-8.0/9.0, -4.0/9.0,-2.0/9.0,-8.0/9.0,
 -2.0/9.0,-2.0/9.0,-8.0/9.0,      0.0,-2.0/9.0,-8.0/9.0,  2.0/9.0,-2.0/9.0,-8.0/9.0,
  4.0/9.0,-2.0/9.0,-8.0/9.0,  6.0/9.0,-2.0/9.0,-8.0/9.0,  8.0/9.0,-2.0/9.0,-8.0/9.0,
 -8.0/9.0,     0.0,-8.0/9.0, -6.0/9.0,     0.0,-8.0/9.0, -4.0/9.0,     0.0,-8.0/9.0,
 -2.0/9.0,     0.0,-8.0/9.0,      0.0,     0.0,-8.0/9.0,  2.0/9.0,     0.0,-8.0/9.0,
  4.0/9.0,     0.0,-8.0/9.0,  6.0/9.0,     0.0,-8.0/9.0,  8.0/9.0,     0.0,-8.0/9.0,
 -8.0/9.0, 2.0/9.0,-8.0/9.0, -6.0/9.0, 2.0/9.0,-8.0/9.0, -4.0/9.0, 2.0/9.0,-8.0/9.0,
 -2.0/9.0, 2.0/9.0,-8.0/9.0,      0.0, 2.0/9.0,-8.0/9.0,  2.0/9.0, 2.0/9.0,-8.0/9.0,
  4.0/9.0, 2.0/9.0,-8.0/9.0,  6.0/9.0, 2.0/9.0,-8.0/9.0,  8.0/9.0, 2.0/9.0,-8.0/9.0,
 -8.0/9.0, 4.0/9.0,-8.0/9.0, -6.0/9.0, 4.0/9.0,-8.0/9.0, -4.0/9.0, 4.0/9.0,-8.0/9.0,
 -2.0/9.0, 4.0/9.0,-8.0/9.0,      0.0, 4.0/9.0,-8.0/9.0,  2.0/9.0, 4.0/9.0,-8.0/9.0,
  4.0/9.0, 4.0/9.0,-8.0/9.0,  6.0/9.0, 4.0/9.0,-8.0/9.0,  8.0/9.0, 4.0/9.0,-8.0/9.0,
 -8.0/9.0, 6.0/9.0,-8.0/9.0, -6.0/9.0, 6.0/9.0,-8.0/9.0, -4.0/9.0, 6.0/9.0,-8.0/9.0,
 -2.0/9.0, 6.0/9.0,-8.0/9.0,      0.0, 6.0/9.0,-8.0/9.0,  2.0/9.0, 6.0/9.0,-8.0/9.0,
  4.0/9.0, 6.0/9.0,-8.0/9.0,  6.0/9.0, 6.0/9.0,-8.0/9.0,  8.0/9.0, 6.0/9.0,-8.0/9.0,
 -8.0/9.0, 8.0/9.0,-8.0/9.0, -6.0/9.0, 8.0/9.0,-8.0/9.0, -4.0/9.0, 8.0/9.0,-8.0/9.0,
 -2.0/9.0, 8.0/9.0,-8.0/9.0,      0.0, 8.0/9.0,-8.0/9.0,  2.0/9.0, 8.0/9.0,-8.0/9.0,
  4.0/9.0, 8.0/9.0,-8.0/9.0,  6.0/9.0, 8.0/9.0,-8.0/9.0,  8.0/9.0, 8.0/9.0,-8.0/9.0,
 -8.0/9.0,-8.0/9.0,-6.0/9.0, -6.0/9.0,-8.0/9.0,-6.0/9.0, -4.0/9.0,-8.0/9.0,-6.0/9.0,
 -2.0/9.0,-8.0/9.0,-6.0/9.0,      0.0,-8.0/9.0,-6.0/9.0,  2.0/9.0,-8.0/9.0,-6.0/9.0,
  4.0/9.0,-8.0/9.0,-6.0/9.0,  6.0/9.0,-8.0/9.0,-6.0/9.0,  8.0/9.0,-8.0/9.0,-6.0/9.0,
 -8.0/9.0,-6.0/9.0,-6.0/9.0, -6.0/9.0,-6.0/9.0,-6.0/9.0, -4.0/9.0,-6.0/9.0,-6.0/9.0,
 -2.0/9.0,-6.0/9.0,-6.0/9.0,      0.0,-6.0/9.0,-6.0/9.0,  2.0/9.0,-6.0/9.0,-6.0/9.0,
  4.0/9.0,-6.0/9.0,-6.0/9.0,  6.0/9.0,-6.0/9.0,-6.0/9.0,  8.0/9.0,-6.0/9.0,-6.0/9.0,
 -8.0/9.0,-4.0/9.0,-6.0/9.0, -6.0/9.0,-4.0/9.0,-6.0/9.0, -4.0/9.0,-4.0/9.0,-6.0/9.0,
 -2.0/9.0,-4.0/9.0,-6.0/9.0,      0.0,-4.0/9.0,-6.0/9.0,  2.0/9.0,-4.0/9.0,-6.0/9.0,
  4.0/9.0,-4.0/9.0,-6.0/9.0,  6.0/9.0,-4.0/9.0,-6.0/9.0,  8.0/9.0,-4.0/9.0,-6.0/9.0,
 -8.0/9.0,-2.0/9.0,-6.0/9.0, -6.0/9.0,-2.0/9.0,-6.0/9.0, -4.0/9.0,-2.0/9.0,-6.0/9.0,
 -2.0/9.0,-2.0/9.0,-6.0/9.0,      0.0,-2.0/9.0,-6.0/9.0,  2.0/9.0,-2.0/9.0,-6.0/9.0,
  4.0/9.0,-2.0/9.0,-6.0/9.0,  6.0/9.0,-2.0/9.0,-6.0/9.0,  8.0/9.0,-2.0/9.0,-6.0/9.0,
 -8.0/9.0,     0.0,-6.0/9.0, -6.0/9.0,     0.0,-6.0/9.0, -4.0/9.0,     0.0,-6.0/9.0,
 -2.0/9.0,     0.0,-6.0/9.0,      0.0,     0.0,-6.0/9.0,  2.0/9.0,     0.0,-6.0/9.0,
  4.0/9.0,     0.0,-6.0/9.0,  6.0/9.0,     0.0,-6.0/9.0,  8.0/9.0,     0.0,-6.0/9.0,
 -8.0/9.0, 2.0/9.0,-6.0/9.0, -6.0/9.0, 2.0/9.0,-6.0/9.0, -4.0/9.0, 2.0/9.0,-6.0/9.0,
 -2.0/9.0, 2.0/9.0,-6.0/9.0,      0.0, 2.0/9.0,-6.0/9.0,  2.0/9.0, 2.0/9.0,-6.0/9.0,
  4.0/9.0, 2.0/9.0,-6.0/9.0,  6.0/9.0, 2.0/9.0,-6.0/9.0,  8.0/9.0, 2.0/9.0,-6.0/9.0,
 -8.0/9.0, 4.0/9.0,-6.0/9.0, -6.0/9.0, 4.0/9.0,-6.0/9.0, -4.0/9.0, 4.0/9.0,-6.0/9.0,
 -2.0/9.0, 4.0/9.0,-6.0/9.0,      0.0, 4.0/9.0,-6.0/9.0,  2.0/9.0, 4.0/9.0,-6.0/9.0,
  4.0/9.0, 4.0/9.0,-6.0/9.0,  6.0/9.0, 4.0/9.0,-6.0/9.0,  8.0/9.0, 4.0/9.0,-6.0/9.0,
 -8.0/9.0, 6.0/9.0,-6.0/9.0, -6.0/9.0, 6.0/9.0,-6.0/9.0, -4.0/9.0, 6.0/9.0,-6.0/9.0,
 -2.0/9.0, 6.0/9.0,-6.0/9.0,      0.0, 6.0/9.0,-6.0/9.0,  2.0/9.0, 6.0/9.0,-6.0/9.0,
  4.0/9.0, 6.0/9.0,-6.0/9.0,  6.0/9.0, 6.0/9.0,-6.0/9.0,  8.0/9.0, 6.0/9.0,-6.0/9.0,
 -8.0/9.0, 8.0/9.0,-6.0/9.0, -6.0/9.0, 8.0/9.0,-6.0/9.0, -4.0/9.0, 8.0/9.0,-6.0/9.0,
 -2.0/9.0, 8.0/9.0,-6.0/9.0,      0.0, 8.0/9.0,-6.0/9.0,  2.0/9.0, 8.0/9.0,-6.0/9.0,
  4.0/9.0, 8.0/9.0,-6.0/9.0,  6.0/9.0, 8.0/9.0,-6.0/9.0,  8.0/9.0, 8.0/9.0,-6.0/9.0,
 -8.0/9.0,-8.0/9.0,-4.0/9.0, -6.0/9.0,-8.0/9.0,-4.0/9.0, -4.0/9.0,-8.0/9.0,-4.0/9.0,
 -2.0/9.0,-8.0/9.0,-4.0/9.0,      0.0,-8.0/9.0,-4.0/9.0,  2.0/9.0,-8.0/9.0,-4.0/9.0,
  4.0/9.0,-8.0/9.0,-4.0/9.0,  6.0/9.0,-8.0/9.0,-4.0/9.0,  8.0/9.0,-8.0/9.0,-4.0/9.0,
 -8.0/9.0,-6.0/9.0,-4.0/9.0, -6.0/9.0,-6.0/9.0,-4.0/9.0, -4.0/9.0,-6.0/9.0,-4.0/9.0,
 -2.0/9.0,-6.0/9.0,-4.0/9.0,      0.0,-6.0/9.0,-4.0/9.0,  2.0/9.0,-6.0/9.0,-4.0/9.0,
  4.0/9.0,-6.0/9.0,-4.0/9.0,  6.0/9.0,-6.0/9.0,-4.0/9.0,  8.0/9.0,-6.0/9.0,-4.0/9.0,
 -8.0/9.0,-4.0/9.0,-4.0/9.0, -6.0/9.0,-4.0/9.0,-4.0/9.0, -4.0/9.0,-4.0/9.0,-4.0/9.0,
 -2.0/9.0,-4.0/9.0,-4.0/9.0,      0.0,-4.0/9.0,-4.0/9.0,  2.0/9.0,-4.0/9.0,-4.0/9.0,
  4.0/9.0,-4.0/9.0,-4.0/9.0,  6.0/9.0,-4.0/9.0,-4.0/9.0,  8.0/9.0,-4.0/9.0,-4.0/9.0,
 -8.0/9.0,-2.0/9.0,-4.0/9.0, -6.0/9.0,-2.0/9.0,-4.0/9.0, -4.0/9.0,-2.0/9.0,-4.0/9.0,
 -2.0/9.0,-2.0/9.0,-4.0/9.0,      0.0,-2.0/9.0,-4.0/9.0,  2.0/9.0,-2.0/9.0,-4.0/9.0,
  4.0/9.0,-2.0/9.0,-4.0/9.0,  6.0/9.0,-2.0/9.0,-4.0/9.0,  8.0/9.0,-2.0/9.0,-4.0/9.0,
 -8.0/9.0,     0.0,-4.0/9.0, -6.0/9.0,     0.0,-4.0/9.0, -4.0/9.0,     0.0,-4.0/9.0,
 -2.0/9.0,     0.0,-4.0/9.0,      0.0,     0.0,-4.0/9.0,  2.0/9.0,     0.0,-4.0/9.0,
  4.0/9.0,     0.0,-4.0/9.0,  6.0/9.0,     0.0,-4.0/9.0,  8.0/9.0,     0.0,-4.0/9.0,
 -8.0/9.0, 2.0/9.0,-4.0/9.0, -6.0/9.0, 2.0/9.0,-4.0/9.0, -4.0/9.0, 2.0/9.0,-4.0/9.0,
 -2.0/9.0, 2.0/9.0,-4.0/9.0,      0.0, 2.0/9.0,-4.0/9.0,  2.0/9.0, 2.0/9.0,-4.0/9.0,
  4.0/9.0, 2.0/9.0,-4.0/9.0,  6.0/9.0, 2.0/9.0,-4.0/9.0,  8.0/9.0, 2.0/9.0,-4.0/9.0,
 -8.0/9.0, 4.0/9.0,-4.0/9.0, -6.0/9.0, 4.0/9.0,-4.0/9.0, -4.0/9.0, 4.0/9.0,-4.0/9.0,
 -2.0/9.0, 4.0/9.0,-4.0/9.0,      0.0, 4.0/9.0,-4.0/9.0,  2.0/9.0, 4.0/9.0,-4.0/9.0,
  4.0/9.0, 4.0/9.0,-4.0/9.0,  6.0/9.0, 4.0/9.0,-4.0/9.0,  8.0/9.0, 4.0/9.0,-4.0/9.0,
 -8.0/9.0, 6.0/9.0,-4.0/9.0, -6.0/9.0, 6.0/9.0,-4.0/9.0, -4.0/9.0, 6.0/9.0,-4.0/9.0,
 -2.0/9.0, 6.0/9.0,-4.0/9.0,      0.0, 6.0/9.0,-4.0/9.0,  2.0/9.0, 6.0/9.0,-4.0/9.0,
  4.0/9.0, 6.0/9.0,-4.0/9.0,  6.0/9.0, 6.0/9.0,-4.0/9.0,  8.0/9.0, 6.0/9.0,-4.0/9.0,
 -8.0/9.0, 8.0/9.0,-4.0/9.0, -6.0/9.0, 8.0/9.0,-4.0/9.0, -4.0/9.0, 8.0/9.0,-4.0/9.0,
 -2.0/9.0, 8.0/9.0,-4.0/9.0,      0.0, 8.0/9.0,-4.0/9.0,  2.0/9.0, 8.0/9.0,-4.0/9.0,
  4.0/9.0, 8.0/9.0,-4.0/9.0,  6.0/9.0, 8.0/9.0,-4.0/9.0,  8.0/9.0, 8.0/9.0,-4.0/9.0,
 -8.0/9.0,-8.0/9.0,-2.0/9.0, -6.0/9.0,-8.0/9.0,-2.0/9.0, -4.0/9.0,-8.0/9.0,-2.0/9.0,
 -2.0/9.0,-8.0/9.0,-2.0/9.0,      0.0,-8.0/9.0,-2.0/9.0,  2.0/9.0,-8.0/9.0,-2.0/9.0,
  4.0/9.0,-8.0/9.0,-2.0/9.0,  6.0/9.0,-8.0/9.0,-2.0/9.0,  8.0/9.0,-8.0/9.0,-2.0/9.0,
 -8.0/9.0,-6.0/9.0,-2.0/9.0, -6.0/9.0,-6.0/9.0,-2.0/9.0, -4.0/9.0,-6.0/9.0,-2.0/9.0,
 -2.0/9.0,-6.0/9.0,-2.0/9.0,      0.0,-6.0/9.0,-2.0/9.0,  2.0/9.0,-6.0/9.0,-2.0/9.0,
  4.0/9.0,-6.0/9.0,-2.0/9.0,  6.0/9.0,-6.0/9.0,-2.0/9.0,  8.0/9.0,-6.0/9.0,-2.0/9.0,
 -8.0/9.0,-4.0/9.0,-2.0/9.0, -6.0/9.0,-4.0/9.0,-2.0/9.0, -4.0/9.0,-4.0/9.0,-2.0/9.0,
 -2.0/9.0,-4.0/9.0,-2.0/9.0,      0.0,-4.0/9.0,-2.0/9.0,  2.0/9.0,-4.0/9.0,-2.0/9.0,
  4.0/9.0,-4.0/9.0,-2.0/9.0,  6.0/9.0,-4.0/9.0,-2.0/9.0,  8.0/9.0,-4.0/9.0,-2.0/9.0,
 -8.0/9.0,-2.0/9.0,-2.0/9.0, -6.0/9.0,-2.0/9.0,-2.0/9.0, -4.0/9.0,-2.0/9.0,-2.0/9.0,
 -2.0/9.0,-2.0/9.0,-2.0/9.0,      0.0,-2.0/9.0,-2.0/9.0,  2.0/9.0,-2.0/9.0,-2.0/9.0,
  4.0/9.0,-2.0/9.0,-2.0/9.0,  6.0/9.0,-2.0/9.0,-2.0/9.0,  8.0/9.0,-2.0/9.0,-2.0/9.0,
 -8.0/9.0,     0.0,-2.0/9.0, -6.0/9.0,     0.0,-2.0/9.0, -4.0/9.0,     0.0,-2.0/9.0,
 -2.0/9.0,     0.0,-2.0/9.0,      0.0,     0.0,-2.0/9.0,  2.0/9.0,     0.0,-2.0/9.0,
  4.0/9.0,     0.0,-2.0/9.0,  6.0/9.0,     0.0,-2.0/9.0,  8.0/9.0,     0.0,-2.0/9.0,
 -8.0/9.0, 2.0/9.0,-2.0/9.0, -6.0/9.0, 2.0/9.0,-2.0/9.0, -4.0/9.0, 2.0/9.0,-2.0/9.0,
 -2.0/9.0, 2.0/9.0,-2.0/9.0,      0.0, 2.0/9.0,-2.0/9.0,  2.0/9.0, 2.0/9.0,-2.0/9.0,
  4.0/9.0, 2.0/9.0,-2.0/9.0,  6.0/9.0, 2.0/9.0,-2.0/9.0,  8.0/9.0, 2.0/9.0,-2.0/9.0,
 -8.0/9.0, 4.0/9.0,-2.0/9.0, -6.0/9.0, 4.0/9.0,-2.0/9.0, -4.0/9.0, 4.0/9.0,-2.0/9.0,
 -2.0/9.0, 4.0/9.0,-2.0/9.0,      0.0, 4.0/9.0,-2.0/9.0,  2.0/9.0, 4.0/9.0,-2.0/9.0,
  4.0/9.0, 4.0/9.0,-2.0/9.0,  6.0/9.0, 4.0/9.0,-2.0/9.0,  8.0/9.0, 4.0/9.0,-2.0/9.0,
 -8.0/9.0, 6.0/9.0,-2.0/9.0, -6.0/9.0, 6.0/9.0,-2.0/9.0, -4.0/9.0, 6.0/9.0,-2.0/9.0,
 -2.0/9.0, 6.0/9.0,-2.0/9.0,      0.0, 6.0/9.0,-2.0/9.0,  2.0/9.0, 6.0/9.0,-2.0/9.0,
  4.0/9.0, 6.0/9.0,-2.0/9.0,  6.0/9.0, 6.0/9.0,-2.0/9.0,  8.0/9.0, 6.0/9.0,-2.0/9.0,
 -8.0/9.0, 8.0/9.0,-2.0/9.0, -6.0/9.0, 8.0/9.0,-2.0/9.0, -4.0/9.0, 8.0/9.0,-2.0/9.0,
 -2.0/9.0, 8.0/9.0,-2.0/9.0,      0.0, 8.0/9.0,-2.0/9.0,  2.0/9.0, 8.0/9.0,-2.0/9.0,
  4.0/9.0, 8.0/9.0,-2.0/9.0,  6.0/9.0, 8.0/9.0,-2.0/9.0,  8.0/9.0, 8.0/9.0,-2.0/9.0,
 -8.0/9.0,-8.0/9.0,     0.0, -6.0/9.0,-8.0/9.0,     0.0, -4.0/9.0,-8.0/9.0,     0.0,
 -2.0/9.0,-8.0/9.0,     0.0,      0.0,-8.0/9.0,     0.0,  2.0/9.0,-8.0/9.0,     0.0,
  4.0/9.0,-8.0/9.0,     0.0,  6.0/9.0,-8.0/9.0,     0.0,  8.0/9.0,-8.0/9.0,     0.0,
 -8.0/9.0,-6.0/9.0,     0.0, -6.0/9.0,-6.0/9.0,     0.0, -4.0/9.0,-6.0/9.0,     0.0,
 -2.0/9.0,-6.0/9.0,     0.0,      0.0,-6.0/9.0,     0.0,  2.0/9.0,-6.0/9.0,     0.0,
  4.0/9.0,-6.0/9.0,     0.0,  6.0/9.0,-6.0/9.0,     0.0,  8.0/9.0,-6.0/9.0,     0.0,
 -8.0/9.0,-4.0/9.0,     0.0, -6.0/9.0,-4.0/9.0,     0.0, -4.0/9.0,-4.0/9.0,     0.0,
 -2.0/9.0,-4.0/9.0,     0.0,      0.0,-4.0/9.0,     0.0,  2.0/9.0,-4.0/9.0,     0.0,
  4.0/9.0,-4.0/9.0,     0.0,  6.0/9.0,-4.0/9.0,     0.0,  8.0/9.0,-4.0/9.0,     0.0,
 -8.0/9.0,-2.0/9.0,     0.0, -6.0/9.0,-2.0/9.0,     0.0, -4.0/9.0,-2.0/9.0,     0.0,
 -2.0/9.0,-2.0/9.0,     0.0,      0.0,-2.0/9.0,     0.0,  2.0/9.0,-2.0/9.0,     0.0,
  4.0/9.0,-2.0/9.0,     0.0,  6.0/9.0,-2.0/9.0,     0.0,  8.0/9.0,-2.0/9.0,     0.0,
 -8.0/9.0,     0.0,     0.0, -6.0/9.0,     0.0,     0.0, -4.0/9.0,     0.0,     0.0,
 -2.0/9.0,     0.0,     0.0,      0.0,     0.0,     0.0,  2.0/9.0,     0.0,     0.0,
  4.0/9.0,     0.0,     0.0,  6.0/9.0,     0.0,     0.0,  8.0/9.0,     0.0,     0.0,
 -8.0/9.0, 2.0/9.0,     0.0, -6.0/9.0, 2.0/9.0,     0.0, -4.0/9.0, 2.0/9.0,     0.0,
 -2.0/9.0, 2.0/9.0,     0.0,      0.0, 2.0/9.0,     0.0,  2.0/9.0, 2.0/9.0,     0.0,
  4.0/9.0, 2.0/9.0,     0.0,  6.0/9.0, 2.0/9.0,     0.0,  8.0/9.0, 2.0/9.0,     0.0,
 -8.0/9.0, 4.0/9.0,     0.0, -6.0/9.0, 4.0/9.0,     0.0, -4.0/9.0, 4.0/9.0,     0.0,
 -2.0/9.0, 4.0/9.0,     0.0,      0.0, 4.0/9.0,     0.0,  2.0/9.0, 4.0/9.0,     0.0,
  4.0/9.0, 4.0/9.0,     0.0,  6.0/9.0, 4.0/9.0,     0.0,  8.0/9.0, 4.0/9.0,     0.0,
 -8.0/9.0, 6.0/9.0,     0.0, -6.0/9.0, 6.0/9.0,     0.0, -4.0/9.0, 6.0/9.0,     0.0,
 -2.0/9.0, 6.0/9.0,     0.0,      0.0, 6.0/9.0,     0.0,  2.0/9.0, 6.0/9.0,     0.0,
  4.0/9.0, 6.0/9.0,     0.0,  6.0/9.0, 6.0/9.0,     0.0,  8.0/9.0, 6.0/9.0,     0.0,
 -8.0/9.0, 8.0/9.0,     0.0, -6.0/9.0, 8.0/9.0,     0.0, -4.0/9.0, 8.0/9.0,     0.0,
 -2.0/9.0, 8.0/9.0,     0.0,      0.0, 8.0/9.0,     0.0,  2.0/9.0, 8.0/9.0,     0.0,
  4.0/9.0, 8.0/9.0,     0.0,  6.0/9.0, 8.0/9.0,     0.0,  8.0/9.0, 8.0/9.0,     0.0,
 -8.0/9.0,-8.0/9.0, 2.0/9.0, -6.0/9.0,-8.0/9.0, 2.0/9.0, -4.0/9.0,-8.0/9.0, 2.0/9.0,
 -2.0/9.0,-8.0/9.0, 2.0/9.0,      0.0,-8.0/9.0, 2.0/9.0,  2.0/9.0,-8.0/9.0, 2.0/9.0,
  4.0/9.0,-8.0/9.0, 2.0/9.0,  6.0/9.0,-8.0/9.0, 2.0/9.0,  8.0/9.0,-8.0/9.0, 2.0/9.0,
 -8.0/9.0,-6.0/9.0, 2.0/9.0, -6.0/9.0,-6.0/9.0, 2.0/9.0, -4.0/9.0,-6.0/9.0, 2.0/9.0,
 -2.0/9.0,-6.0/9.0, 2.0/9.0,      0.0,-6.0/9.0, 2.0/9.0,  2.0/9.0,-6.0/9.0, 2.0/9.0,
  4.0/9.0,-6.0/9.0, 2.0/9.0,  6.0/9.0,-6.0/9.0, 2.0/9.0,  8.0/9.0,-6.0/9.0, 2.0/9.0,
 -8.0/9.0,-4.0/9.0, 2.0/9.0, -6.0/9.0,-4.0/9.0, 2.0/9.0, -4.0/9.0,-4.0/9.0, 2.0/9.0,
 -2.0/9.0,-4.0/9.0, 2.0/9.0,      0.0,-4.0/9.0, 2.0/9.0,  2.0/9.0,-4.0/9.0, 2.0/9.0,
  4.0/9.0,-4.0/9.0, 2.0/9.0,  6.0/9.0,-4.0/9.0, 2.0/9.0,  8.0/9.0,-4.0/9.0, 2.0/9.0,
 -8.0/9.0,-2.0/9.0, 2.0/9.0, -6.0/9.0,-2.0/9.0, 2.0/9.0, -4.0/9.0,-2.0/9.0, 2.0/9.0,
 -2.0/9.0,-2.0/9.0, 2.0/9.0,      0.0,-2.0/9.0, 2.0/9.0,  2.0/9.0,-2.0/9.0, 2.0/9.0,
  4.0/9.0,-2.0/9.0, 2.0/9.0,  6.0/9.0,-2.0/9.0, 2.0/9.0,  8.0/9.0,-2.0/9.0, 2.0/9.0,
 -8.0/9.0,     0.0, 2.0/9.0, -6.0/9.0,     0.0, 2.0/9.0, -4.0/9.0,     0.0, 2.0/9.0,
 -2.0/9.0,     0.0, 2.0/9.0,      0.0,     0.0, 2.0/9.0,  2.0/9.0,     0.0, 2.0/9.0,
  4.0/9.0,     0.0, 2.0/9.0,  6.0/9.0,     0.0, 2.0/9.0,  8.0/9.0,     0.0, 2.0/9.0,
 -8.0/9.0, 2.0/9.0, 2.0/9.0, -6.0/9.0, 2.0/9.0, 2.0/9.0, -4.0/9.0, 2.0/9.0, 2.0/9.0,
 -2.0/9.0, 2.0/9.0, 2.0/9.0,      0.0, 2.0/9.0, 2.0/9.0,  2.0/9.0, 2.0/9.0, 2.0/9.0,
  4.0/9.0, 2.0/9.0, 2.0/9.0,  6.0/9.0, 2.0/9.0, 2.0/9.0,  8.0/9.0, 2.0/9.0, 2.0/9.0,
 -8.0/9.0, 4.0/9.0, 2.0/9.0, -6.0/9.0, 4.0/9.0, 2.0/9.0, -4.0/9.0, 4.0/9.0, 2.0/9.0,
 -2.0/9.0, 4.0/9.0, 2.0/9.0,      0.0, 4.0/9.0, 2.0/9.0,  2.0/9.0, 4.0/9.0, 2.0/9.0,
  4.0/9.0, 4.0/9.0, 2.0/9.0,  6.0/9.0, 4.0/9.0, 2.0/9.0,  8.0/9.0, 4.0/9.0, 2.0/9.0,
 -8.0/9.0, 6.0/9.0, 2.0/9.0, -6.0/9.0, 6.0/9.0, 2.0/9.0, -4.0/9.0, 6.0/9.0, 2.0/9.0,
 -2.0/9.0, 6.0/9.0, 2.0/9.0,      0.0, 6.0/9.0, 2.0/9.0,  2.0/9.0, 6.0/9.0, 2.0/9.0,
  4.0/9.0, 6.0/9.0, 2.0/9.0,  6.0/9.0, 6.0/9.0, 2.0/9.0,  8.0/9.0, 6.0/9.0, 2.0/9.0,
 -8.0/9.0, 8.0/9.0, 2.0/9.0, -6.0/9.0, 8.0/9.0, 2.0/9.0, -4.0/9.0, 8.0/9.0, 2.0/9.0,
 -2.0/9.0, 8.0/9.0, 2.0/9.0,      0.0, 8.0/9.0, 2.0/9.0,  2.0/9.0, 8.0/9.0, 2.0/9.0,
  4.0/9.0, 8.0/9.0, 2.0/9.0,  6.0/9.0, 8.0/9.0, 2.0/9.0,  8.0/9.0, 8.0/9.0, 2.0/9.0,
 -8.0/9.0,-8.0/9.0, 4.0/9.0, -6.0/9.0,-8.0/9.0, 4.0/9.0, -4.0/9.0,-8.0/9.0, 4.0/9.0,
 -2.0/9.0,-8.0/9.0, 4.0/9.0,      0.0,-8.0/9.0, 4.0/9.0,  2.0/9.0,-8.0/9.0, 4.0/9.0,
  4.0/9.0,-8.0/9.0, 4.0/9.0,  6.0/9.0,-8.0/9.0, 4.0/9.0,  8.0/9.0,-8.0/9.0, 4.0/9.0,
 -8.0/9.0,-6.0/9.0, 4.0/9.0, -6.0/9.0,-6.0/9.0, 4.0/9.0, -4.0/9.0,-6.0/9.0, 4.0/9.0,
 -2.0/9.0,-6.0/9.0, 4.0/9.0,      0.0,-6.0/9.0, 4.0/9.0,  2.0/9.0,-6.0/9.0, 4.0/9.0,
  4.0/9.0,-6.0/9.0, 4.0/9.0,  6.0/9.0,-6.0/9.0, 4.0/9.0,  8.0/9.0,-6.0/9.0, 4.0/9.0,
 -8.0/9.0,-4.0/9.0, 4.0/9.0, -6.0/9.0,-4.0/9.0, 4.0/9.0, -4.0/9.0,-4.0/9.0, 4.0/9.0,
 -2.0/9.0,-4.0/9.0, 4.0/9.0,      0.0,-4.0/9.0, 4.0/9.0,  2.0/9.0,-4.0/9.0, 4.0/9.0,
  4.0/9.0,-4.0/9.0, 4.0/9.0,  6.0/9.0,-4.0/9.0, 4.0/9.0,  8.0/9.0,-4.0/9.0, 4.0/9.0,
 -8.0/9.0,-2.0/9.0, 4.0/9.0, -6.0/9.0,-2.0/9.0, 4.0/9.0, -4.0/9.0,-2.0/9.0, 4.0/9.0,
 -2.0/9.0,-2.0/9.0, 4.0/9.0,      0.0,-2.0/9.0, 4.0/9.0,  2.0/9.0,-2.0/9.0, 4.0/9.0,
  4.0/9.0,-2.0/9.0, 4.0/9.0,  6.0/9.0,-2.0/9.0, 4.0/9.0,  8.0/9.0,-2.0/9.0, 4.0/9.0,
 -8.0/9.0,     0.0, 4.0/9.0, -6.0/9.0,     0.0, 4.0/9.0, -4.0/9.0,     0.0, 4.0/9.0,
 -2.0/9.0,     0.0, 4.0/9.0,      0.0,     0.0, 4.0/9.0,  2.0/9.0,     0.0, 4.0/9.0,
  4.0/9.0,     0.0, 4.0/9.0,  6.0/9.0,     0.0, 4.0/9.0,  8.0/9.0,     0.0, 4.0/9.0,
 -8.0/9.0, 2.0/9.0, 4.0/9.0, -6.0/9.0, 2.0/9.0, 4.0/9.0, -4.0/9.0, 2.0/9.0, 4.0/9.0,
 -2.0/9.0, 2.0/9.0, 4.0/9.0,      0.0, 2.0/9.0, 4.0/9.0,  2.0/9.0, 2.0/9.0, 4.0/9.0,
  4.0/9.0, 2.0/9.0, 4.0/9.0,  6.0/9.0, 2.0/9.0, 4.0/9.0,  8.0/9.0, 2.0/9.0, 4.0/9.0,
 -8.0/9.0, 4.0/9.0, 4.0/9.0, -6.0/9.0, 4.0/9.0, 4.0/9.0, -4.0/9.0, 4.0/9.0, 4.0/9.0,
 -2.0/9.0, 4.0/9.0, 4.0/9.0,      0.0, 4.0/9.0, 4.0/9.0,  2.0/9.0, 4.0/9.0, 4.0/9.0,
  4.0/9.0, 4.0/9.0, 4.0/9.0,  6.0/9.0, 4.0/9.0, 4.0/9.0,  8.0/9.0, 4.0/9.0, 4.0/9.0,
 -8.0/9.0, 6.0/9.0, 4.0/9.0, -6.0/9.0, 6.0/9.0, 4.0/9.0, -4.0/9.0, 6.0/9.0, 4.0/9.0,
 -2.0/9.0, 6.0/9.0, 4.0/9.0,      0.0, 6.0/9.0, 4.0/9.0,  2.0/9.0, 6.0/9.0, 4.0/9.0,
  4.0/9.0, 6.0/9.0, 4.0/9.0,  6.0/9.0, 6.0/9.0, 4.0/9.0,  8.0/9.0, 6.0/9.0, 4.0/9.0,
 -8.0/9.0, 8.0/9.0, 4.0/9.0, -6.0/9.0, 8.0/9.0, 4.0/9.0, -4.0/9.0, 8.0/9.0, 4.0/9.0,
 -2.0/9.0, 8.0/9.0, 4.0/9.0,      0.0, 8.0/9.0, 4.0/9.0,  2.0/9.0, 8.0/9.0, 4.0/9.0,
  4.0/9.0, 8.0/9.0, 4.0/9.0,  6.0/9.0, 8.0/9.0, 4.0/9.0,  8.0/9.0, 8.0/9.0, 4.0/9.0,
 -8.0/9.0,-8.0/9.0, 6.0/9.0, -6.0/9.0,-8.0/9.0, 6.0/9.0, -4.0/9.0,-8.0/9.0, 6.0/9.0,
 -2.0/9.0,-8.0/9.0, 6.0/9.0,      0.0,-8.0/9.0, 6.0/9.0,  2.0/9.0,-8.0/9.0, 6.0/9.0,
  4.0/9.0,-8.0/9.0, 6.0/9.0,  6.0/9.0,-8.0/9.0, 6.0/9.0,  8.0/9.0,-8.0/9.0, 6.0/9.0,
 -8.0/9.0,-6.0/9.0, 6.0/9.0, -6.0/9.0,-6.0/9.0, 6.0/9.0, -4.0/9.0,-6.0/9.0, 6.0/9.0,
 -2.0/9.0,-6.0/9.0, 6.0/9.0,      0.0,-6.0/9.0, 6.0/9.0,  2.0/9.0,-6.0/9.0, 6.0/9.0,
  4.0/9.0,-6.0/9.0, 6.0/9.0,  6.0/9.0,-6.0/9.0, 6.0/9.0,  8.0/9.0,-6.0/9.0, 6.0/9.0,
 -8.0/9.0,-4.0/9.0, 6.0/9.0, -6.0/9.0,-4.0/9.0, 6.0/9.0, -4.0/9.0,-4.0/9.0, 6.0/9.0,
 -2.0/9.0,-4.0/9.0, 6.0/9.0,      0.0,-4.0/9.0, 6.0/9.0,  2.0/9.0,-4.0/9.0, 6.0/9.0,
  4.0/9.0,-4.0/9.0, 6.0/9.0,  6.0/9.0,-4.0/9.0, 6.0/9.0,  8.0/9.0,-4.0/9.0, 6.0/9.0,
 -8.0/9.0,-2.0/9.0, 6.0/9.0, -6.0/9.0,-2.0/9.0, 6.0/9.0, -4.0/9.0,-2.0/9.0, 6.0/9.0,
 -2.0/9.0,-2.0/9.0, 6.0/9.0,      0.0,-2.0/9.0, 6.0/9.0,  2.0/9.0,-2.0/9.0, 6.0/9.0,
  4.0/9.0,-2.0/9.0, 6.0/9.0,  6.0/9.0,-2.0/9.0, 6.0/9.0,  8.0/9.0,-2.0/9.0, 6.0/9.0,
 -8.0/9.0,     0.0, 6.0/9.0, -6.0/9.0,     0.0, 6.0/9.0, -4.0/9.0,     0.0, 6.0/9.0,
 -2.0/9.0,     0.0, 6.0/9.0,      0.0,     0.0, 6.0/9.0,  2.0/9.0,     0.0, 6.0/9.0,
  4.0/9.0,     0.0, 6.0/9.0,  6.0/9.0,     0.0, 6.0/9.0,  8.0/9.0,     0.0, 6.0/9.0,
 -8.0/9.0, 2.0/9.0, 6.0/9.0, -6.0/9.0, 2.0/9.0, 6.0/9.0, -4.0/9.0, 2.0/9.0, 6.0/9.0,
 -2.0/9.0, 2.0/9.0, 6.0/9.0,      0.0, 2.0/9.0, 6.0/9.0,  2.0/9.0, 2.0/9.0, 6.0/9.0,
  4.0/9.0, 2.0/9.0, 6.0/9.0,  6.0/9.0, 2.0/9.0, 6.0/9.0,  8.0/9.0, 2.0/9.0, 6.0/9.0,
 -8.0/9.0, 4.0/9.0, 6.0/9.0, -6.0/9.0, 4.0/9.0, 6.0/9.0, -4.0/9.0, 4.0/9.0, 6.0/9.0,
 -2.0/9.0, 4.0/9.0, 6.0/9.0,      0.0, 4.0/9.0, 6.0/9.0,  2.0/9.0, 4.0/9.0, 6.0/9.0,
  4.0/9.0, 4.0/9.0, 6.0/9.0,  6.0/9.0, 4.0/9.0, 6.0/9.0,  8.0/9.0, 4.0/9.0, 6.0/9.0,
 -8.0/9.0, 6.0/9.0, 6.0/9.0, -6.0/9.0, 6.0/9.0, 6.0/9.0, -4.0/9.0, 6.0/9.0, 6.0/9.0,
 -2.0/9.0, 6.0/9.0, 6.0/9.0,      0.0, 6.0/9.0, 6.0/9.0,  2.0/9.0, 6.0/9.0, 6.0/9.0,
  4.0/9.0, 6.0/9.0, 6.0/9.0,  6.0/9.0, 6.0/9.0, 6.0/9.0,  8.0/9.0, 6.0/9.0, 6.0/9.0,
 -8.0/9.0, 8.0/9.0, 6.0/9.0, -6.0/9.0, 8.0/9.0, 6.0/9.0, -4.0/9.0, 8.0/9.0, 6.0/9.0,
 -2.0/9.0, 8.0/9.0, 6.0/9.0,      0.0, 8.0/9.0, 6.0/9.0,  2.0/9.0, 8.0/9.0, 6.0/9.0,
  4.0/9.0, 8.0/9.0, 6.0/9.0,  6.0/9.0, 8.0/9.0, 6.0/9.0,  8.0/9.0, 8.0/9.0, 6.0/9.0,
 -8.0/9.0,-8.0/9.0, 8.0/9.0, -6.0/9.0,-8.0/9.0, 8.0/9.0, -4.0/9.0,-8.0/9.0, 8.0/9.0,
 -2.0/9.0,-8.0/9.0, 8.0/9.0,      0.0,-8.0/9.0, 8.0/9.0,  2.0/9.0,-8.0/9.0, 8.0/9.0,
  4.0/9.0,-8.0/9.0, 8.0/9.0,  6.0/9.0,-8.0/9.0, 8.0/9.0,  8.0/9.0,-8.0/9.0, 8.0/9.0,
 -8.0/9.0,-6.0/9.0, 8.0/9.0, -6.0/9.0,-6.0/9.0, 8.0/9.0, -4.0/9.0,-6.0/9.0, 8.0/9.0,
 -2.0/9.0,-6.0/9.0, 8.0/9.0,      0.0,-6.0/9.0, 8.0/9.0,  2.0/9.0,-6.0/9.0, 8.0/9.0,
  4.0/9.0,-6.0/9.0, 8.0/9.0,  6.0/9.0,-6.0/9.0, 8.0/9.0,  8.0/9.0,-6.0/9.0, 8.0/9.0,
 -8.0/9.0,-4.0/9.0, 8.0/9.0, -6.0/9.0,-4.0/9.0, 8.0/9.0, -4.0/9.0,-4.0/9.0, 8.0/9.0,
 -2.0/9.0,-4.0/9.0, 8.0/9.0,      0.0,-4.0/9.0, 8.0/9.0,  2.0/9.0,-4.0/9.0, 8.0/9.0,
  4.0/9.0,-4.0/9.0, 8.0/9.0,  6.0/9.0,-4.0/9.0, 8.0/9.0,  8.0/9.0,-4.0/9.0, 8.0/9.0,
 -8.0/9.0,-2.0/9.0, 8.0/9.0, -6.0/9.0,-2.0/9.0, 8.0/9.0, -4.0/9.0,-2.0/9.0, 8.0/9.0,
 -2.0/9.0,-2.0/9.0, 8.0/9.0,      0.0,-2.0/9.0, 8.0/9.0,  2.0/9.0,-2.0/9.0, 8.0/9.0,
  4.0/9.0,-2.0/9.0, 8.0/9.0,  6.0/9.0,-2.0/9.0, 8.0/9.0,  8.0/9.0,-2.0/9.0, 8.0/9.0,
 -8.0/9.0,     0.0, 8.0/9.0, -6.0/9.0,     0.0, 8.0/9.0, -4.0/9.0,     0.0, 8.0/9.0,
 -2.0/9.0,     0.0, 8.0/9.0,      0.0,     0.0, 8.0/9.0,  2.0/9.0,     0.0, 8.0/9.0,
  4.0/9.0,     0.0, 8.0/9.0,  6.0/9.0,     0.0, 8.0/9.0,  8.0/9.0,     0.0, 8.0/9.0,
 -8.0/9.0, 2.0/9.0, 8.0/9.0, -6.0/9.0, 2.0/9.0, 8.0/9.0, -4.0/9.0, 2.0/9.0, 8.0/9.0,
 -2.0/9.0, 2.0/9.0, 8.0/9.0,      0.0, 2.0/9.0, 8.0/9.0,  2.0/9.0, 2.0/9.0, 8.0/9.0,
  4.0/9.0, 2.0/9.0, 8.0/9.0,  6.0/9.0, 2.0/9.0, 8.0/9.0,  8.0/9.0, 2.0/9.0, 8.0/9.0,
 -8.0/9.0, 4.0/9.0, 8.0/9.0, -6.0/9.0, 4.0/9.0, 8.0/9.0, -4.0/9.0, 4.0/9.0, 8.0/9.0,
 -2.0/9.0, 4.0/9.0, 8.0/9.0,      0.0, 4.0/9.0, 8.0/9.0,  2.0/9.0, 4.0/9.0, 8.0/9.0,
  4.0/9.0, 4.0/9.0, 8.0/9.0,  6.0/9.0, 4.0/9.0, 8.0/9.0,  8.0/9.0, 4.0/9.0, 8.0/9.0,
 -8.0/9.0, 6.0/9.0, 8.0/9.0, -6.0/9.0, 6.0/9.0, 8.0/9.0, -4.0/9.0, 6.0/9.0, 8.0/9.0,
 -2.0/9.0, 6.0/9.0, 8.0/9.0,      0.0, 6.0/9.0, 8.0/9.0,  2.0/9.0, 6.0/9.0, 8.0/9.0,
  4.0/9.0, 6.0/9.0, 8.0/9.0,  6.0/9.0, 6.0/9.0, 8.0/9.0,  8.0/9.0, 6.0/9.0, 8.0/9.0,
 -8.0/9.0, 8.0/9.0, 8.0/9.0, -6.0/9.0, 8.0/9.0, 8.0/9.0, -4.0/9.0, 8.0/9.0, 8.0/9.0,
 -2.0/9.0, 8.0/9.0, 8.0/9.0,      0.0, 8.0/9.0, 8.0/9.0,  2.0/9.0, 8.0/9.0, 8.0/9.0,
  4.0/9.0, 8.0/9.0, 8.0/9.0,  6.0/9.0, 8.0/9.0, 8.0/9.0,  8.0/9.0, 8.0/9.0, 8.0/9.0
};


static const REAL *grouptableA[16] =
{ 0,group5bits,group7bits,group10bits,0,0,0,0,0,0,0,0,0,0,0,0};
static const REAL *grouptableB1[16] =
{ 0,group5bits,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
static const REAL *grouptableB234[16] =
{ 0,group5bits,group7bits,0,group10bits,0,0,0,0,0,0,0,0,0,0,0};

static const int codelengthtableA[16] =
{ 0, 5, 7, 10, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
static const int codelengthtableB1[16] =
{ 0, 5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const int codelengthtableB2[16] =
{ 0, 5, 7, 3, 10, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16 };
static const int codelengthtableB3[8] = { 0, 5, 7, 3, 10, 4, 5, 16 };
static const int codelengthtableB4[4] = { 0, 5, 7, 16 };


static const REAL factortableA[16] =
{ 0.0,        1.0/2.0,    1.0/4.0,    1.0/8.0,
  1.0/8.0,    1.0/16.0,   1.0/32.0,   1.0/64.0,
  1.0/128.0,  1.0/256.0,  1.0/512.0,  1.0/1024.0,
  1.0/2048.0, 1.0/4096.0, 1.0/8192.0, 1.0/16384.0 };
static const REAL factortableB1[16] =
{ 0.0,        1.0/2.0,    1.0/4.0,     1.0/8.0, 
  1.0/16.0,   1.0/32.0,   1.0/64.0,    1.0/128.0, 
  1.0/256.0,  1.0/512.0,  1.0/1024.0,  1.0/2048.0,
  1.0/4096.0, 1.0/8192.0, 1.0/16384.0, 1.0/32768.0 };
static const REAL factortableB2[16] =
{ 0.0,        1.0/2.0,    1.0/4.0,    1.0/4.0,
  1.0/8.0,    1.0/8.0,    1.0/16.0,   1.0/32.0,
  1.0/64.0,   1.0/128.0,  1.0/256.0,  1.0/512.0,
  1.0/1024.0, 1.0/2048.0, 1.0/4096.0, 1.0/32768.0 };
static const REAL factortableB3[8] =
{ 0.0, 1.0/2.0, 1.0/4.0, 1.0/4.0, 1.0/8.0, 1.0/8.0, 1.0/16.0, 1.0/32768.0 };
static const REAL factortableB4[4] = { 0.0, 1.0/2.0, 1.0/4.0, 1.0/32768.0 };


static const REAL ctableA[16]=
{           0.0, 1.33333333333, 1.60000000000, 1.77777777777,
  1.06666666666, 1.03225806452, 1.01587301587, 1.00787401575,
  1.00392156863, 1.00195694716, 1.00097751711, 1.00048851979,
  1.00024420024, 1.00012208522, 1.00006103888, 1.00003051851};
static const REAL ctableB1[16]=
{           0.0, 1.33333333333, 1.14285714286, 1.06666666666,
  1.03225806452, 1.01587301587, 1.00787401575, 1.00392156863,
  1.00195694716, 1.00097751711, 1.00048851979, 1.00024420024,
  1.00012208522, 1.00006103888, 1.00003051851, 1.00001525902};
static const REAL ctableB2[16] =
{           0.0, 1.33333333333, 1.60000000000, 1.14285714286,
  1.77777777777, 1.06666666666, 1.03225806452, 1.01587301587,
  1.00787401575, 1.00392156863, 1.00195694716, 1.00097751711,
  1.00048851979, 1.00024420024, 1.00012208522, 1.00001525902};
static const REAL ctableB3[8] =
{           0.0, 1.33333333333, 1.60000000000, 1.14285714286,
  1.77777777777, 1.06666666666, 1.03225806452, 1.00001525902 };
static const REAL ctableB4[4] = 
{ 0.0, 1.33333333333, 1.60000000000, 1.00001525902 };


static const REAL dtableA[16]=
{           0.0, 0.50000000000, 0.50000000000, 0.50000000000,
  0.12500000000, 0.06250000000, 0.03125000000, 0.01562500000,
  0.00781250000, 0.00390625000, 0.00195312500, 0.00097656250,
  0.00048828125, 0.00024414063, 0.00012207031, 0.00006103516};

static const REAL dtableB1[16]=
{           0.0, 0.50000000000, 0.25000000000, 0.12500000000,
  0.06250000000, 0.03125000000, 0.01562500000, 0.00781250000,
  0.00390625000, 0.00195312500, 0.00097656250, 0.00048828125,
  0.00024414063, 0.00012207031, 0.00006103516, 0.00003051758};

static const REAL dtableB2[16]=
{ 0.0,           0.50000000000, 0.50000000000, 0.25000000000,
  0.50000000000, 0.12500000000, 0.06250000000, 0.03125000000,
  0.01562500000, 0.00781250000, 0.00390625000, 0.00195312500,
  0.00097656250, 0.00048828125, 0.00024414063, 0.00003051758};

static const REAL dtableB3[8]=
{           0.0, 0.50000000000, 0.50000000000, 0.25000000000,
  0.50000000000, 0.12500000000, 0.06250000000, 0.00003051758};

static const REAL dtableB4[4]=
{0.0, 0.50000000000, 0.50000000000, 0.00003051758};






#endif
