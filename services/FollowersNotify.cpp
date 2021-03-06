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

// FollowersNotify
// bnet.protocol.followers.FollowersNotify
//
// { NotifyFollowerRemoved .bnet.protocol.followers.FollowerNotification .bnet.protocol.NO_RESPONSE }


#include "FollowersNotify.h"

#include <iostream>

using namespace google::protobuf;


CServiceFollowersNotify::CServiceFollowersNotify()
{
	// place here any initialization (?)
}

CServiceFollowersNotify::CServiceFollowersNotify(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_FollowersNotify_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceFollowersNotify::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::followers::FollowerNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceFollowersNotify::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_NotifyFollowerRemoved_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceFollowersNotify::handle_NotifyFollowerRemoved_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::followers::FollowerNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}



CServiceFollowersNotify::~CServiceFollowersNotify(void)
{
	std::cout << "Bye from authserv.";
}

