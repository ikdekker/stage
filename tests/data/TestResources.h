
/* 
 * File:   TestResources.h
 * Author: Gebruiker
 *
 * Created on October 25, 2016, 9:49 AM
 */

#ifndef TESTRESOURCES_H
#define TESTRESOURCES_H

#include "../../src/ConfigFactory.h"
#include <vector>
#include "../../include/json.hpp"
class TestResources {
public:

    static moduleData getModuleData(int tId, int tRows, int tCols, std::vector<int> tDis) {
        moduleData mData;
        mData.id = tId;
        mData.rows = tRows;
        mData.cols = tCols;
        mData.disabled = tDis;
        return mData;
    };
    static const json invalidJsonColsNeg() {
        return R"(
            {
                "id" : 0,
                "rows": 5,
                "columns": -11,
                "disableRows": "1,2"
            }
        )"_json;
    };
    static const json invalidJsonRowsNeg() {
        return R"(
            {
                "id" : 0,
                "rows": -5,
                "columns": 11,
                "disableRows": "1,2"
            }
        )"_json;
    };
    static const json invalidJsonColsZero() {
        return R"(
            {
                "id" : 0,
                "rows": 5,
                "columns": 0,
                "disableRows": ""
            }
        )"_json;
    };
    static const json invalidJsonRowsZero() {
        return R"(
            {
                "id" : 0,
                "rows": 0,
                "columns": 11,
                "disableRows": ""
            }
        )"_json;
    };
    static const json invalidJsonId() {
        return R"(
            {
                "id" : -4,
                "rows": 4,
                "columns": 11,
                "disableRows": ""
            }
        )"_json;
    };
private:

    TestResources() {
    }
};


#endif /* TESTRESOURCES_H */
