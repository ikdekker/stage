#include "StorageManagement.h"

#include <iostream>

using namespace std;
using json = nlohmann::json;


StorageManagement::StorageManagement() {
        ConfigFactory* config = new ConfigFactory();
        modules = new ModuleServer();
        json j = config->getModuleJson();

        for (auto it = j.begin(); it != j.end(); ++it) {
                modules->addModule(config->getModule(*it));
        }
//cout <<	modules->getModuleById(0)->getRows();

}





