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

// FriendsService
// bnet.protocol.friends.FriendsService
//
// { SubscribeToFriends .bnet.protocol.friends.SubscribeToFriendsRequest .bnet.protocol.friends.SubscribeToFriendsResponse }
// { SendInvitation .bnet.protocol.invitation.SendInvitationRequest .bnet.protocol.invitation.SendInvitationResponse }
// { AcceptInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RevokeInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { DeclineInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { IgnoreInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RemoveFriend .bnet.protocol.friends.GenericFriendRequest .bnet.protocol.friends.GenericFriendResponse }
// { ViewFriends .bnet.protocol.friends.ViewFriendsRequest .bnet.protocol.friends.ViewFriendsResponse }
// { UpdateFriendState .bnet.protocol.friends.UpdateFriendStateRequest .bnet.protocol.friends.UpdateFriendStateResponse }
// { UnsubscribeToFriends .bnet.protocol.friends.UnsubscribeToFriendsRequest .bnet.protocol.NoData }


#include "FriendsService.h"

#include <iostream>

using namespace google::protobuf;


CServiceFriendsService::CServiceFriendsService()
{
	// place here any initialization (?)
}

CServiceFriendsService::CServiceFriendsService(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_FriendsService_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceFriendsService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::friends::SubscribeToFriendsRequest::default_instance().New(); }
			else { return ::bnet::protocol::friends::SubscribeToFriendsResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::invitation::SendInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::invitation::SendInvitationResponse::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::invitation::GenericRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::invitation::GenericRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 5:
			if (request) { return ::bnet::protocol::invitation::GenericRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 6:
			if (request) { return ::bnet::protocol::invitation::GenericRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 7:
			if (request) { return ::bnet::protocol::friends::GenericFriendRequest::default_instance().New(); }
			else { return ::bnet::protocol::friends::GenericFriendResponse::default_instance().New(); }
		case 8:
			if (request) { return ::bnet::protocol::friends::ViewFriendsRequest::default_instance().New(); }
			else { return ::bnet::protocol::friends::ViewFriendsResponse::default_instance().New(); }
		case 9:
			if (request) { return ::bnet::protocol::friends::UpdateFriendStateRequest::default_instance().New(); }
			else { return ::bnet::protocol::friends::UpdateFriendStateResponse::default_instance().New(); }
		case 10:
			if (request) { return ::bnet::protocol::friends::UnsubscribeToFriendsRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceFriendsService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_SubscribeToFriends_Request(sock, packet); }
			else {	return handle_SubscribeToFriends_Response(sock, packet); }
		case 2:
			if (request) { return handle_SendInvitation_Request(sock, packet); }
			else {	return handle_SendInvitation_Response(sock, packet); }
		case 3:
			if (request) { return handle_AcceptInvitation_Request(sock, packet); }
			else {	return handle_NoData_AcceptInvitation(sock, packet); }
		case 4:
			if (request) { return handle_RevokeInvitation_Request(sock, packet); }
			else {	return handle_NoData_RevokeInvitation(sock, packet); }
		case 5:
			if (request) { return handle_DeclineInvitation_Request(sock, packet); }
			else {	return handle_NoData_DeclineInvitation(sock, packet); }
		case 6:
			if (request) { return handle_IgnoreInvitation_Request(sock, packet); }
			else {	return handle_NoData_IgnoreInvitation(sock, packet); }
		case 7:
			if (request) { return handle_RemoveFriend_Request(sock, packet); }
			else {	return handle_RemoveFriend_Response(sock, packet); }
		case 8:
			if (request) { return handle_ViewFriends_Request(sock, packet); }
			else {	return handle_ViewFriends_Response(sock, packet); }
		case 9:
			if (request) { return handle_UpdateFriendState_Request(sock, packet); }
			else {	return handle_UpdateFriendState_Response(sock, packet); }
		case 10:
			if (request) { return handle_UnsubscribeToFriends_Request(sock, packet); }
			else {	return handle_NoData_UnsubscribeToFriends(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceFriendsService::handle_SubscribeToFriends_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::friends::SubscribeToFriendsRequest* request;
	::bnet::protocol::friends::SubscribeToFriendsResponse response;
	request = (::bnet::protocol::friends::SubscribeToFriendsRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFriendsService::handle_SubscribeToFriends_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::friends::SubscribeToFriendsResponse* response;
	response = (::bnet::protocol::friends::SubscribeToFriendsResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_SendInvitation_Request(TCPSocket *sock, apacket* packet)
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

bool CServiceFriendsService::handle_SendInvitation_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::invitation::SendInvitationResponse* response;
	response = (::bnet::protocol::invitation::SendInvitationResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_AcceptInvitation_Request(TCPSocket *sock, apacket* packet)
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


bool CServiceFriendsService::handle_NoData_AcceptInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_RevokeInvitation_Request(TCPSocket *sock, apacket* packet)
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


bool CServiceFriendsService::handle_NoData_RevokeInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_DeclineInvitation_Request(TCPSocket *sock, apacket* packet)
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


bool CServiceFriendsService::handle_NoData_DeclineInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_IgnoreInvitation_Request(TCPSocket *sock, apacket* packet)
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


bool CServiceFriendsService::handle_NoData_IgnoreInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_RemoveFriend_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::friends::GenericFriendRequest* request;
	::bnet::protocol::friends::GenericFriendResponse response;
	request = (::bnet::protocol::friends::GenericFriendRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFriendsService::handle_RemoveFriend_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::friends::GenericFriendResponse* response;
	response = (::bnet::protocol::friends::GenericFriendResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_ViewFriends_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::friends::ViewFriendsRequest* request;
	::bnet::protocol::friends::ViewFriendsResponse response;
	request = (::bnet::protocol::friends::ViewFriendsRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFriendsService::handle_ViewFriends_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::friends::ViewFriendsResponse* response;
	response = (::bnet::protocol::friends::ViewFriendsResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_UpdateFriendState_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::friends::UpdateFriendStateRequest* request;
	::bnet::protocol::friends::UpdateFriendStateResponse response;
	request = (::bnet::protocol::friends::UpdateFriendStateRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFriendsService::handle_UpdateFriendState_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::friends::UpdateFriendStateResponse* response;
	response = (::bnet::protocol::friends::UpdateFriendStateResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFriendsService::handle_UnsubscribeToFriends_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::friends::UnsubscribeToFriendsRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::friends::UnsubscribeToFriendsRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceFriendsService::handle_NoData_UnsubscribeToFriends(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}


CServiceFriendsService::~CServiceFriendsService(void)
{
	std::cout << "Bye from authserv.";
}

