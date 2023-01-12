DROP TABLE IF EXISTS HV4D_TABLE_CONTACT;
CREATE TABLE HV4D_TABLE_CONTACT(
CONTACT_TAG HV4D_TYPE_MAXPATH,
CONTACT_HVID HV4D_TYPE_HVID,
CONTACT_ADDRESS_ONE HV4D_TYPE_MAXPATH,
CONTACT_ADDRESS_TWO HV4D_TYPE_MAXPATH,
CONTACT_CITY HV4D_TYPE_MAXPATH,
CONTACT_REGION HV4D_TYPE_MAXPATH,
CONTACT_POSTAL_CODE HV4D_TYPE_MAXPATH,
CONTACT_EMAIL HV4D_TYPE_MAXPATH NOT NULL,
CONTACT_PRIMARY_PHONE HV4D_TYPE_PHONE NOT NULL,
CONTACT_SECONDARY_PHONE HV4D_TYPE_PHONE,
PRIMARY KEY(CONTACT_HVID));