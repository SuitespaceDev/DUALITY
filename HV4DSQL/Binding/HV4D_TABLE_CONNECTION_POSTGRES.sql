SET search_path=hv4d_schema_machine_001;
DROP TABLE IF EXISTS HV4D_TABLE_CONNECTION_POSTGRES;
CREATE TABLE HV4D_TABLE_CONNECTION_POSTGRES(
CONNECTION_POSTGRES_HVID HV4D_TYPE_HVID PRIMARY KEY,
CONNECTION_POSTGRES_TAG HV4D_TYPE_MAXPATH NOT NULL UNIQUE,
CONNECTION_POSTGRES_ACCESS_LVL HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_HOST HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_HOST_ADDRESS_IPV4 HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_HOST_ADDRESS_IPV6 HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_PORT HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_DATABASE_NAME HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_USER HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_PASSWORD HV4D_TYPE_MAXPATH NOT NULL,
CONNECTION_POSTGRES_PASSFILE_DIR HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_PASSFILE HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_CHANNEL_BINDING HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_CONNECT_TIMEOUT HV4D_TYPE_UINT,
CONNECTION_POSTGRES_CLIENT_ENCODING HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_OPTIONS HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_APPLICATION_NAME HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_FALLBACK_APPLICATION_NAME HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_KEEP_ALIVES HV4D_TYPE_UINT,
CONNECTION_POSTGRES_KEEP_ALIVES_IDLE HV4D_TYPE_UINT,
CONNECTION_POSTGRES_KEEP_ALIVES_INTERVAL HV4D_TYPE_UINT,
CONNECTION_POSTGRES_KEEP_ALIVES_COUNT HV4D_TYPE_UINT,
CONNECTION_POSTGRES_TCP_USER_TIMEOUT HV4D_TYPE_UINT,
CONNECTION_POSTGRES_REPLICATION HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_GSS_ENC_MODE HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_MODE HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_COMPRESSION HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_CERT_DIR HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_CERT HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_KEY_DIR HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_KEY HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_PASSWORD HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_ROOTCERT_DIR HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_ROOTCERT HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_CRL_DIR HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_CRL HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_SNI HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_REQUIRE_PEER HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_MIN_PROTOCOL_VERSION HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SSL_MAX_PROTOCOL_VERSION HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_KRB_SRV_NAME HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_GSS_LIB HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_SERVICE HV4D_TYPE_MAXPATH,
CONNECTION_POSTGRES_TARGET_SESSION_ATTRIBUTES HV4D_TYPE_MAXPATH,
CONSTRAINT HV4D_ENUM_ACCESS_LEVEL check(
	CONNECTION_POSTGRES_ACCESS_LVL in (
		'LEVEL_1_ACCESS', 
		'LEVEL_2_ACCESS',
		'LEVEL_3_ACCESS',
		'LEVEL_4_ACCESS')));
	
	