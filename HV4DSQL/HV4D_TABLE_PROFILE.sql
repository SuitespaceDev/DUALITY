DROP TABLE IF EXISTS HV4D_TABLE_PROFILE;
CREATE TABLE HV4D_TABLE_PROFILE(
PROFILE_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PROFILE_MMM HV4D_TYPE_MMM NOT NULL UNIQUE,
PROFILE_PROFILE HV4D_TYPE_MAXPATH NOT NULL,
PROFILE_CREATED HV4D_TYPE_DATETIME NOT NULL,
PROFILE_UPDATED HV4D_TYPE_DATETIME NOT NULL,
PROFILE_ADMIN HV4D_TYPE_MAXPATH NOT NULL,
PROFILE_ADDRESS_ONE HV4D_TYPE_MAXPATH,
PROFILE_ADDRESS_TWO HV4D_TYPE_MAXPATH,
PROFILE_CITY HV4D_TYPE_MAXPATH,
PROFILE_REGION HV4D_TYPE_MAXPATH,
PROFILE_POSTAL_CODE HV4D_TYPE_MAXPATH,
PROFILE_EMAIL HV4D_TYPE_MAXPATH NOT NULL,
PROFILE_PRIMARY_PHONE HV4D_TYPE_PHONE NOT NULL,
PROFILE_SECONDARY_PHONE HV4D_TYPE_PHONE,
PRIMARY KEY(PROFILE_HVID));