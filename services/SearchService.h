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

// SearchService
// bnet.protocol.search.SearchService
//
// { FindMatches .bnet.protocol.search.FindMatchesRequest .bnet.protocol.search.FindMatchesResponse }
// { SetObject .bnet.protocol.search.SetObjectRequest .bnet.protocol.NO_RESPONSE }
// { RemoveObjects .bnet.protocol.search.RemoveObjectsRequest .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_SearchService
#define _hfile_SearchService

#include "rpc/service.h"
#include "service/search/search.pb.h"

#define SERVICE_SearchService_NAME "bnet.protocol.search.SearchService"

class CServiceSearchService :
public CService
{
public:
	CServiceSearchService();
	CServiceSearchService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_FindMatches_Request(TCPSocket *sock, apacket* packet);
	bool handle_FindMatches_Response(TCPSocket *sock, apacket* packet);

	bool handle_SetObject_Request(TCPSocket *sock, apacket* packet);

	bool handle_RemoveObjects_Request(TCPSocket *sock, apacket* packet);

	~CServiceSearchService(void);
};

#endif