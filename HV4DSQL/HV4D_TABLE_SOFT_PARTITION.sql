DROP TABLE IF EXISTS HV4D_TABLE_SOFT_PARTITION;
CREATE TABLE HV4D_TABLE_SOFT_PARTITION(
SOFT_PARTITION_HVID HV4D_TYPE_HVID,
SOFT_PARTITION_NAME HV4D_TYPE_MAXPATH,
SOFT_PARTITION_FORMAT HV4D_TYPE_MAXPATH,
SOFT_PARTITION_CREATED HV4D_TYPE_DATETIME,
SOFT_PARTITION_UPDATED HV4D_TYPE_DATETIME,
SOFT_PARTITION_OPENED HV4D_TYPE_DATETIME,
SOFT_PARTITION_HV4DVOL_OFF HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DVOL_SZ HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DSFT_OFF HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DSFT_SZ HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DMIR_OFF HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DMIR_SZ HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DATT_OFF HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DATT_SZ HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DBMP_OFF HV4D_TYPE_NUMERIC_U64,
SOFT_PARTITION_HV4DBMP_SZ HV4D_TYPE_NUMERIC_U64);