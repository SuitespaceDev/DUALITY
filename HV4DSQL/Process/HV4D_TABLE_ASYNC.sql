DROP TABLE IF EXISTS HV4D_TABLE_ASYNC;
CREATE TABLE HV4D_TABLE_ASYNC(
ASYNC_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(ASYNC_HVID));