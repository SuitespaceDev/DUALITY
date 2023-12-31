SET search_path=hv4d_schema_public;
DROP TABLE IF EXISTS HV4D_TABLE_ACCOUNT;
CREATE TABLE HV4D_TABLE_ACCOUNT(
ACCOUNT_HVID HV4D_TYPE_HVID PRIMARY KEY,
ACCOUNT_ID HV4D_TYPE_ID NOT NULL UNIQUE,
ACCOUNT_USER_NAME HV4D_TYPE_MAXPATH NOT NULL UNIQUE,
ACCOUNT_ACCESS_LEVEL HV4D_TYPE_MAXPATH NOT NULL,
ACCOUNT_CREATED HV4D_TYPE_DATETIME NOT NULL,
ACCOUNT_UPDATED HV4D_TYPE_DATETIME NOT NULL,
ACCOUNT_PASSWORD HV4D_TYPE_MAXPATH NOT NULL,
ACCOUNT_CONTACT_HVID HV4D_TYPE_HVID NOT NULL,
CONSTRAINT HV4D_ENUM_ACCESS_LEVEL check(
	ACCOUNT_ACCESS_LEVEL in (
		'LEVEL_1_ACCESS', 
		'LEVEL_2_ACCESS',
		'LEVEL_3_ACCESS',
		'LEVEL_4_ACCESS')),
CONSTRAINT HV4D_FKEY_CONTACT
	FOREIGN KEY (ACCOUNT_CONTACT_HVID)
	REFERENCES hv4d_schema_public.HV4D_TABLE_CONTACT(CONTACT_HVID));