#ifndef CITRUSFRUIT_H
#define CIRUSFRUIT_H
#include <string>
class CitrusFruit{

 protected:

 float ph;

 public:

 CitrusFruit(float ph) : ph(ph){}

 const char * getName();

 float getPh();

 };
#endif