DROP TABLE IF EXISTS HV4D_TABLE_ACCOUNT;
CREATE TABLE HV4D_TABLE_ACCOUNT(
ACCOUNT_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
ACCOUNT_ID HV4D_TYPE_ID NOT NULL UNIQUE,
ACCOUNT_USER_NAME HV4D_TYPE_MAXPATH NOT NULL UNIQUE,
ACCOUNT_USER_ACCESS_LEVEL HV4D_TYPE_MAXPATH NOT NULL UNIQUE,
ACCOUNT_NAME HV4D_TYPE_MAXPATH NOT NULL,
ACCOUNT_CREATED HV4D_TYPE_DATETIME NOT NULL,
ACCOUNT_UPDATED HV4D_TYPE_DATETIME NOT NULL,
ACCOUNT_PASSWORD HV4D_TYPE_MAXPATH NOT NULL,
ACCOUNT_ADDRESS_ONE HV4D_TYPE_MAXPATH,
ACCOUNT_ADDRESS_TWO HV4D_TYPE_MAXPATH,
ACCOUNT_CITY HV4D_TYPE_MAXPATH,
ACCOUNT_REGION HV4D_TYPE_MAXPATH,
ACCOUNT_POSTAL_CODE HV4D_TYPE_MAXPATH,
ACCOUNT_EMAIL HV4D_TYPE_MAXPATH NOT NULL,
ACCOUNT_PRIMARY_PHONE HV4D_TYPE_PHONE NOT NULL,
ACCOUNT_SECONDARY_PHONE HV4D_TYPE_PHONE,
PRIMARY KEY(ACCOUNT_HVID));