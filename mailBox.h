#ifndef MAILBOX
#define MAILBOX
#include "globals.h"
#include <iostream>
#include <stdio.h>
#include <queue>
#include <pthread.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
//#include "mailBox.h"
using namespace std;
void send_message(char * receiver, message * msg);
void send_message(char * receiver, message *msg)
{
	message *temp = msg;
	if(!strcmp("OBC" , receiver))
		{
			OBC.push(temp);
			printf("Pushed");
			printf("%d",temp->command);
		}
}
#endif

