#include<iostream>
#include<string.h>
#include<stdio.h>
#include<queue>
#include<pthread.h>
#include<map>
#include"globals.h"
using namespace std;
pthread_t spv,obc,eps,adcs,com,log,flp,bcn;
queue<message> SPV;
queue<message*> OBC;
queue<message> EPS;
queue<message> ADCS;
queue<message> COM;
queue<message> LOG;
queue<message> FLP;
queue<message> BCN;
//map<string , rec_sen> rec_sen_map;  try Switch case again


