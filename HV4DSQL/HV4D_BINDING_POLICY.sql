DROP TABLE IF EXISTS HV4D_BINDING_POLICY;
CREATE TABLE HV4D_TABLE_BINDING_POLICY(
BINDING_POLICY_HVID HV4D_TYPE_HVID NOT NULL UNIQUE,
PRIMARY KEY(BINDING_POLICY_HVID));