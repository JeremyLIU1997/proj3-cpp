// SurfStoreProxy.cc - xmlrpc-c C++ proxy class
// Auto-generated by xml-rpc-api2cpp.

#include <xmlrpc-c/oldcppwrapper.hpp>
#include "SurfStoreProxy.hpp"

bool SurfStoreProxy::ping () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.ping", params));
    return result.getBool();
}

XmlRpcValue /*base64*/ SurfStoreProxy::getblock (std::string const string1) {
    XmlRpcValue params(XmlRpcValue::makeArray());
    params.arrayAppendItem(XmlRpcValue::makeString(string1));
    XmlRpcValue result(this->mClient.call("surfstore.getblock", params));
    return result;
}

bool SurfStoreProxy::putblock (XmlRpcValue /*base64*/ base641) {
    XmlRpcValue params(XmlRpcValue::makeArray());
    params.arrayAppendItem(base641);
    XmlRpcValue result(this->mClient.call("surfstore.putblock", params));
    return result.getBool();
}

XmlRpcValue /*array*/ SurfStoreProxy::hasblocks (XmlRpcValue /*array*/ array1) {
    XmlRpcValue params(XmlRpcValue::makeArray());
    params.arrayAppendItem(array1);
    XmlRpcValue result(this->mClient.call("surfstore.hasblocks", params));
    return result;
}

XmlRpcValue /*struct*/ SurfStoreProxy::getfileinfomap () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.getfileinfomap", params));
    return result;
}

bool SurfStoreProxy::updatefile (XmlRpcValue /*struct*/ struct1) {
    XmlRpcValue params(XmlRpcValue::makeArray());
    params.arrayAppendItem(struct1);
    XmlRpcValue result(this->mClient.call("surfstore.updatefile", params));
    return result.getBool();
}

bool SurfStoreProxy::isleader () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.isleader", params));
    return result.getBool();
}

bool SurfStoreProxy::crash () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.crash", params));
    return result.getBool();
}

bool SurfStoreProxy::restore () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.restore", params));
    return result.getBool();
}

bool SurfStoreProxy::iscrashed () {
    XmlRpcValue params(XmlRpcValue::makeArray());
    XmlRpcValue result(this->mClient.call("surfstore.iscrashed", params));
    return result.getBool();
}
