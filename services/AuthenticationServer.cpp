/*
    This file is part of Lisana.

    Lisana is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Lisana is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Lisana.  If not, see <http://www.gnu.org/licenses/>.
*/

// AuthenticationServer
// bnet.protocol.authentication.AuthenticationServer
//
// { Logon .bnet.protocol.authentication.LogonRequest .bnet.protocol.authentication.LogonResponse }
// { ModuleMessage .bnet.protocol.authentication.ModuleMessageRequest .bnet.protocol.NoData }


#include "AuthenticationServer.h"

#include <iostream>

using namespace google::protobuf;


CServiceAuthenticationServer::CServiceAuthenticationServer()
{
	// place here any initialization (?)
}

CServiceAuthenticationServer::CServiceAuthenticationServer(CServiceMgr* owner=0,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash, serviceName)
{
	//what goes here now?
}

Message* CServiceAuthenticationServer::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::authentication::LogonRequest::default_instance().New(); }
			else { return ::bnet::protocol::authentication::LogonResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::authentication::ModuleMessageRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceAuthenticationServer::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_Logon_Request(sock, packet); }
			else {	return handle_Logon_Response(sock, packet); }
		case 2:
			if (request) { return handle_ModuleMessage_Request(sock, packet); }
			else {	return handle_NoData_ModuleMessage(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceAuthenticationServer::handle_Logon_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::authentication::LogonRequest* request;
	::bnet::protocol::authentication::LogonResponse response;
	request = (::bnet::protocol::authentication::LogonRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceAuthenticationServer::handle_Logon_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::authentication::LogonResponse* response;
	response = (::bnet::protocol::authentication::LogonResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceAuthenticationServer::handle_ModuleMessage_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::authentication::ModuleMessageRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::authentication::ModuleMessageRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceAuthenticationServer::handle_NoData_ModuleMessage(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}


CServiceAuthenticationServer::~CServiceAuthenticationServer(void)
{
	std::cout << "Bye from authserv.";
}

