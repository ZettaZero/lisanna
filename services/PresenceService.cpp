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

// PresenceService
// bnet.protocol.presence.PresenceService
//
// { Subscribe .bnet.protocol.presence.SubscribeRequest .bnet.protocol.NoData }
// { Unsubscribe .bnet.protocol.presence.UnsubscribeRequest .bnet.protocol.NoData }
// { Update .bnet.protocol.presence.UpdateRequest .bnet.protocol.NoData }
// { Query .bnet.protocol.presence.QueryRequest .bnet.protocol.presence.QueryResponse }


#include "PresenceService.h"

#include <iostream>

using namespace google::protobuf;


CServicePresenceService::CServicePresenceService()
{
	// place here any initialization (?)
}

CServicePresenceService::CServicePresenceService(CServiceMgr* owner=0,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash, serviceName)
{
	//what goes here now?
}

Message* CServicePresenceService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::presence::SubscribeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::presence::UnsubscribeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::presence::UpdateRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::presence::QueryRequest::default_instance().New(); }
			else { return ::bnet::protocol::presence::QueryResponse::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServicePresenceService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_Subscribe_Request(sock, packet); }
			else {	return handle_NoData_Subscribe(sock, packet); }
		case 2:
			if (request) { return handle_Unsubscribe_Request(sock, packet); }
			else {	return handle_NoData_Unsubscribe(sock, packet); }
		case 3:
			if (request) { return handle_Update_Request(sock, packet); }
			else {	return handle_NoData_Update(sock, packet); }
		case 4:
			if (request) { return handle_Query_Request(sock, packet); }
			else {	return handle_Query_Response(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServicePresenceService::handle_Subscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::presence::SubscribeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::presence::SubscribeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServicePresenceService::handle_NoData_Subscribe(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServicePresenceService::handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::presence::UnsubscribeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::presence::UnsubscribeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServicePresenceService::handle_NoData_Unsubscribe(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServicePresenceService::handle_Update_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::presence::UpdateRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::presence::UpdateRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServicePresenceService::handle_NoData_Update(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServicePresenceService::handle_Query_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::presence::QueryRequest* request;
	::bnet::protocol::presence::QueryResponse response;
	request = (::bnet::protocol::presence::QueryRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServicePresenceService::handle_Query_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::presence::QueryResponse* response;
	response = (::bnet::protocol::presence::QueryResponse*) packet->msg;
	//do something...
	
	return true;
}


CServicePresenceService::~CServicePresenceService(void)
{
	std::cout << "Bye from authserv.";
}

