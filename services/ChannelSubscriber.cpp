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

// ChannelSubscriber
// bnet.protocol.channel.ChannelSubscriber
//
// { NotifyAdd .bnet.protocol.channel.AddNotification .bnet.protocol.NO_RESPONSE }
// { NotifyJoin .bnet.protocol.channel.JoinNotification .bnet.protocol.NO_RESPONSE }
// { NotifyRemove .bnet.protocol.channel.RemoveNotification .bnet.protocol.NO_RESPONSE }
// { NotifyLeave .bnet.protocol.channel.LeaveNotification .bnet.protocol.NO_RESPONSE }
// { NotifySendMessage .bnet.protocol.channel.SendMessageNotification .bnet.protocol.NO_RESPONSE }
// { NotifyUpdateChannelState .bnet.protocol.channel.UpdateChannelStateNotification .bnet.protocol.NO_RESPONSE }
// { NotifyUpdateMemberState .bnet.protocol.channel.UpdateMemberStateNotification .bnet.protocol.NO_RESPONSE }


#include "ChannelSubscriber.h"

#include <iostream>

using namespace google::protobuf;


CServiceChannelSubscriber::CServiceChannelSubscriber()
{
	// place here any initialization (?)
}

CServiceChannelSubscriber::CServiceChannelSubscriber(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_ChannelSubscriber_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceChannelSubscriber::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::channel::AddNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 2:
			if (request) { return ::bnet::protocol::channel::JoinNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 3:
			if (request) { return ::bnet::protocol::channel::RemoveNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 4:
			if (request) { return ::bnet::protocol::channel::LeaveNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 5:
			if (request) { return ::bnet::protocol::channel::SendMessageNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 6:
			if (request) { return ::bnet::protocol::channel::UpdateChannelStateNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 7:
			if (request) { return ::bnet::protocol::channel::UpdateMemberStateNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceChannelSubscriber::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_NotifyAdd_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 2:
			if (request) { return handle_NotifyJoin_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 3:
			if (request) { return handle_NotifyRemove_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 4:
			if (request) { return handle_NotifyLeave_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 5:
			if (request) { return handle_NotifySendMessage_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 6:
			if (request) { return handle_NotifyUpdateChannelState_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 7:
			if (request) { return handle_NotifyUpdateMemberState_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceChannelSubscriber::handle_NotifyAdd_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::AddNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifyJoin_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::JoinNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifyRemove_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::RemoveNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifyLeave_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::LeaveNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifySendMessage_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::SendMessageNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifyUpdateChannelState_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::UpdateChannelStateNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelSubscriber::handle_NotifyUpdateMemberState_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel::UpdateMemberStateNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}



CServiceChannelSubscriber::~CServiceChannelSubscriber(void)
{
	std::cout << "Bye from authserv.";
}

