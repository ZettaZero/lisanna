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

// ChannelInvitationService
// bnet.protocol.channel_invitation.ChannelInvitationService
//
// { Subscribe .bnet.protocol.channel_invitation.SubscribeRequest .bnet.protocol.channel_invitation.SubscribeResponse }
// { Unsubscribe .bnet.protocol.channel_invitation.UnsubscribeRequest .bnet.protocol.NoData }
// { SendInvitation .bnet.protocol.invitation.SendInvitationRequest .bnet.protocol.invitation.SendInvitationResponse }
// { AcceptInvitation .bnet.protocol.channel_invitation.AcceptInvitationRequest .bnet.protocol.channel_invitation.AcceptInvitationResponse }
// { DeclineInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RevokeInvitation .bnet.protocol.channel_invitation.RevokeInvitationRequest .bnet.protocol.NoData }
// { SuggestInvitation .bnet.protocol.channel_invitation.SuggestInvitationRequest .bnet.protocol.NoData }


#include "ChannelInvitationService.h"

#include <iostream>

using namespace google::protobuf;


CServiceChannelInvitationService::CServiceChannelInvitationService()
{
	// place here any initialization (?)
}

CServiceChannelInvitationService::CServiceChannelInvitationService(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_ChannelInvitationService_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceChannelInvitationService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::channel_invitation::SubscribeRequest::default_instance().New(); }
			else { return ::bnet::protocol::channel_invitation::SubscribeResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::channel_invitation::UnsubscribeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::invitation::SendInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::invitation::SendInvitationResponse::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::channel_invitation::AcceptInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::channel_invitation::AcceptInvitationResponse::default_instance().New(); }
		case 5:
			if (request) { return ::bnet::protocol::invitation::GenericRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 6:
			if (request) { return ::bnet::protocol::channel_invitation::RevokeInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 7:
			if (request) { return ::bnet::protocol::channel_invitation::SuggestInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceChannelInvitationService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_Subscribe_Request(sock, packet); }
			else {	return handle_Subscribe_Response(sock, packet); }
		case 2:
			if (request) { return handle_Unsubscribe_Request(sock, packet); }
			else {	return handle_NoData_Unsubscribe(sock, packet); }
		case 3:
			if (request) { return handle_SendInvitation_Request(sock, packet); }
			else {	return handle_SendInvitation_Response(sock, packet); }
		case 4:
			if (request) { return handle_AcceptInvitation_Request(sock, packet); }
			else {	return handle_AcceptInvitation_Response(sock, packet); }
		case 5:
			if (request) { return handle_DeclineInvitation_Request(sock, packet); }
			else {	return handle_NoData_DeclineInvitation(sock, packet); }
		case 6:
			if (request) { return handle_RevokeInvitation_Request(sock, packet); }
			else {	return handle_NoData_RevokeInvitation(sock, packet); }
		case 7:
			if (request) { return handle_SuggestInvitation_Request(sock, packet); }
			else {	return handle_NoData_SuggestInvitation(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceChannelInvitationService::handle_Subscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::SubscribeRequest* request;
	::bnet::protocol::channel_invitation::SubscribeResponse response;
	request = (::bnet::protocol::channel_invitation::SubscribeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_Subscribe_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::channel_invitation::SubscribeResponse* response;
	response = (::bnet::protocol::channel_invitation::SubscribeResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::UnsubscribeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::channel_invitation::UnsubscribeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceChannelInvitationService::handle_NoData_Unsubscribe(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_SendInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::invitation::SendInvitationRequest* request;
	::bnet::protocol::invitation::SendInvitationResponse response;
	request = (::bnet::protocol::invitation::SendInvitationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_SendInvitation_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::invitation::SendInvitationResponse* response;
	response = (::bnet::protocol::invitation::SendInvitationResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_AcceptInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::AcceptInvitationRequest* request;
	::bnet::protocol::channel_invitation::AcceptInvitationResponse response;
	request = (::bnet::protocol::channel_invitation::AcceptInvitationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_AcceptInvitation_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::channel_invitation::AcceptInvitationResponse* response;
	response = (::bnet::protocol::channel_invitation::AcceptInvitationResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_DeclineInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::invitation::GenericRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::invitation::GenericRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceChannelInvitationService::handle_NoData_DeclineInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_RevokeInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::RevokeInvitationRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::channel_invitation::RevokeInvitationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceChannelInvitationService::handle_NoData_RevokeInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceChannelInvitationService::handle_SuggestInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::SuggestInvitationRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::channel_invitation::SuggestInvitationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceChannelInvitationService::handle_NoData_SuggestInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}


CServiceChannelInvitationService::~CServiceChannelInvitationService(void)
{
	std::cout << "Bye from authserv.";
}

