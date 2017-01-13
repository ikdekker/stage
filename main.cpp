/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nick
 *
 * Created on October 19, 2016, 12:12 PM
 */

#include <cstdlib>

#include "src/StorageManagement.h"
#include "src/MatrixControl.h"
#include "src/DatabaseAdapter.h"
#include "src/ExternalConnector.h"
#include "src/FakeExternalConnection.h"
#include "src/ExternalGHSConnection.h"
#include "src/LabelDriver.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //normal routine
    StorageManagement *s = new StorageManagement();
    MatrixControl *a = new MatrixControl(s->getServer());
    s->setMatrix(a);
//DatabaseAdapter *db = new DatabaseAdapter("digo_parts_db", "digo_user", "such_secret_many_wow");
  //  ExternalGHSConnection *a = new ExternalGHSConnection(db);
//orderData od = a->fetchOrderData("0201295293");

  //         int     index = db->addOrder(0, od, 0);
 s->run();
    return 0;
}

