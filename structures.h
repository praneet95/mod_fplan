#ifndef STRUCTURES
#define STRUCTURES
using namespace std;
typedef struct message
{
	char sender[10];
	char receiver[10];
	int command;
	void * data;
}message;
#endif
//enum rec_sen
//{
//	OBC_,
//	EPS_,
//	ADCS_,
//	COM_,
//	FLP_,
//	LOG_,
//	SPV_,
//	BCN_
//};    try Switch case again
