#ifndef GLOBALS
#define GLOBALS
#include "structures.h"


using namespace std;
extern pthread_t spv,obc,eps,adcs,com,log,flp,bcn;
/////////////////////// queues for message passing //////////////////////
extern queue<message> SPV;
extern queue<message*> OBC;
extern queue<message> EPS;
extern queue<message> ADCS;
extern queue<message> COM;
extern queue<message> LOG;
extern queue<message> FLP;
extern queue<message> BCN;
//extern map<string , rec_sen> rec_sen_map;     try Switch case again

///////////////////////////////////////////////////////////////////////////////////////////
#endif
