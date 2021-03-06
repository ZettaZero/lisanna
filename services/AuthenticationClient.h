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

// AuthenticationClient
// bnet.protocol.authentication.AuthenticationClient
//
// { ModuleLoad .bnet.protocol.authentication.ModuleLoadRequest .bnet.protocol.authentication.ModuleLoadResponse }
// { ModuleMessage .bnet.protocol.authentication.ModuleMessageRequest .bnet.protocol.NoData }


#ifndef _hfile_AuthenticationClient
#define _hfile_AuthenticationClient

#include "rpc/service.h"
#include "service/authentication/authentication.pb.h"

#define SERVICE_AuthenticationClient_NAME "bnet.protocol.authentication.AuthenticationClient"

class CServiceAuthenticationClient :
public CService
{
public:
	CServiceAuthenticationClient();
	CServiceAuthenticationClient(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_ModuleLoad_Request(TCPSocket *sock, apacket* packet);
	bool handle_ModuleLoad_Response(TCPSocket *sock, apacket* packet);

	bool handle_ModuleMessage_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ModuleMessage(TCPSocket *sock, apacket* packet);
	~CServiceAuthenticationClient(void);
};

#endif