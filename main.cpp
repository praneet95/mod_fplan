#include<stdio.h>
#include<iostream>
#include<string.h>
#include<unistd.h>
#include<queue>
#include "testheader.h"
#include "mailBox.h"
using namespace std;
int main()
{
	message *msg=(message*)malloc(sizeof(message)*1);
	msg->command = 10;
	char nm[5];
	//nm="OBC\0";
	send_message(&nm[0],msg);
	message *temp = OBC.front();
	OBC.pop();
}
