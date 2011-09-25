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

// StorageService
// bnet.protocol.storage.StorageService
//
// { Execute .bnet.protocol.storage.ExecuteRequest .bnet.protocol.storage.ExecuteResponse }
// { OpenTable .bnet.protocol.storage.OpenTableRequest .bnet.protocol.storage.OpenTableResponse }
// { OpenColumn .bnet.protocol.storage.OpenColumnRequest .bnet.protocol.storage.OpenColumnResponse }


#include "StorageService.h"

#include <iostream>

using namespace google::protobuf;


CServiceStorageService::CServiceStorageService()
{
	// place here any initialization (?)
}

CServiceStorageService::CServiceStorageService(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_StorageService_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceStorageService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::storage::ExecuteRequest::default_instance().New(); }
			else { return ::bnet::protocol::storage::ExecuteResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::storage::OpenTableRequest::default_instance().New(); }
			else { return ::bnet::protocol::storage::OpenTableResponse::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::storage::OpenColumnRequest::default_instance().New(); }
			else { return ::bnet::protocol::storage::OpenColumnResponse::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceStorageService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_Execute_Request(sock, packet); }
			else {	return handle_Execute_Response(sock, packet); }
		case 2:
			if (request) { return handle_OpenTable_Request(sock, packet); }
			else {	return handle_OpenTable_Response(sock, packet); }
		case 3:
			if (request) { return handle_OpenColumn_Request(sock, packet); }
			else {	return handle_OpenColumn_Response(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceStorageService::handle_Execute_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::storage::ExecuteRequest* request;
	::bnet::protocol::storage::ExecuteResponse response;
	request = (::bnet::protocol::storage::ExecuteRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceStorageService::handle_Execute_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::storage::ExecuteResponse* response;
	response = (::bnet::protocol::storage::ExecuteResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceStorageService::handle_OpenTable_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::storage::OpenTableRequest* request;
	::bnet::protocol::storage::OpenTableResponse response;
	request = (::bnet::protocol::storage::OpenTableRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceStorageService::handle_OpenTable_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::storage::OpenTableResponse* response;
	response = (::bnet::protocol::storage::OpenTableResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceStorageService::handle_OpenColumn_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::storage::OpenColumnRequest* request;
	::bnet::protocol::storage::OpenColumnResponse response;
	request = (::bnet::protocol::storage::OpenColumnRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceStorageService::handle_OpenColumn_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::storage::OpenColumnResponse* response;
	response = (::bnet::protocol::storage::OpenColumnResponse*) packet->msg;
	//do something...
	
	return true;
}


CServiceStorageService::~CServiceStorageService(void)
{
	std::cout << "Bye from authserv.";
}

