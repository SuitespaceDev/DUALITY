DROP TABLE IF EXISTS HV4D_TABLE_PIPE;
CREATE TABLE HV4D_TABLE_PIPE(
PIPE_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(PIPE_HVID));