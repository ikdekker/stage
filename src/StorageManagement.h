#include "include/json.hpp"
#include "ConfigFactory.h"
#include "ModuleServer.h"
#include "src/DatabaseAdapter.h"
#include "src/MatrixControl.h"
#include "MatrixControl.h"
#include "src/ScannerReader.h"
#include "ExternalConnector.h"
#include "FakeExternalConnection.h"
#include "LabelDriver.h"
#include <list>

using namespace std;

class StorageManagement {
	public:
		StorageManagement();
		virtual ~StorageManagement();
		int findFreeSpot(int modId);
                void setDbAdapter(DatabaseAdapter* db);
                void setModuleServer(ModuleServer* mServer);
                void setMatrix(MatrixControl* mControl);
                ModuleServer* getServer();
                int addLicenseEmpty(bool, int);
                void printLicenseLocation(int index, string license, int modId);
                void run();
	private:
		ModuleServer *modules;
                DatabaseAdapter *dbAdapter;
                MatrixControl *matrix;
                ScannerReader *scanReader;
                LabelDriver *labelDriver;
                ExternalConnector *externalConnection;
                ExternalConnector *fakeIntDigo;
};

