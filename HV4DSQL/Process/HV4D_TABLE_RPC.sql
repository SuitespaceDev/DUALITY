DROP TABLE IF EXISTS HV4D_TABLE_RPC;
CREATE TABLE HV4D_TABLE_RPC(
RPC_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(RPC_HVID));