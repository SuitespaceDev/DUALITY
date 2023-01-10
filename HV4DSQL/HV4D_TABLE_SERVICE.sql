DROP TABLE IF EXISTS HV4D_TABLE_SERVICE;
CREATE TABLE HV4D_TABLE_SERVICE(
SERVICE_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
SERVICE_MMM HV4D_TYPE_MMM NOT NULL UNIQUE,
SERVICE_TAG HV4D_TYPE_MAXPATH NOT NULL,
SERVICE_COMPILED HV4D_TYPE_DATETIME NOT NULL,
SERVICE_INSTALLED HV4D_TYPE_DATETIME NOT NULL,
SERVICE_UPDATED HV4D_TYPE_DATETIME NOT NULL,
SERVICE_DLL_PATH HV4D_TYPE_MAXPATH NOT NULL,
SERVICE_DLL HV4D_TYPE_MAXPATH NOT NULL,
SERVICE_NAMESPACE HV4D_TYPE_MAXPATH NOT NULL,
SERVICE_RUNTIME_CLASS HV4D_TYPE_MAXPATH NOT NULL,
SERVICE_SUPPORTED_CONTRACT HV4D_TYPE_HVID[] NOT NULL,
SERVICE_ACCESS_LVL HV4D_TYPE_MAXPATH NOT NULL,
PRIMARY KEY(SERVICE_HVID));