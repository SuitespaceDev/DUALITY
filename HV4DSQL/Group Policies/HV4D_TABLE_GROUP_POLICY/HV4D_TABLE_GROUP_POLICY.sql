SET search_path=hv4d_schema_public;
DROP TABLE IF EXISTS HV4D_TABLE_GROUP_POLICY;
CREATE TABLE HV4D_TABLE_GROUP_POLICY(
GROUP_POLICY_HVID HV4D_TYPE_HVID PRIMARY KEY,
GROUP_POLICY HV4D_TYPE_MAXPATH NOT NULL);