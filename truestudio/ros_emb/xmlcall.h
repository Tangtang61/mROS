#ifndef _XMLCALL_H_
#define _XMLCALL_H_


#include <string>
#include <c++/5.3.1/iostream>
#include <stdint.h>
#include <stdio.h>
#include <c++/5.3.1/vector>

using namespace std;

//master API
/*
@param
    id => caller_id(caller name)
    srv => service name
    s_uri => service URI
    c_uri => caller URI
    topic => topic name
    type => topic type
*/
string  unregisterService(string id,string srv,string s_uri,string c_uri);
string  registerService(string id,string srv,string s_uri);
string  unregisterSubscriber(string id,string topic,string c_uri);
string  registerSubscriber(string id,string topic,string type,string c_uri);
string  unregisterPublisher(string id,string topic,string c_uri);
string  registerPublisher(string id,string topic,string type,string c_uri);

//slave API response make
/*
@param
    prt => communication protocol
            TCP?[[str,!XMLRPCLeagalValue*]]
*/
string  requestTopic(string id,string topic,string prt);
//現状prt = "TCPROS"のみを考える．引数も特になし

//local function
string  makexmlcall(string name,vector<string> params,int pnum); 


#endif