DROP TABLE IF EXISTS HV4D_TABLE_METRIC;
CREATE TABLE HV4D_TABLE_METRIC(
METRIC_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(METRIC_HVID));