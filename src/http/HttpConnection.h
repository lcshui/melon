#ifndef _MELON_HTTP_CONNECTION_H
#define _MELON_HTTP_CONNECTION_H

#include "TcpConnection.h"
#include "Http.h"

namespace melon {
namespace http {
	
class HttpConnection {
public:
	typedef std::shared_ptr<HttpConnection> Ptr;
	explicit HttpConnection(TcpConnection::Ptr tcp_conn) :tcp_conn_(tcp_conn) {}
	HttpRequest::Ptr recvRequest();
	void sendResponse(HttpResponse::Ptr response);

private:
	TcpConnection::Ptr tcp_conn_;
};

}
}

#endif
