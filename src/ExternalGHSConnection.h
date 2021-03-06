/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExternalGHSConnection.h
 * Author: nick
 *
 * Created on December 14, 2016, 12:00 PM
 */

#ifndef EXTERNALGHSCONNECTION_H
#define EXTERNALGHSCONNECTION_H

#include "ExternalConnector.h"
#include "DatabaseAdapter.h"
#include "restclient-cpp/connection.h"
#include "restclient-cpp/restclient.h"

using json = nlohmann::json;

class ExternalGHSConnection : public ExternalConnector {
public:
    ExternalGHSConnection(DatabaseAdapter *db, string endpoint, string user, string pass, string key);
    virtual ~ExternalGHSConnection();
    orderData fetchOrderData(string order) override;
    productData fetchOrderProduct(string productId) override;
    orderData parseData(json j) override;
    bool fetchOrders();
    void addSkipEntry(string);
    void setSkips(vector<string> sVect) {idSkips = sVect;};
private:
    vector<string> idSkips;
    RestClient::Connection *conn;
    DatabaseAdapter *dbAdapter;
    string trim(string str);
};

#endif /* EXTERNALGHSCONNECTION_H */

