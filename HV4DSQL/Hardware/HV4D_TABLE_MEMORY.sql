DROP TABLE IF EXISTS HV4D_TABLE_MEMORY;
CREATE TABLE HV4D_TABLE_MEMORY(
MEMORY_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(MEMORY_HVID));