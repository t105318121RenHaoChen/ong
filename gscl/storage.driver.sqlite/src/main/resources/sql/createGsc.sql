
-- THERE MUST BE A SEMICOLON AFTER EACH DML STATEMENT
 
-- DROP TABLE ATTRIBUTE;
-- DROP TABLE DOCUMENT;
-- DROP TABLE CONTEXT;
-- DROP TABLE VERSION;

CREATE TABLE VERSION (
    MAJOR character varying(2) NOT NULL,
    MINOR character varying(2) NOT NULL,
    PRIMARY KEY (MAJOR, MINOR)
);

INSERT INTO VERSION (MAJOR, MINOR) VALUES('03', '00');

-- No autoincrement in primary key to improve perfs: http://www.sqlite.org/autoinc.html
CREATE TABLE DOCUMENT (
    ID      INTEGER                   PRIMARY KEY,
    PATH    CHARACTER VARYING( 128 )  NOT NULL,
    NAME    CHARACTER VARYING( 32 )   NOT NULL,
    CONTENT BINARY( 4096 )
);

CREATE TABLE ATTRIBUTE (
    DOCUMENT_ID    INTEGER                  NOT NULL  REFERENCES DOCUMENT ( ID ),
    NAME           CHARACTER VARYING( 32 )  NOT NULL,
    STRING_VALUE   TEXT,
    INT_VALUE      INTEGER,
    DATE_VALUE     CHARACTER VARYING( 35 ),
    ATTRIBUTE_TYPE INTEGER                  NOT NULL
);

-- Index on document PATH + NAME
CREATE UNIQUE INDEX DOCUMENT_PATH_NAME_IDX ON DOCUMENT ( 
    PATH,
    NAME 
);

-- Index attribute DOCUMENT_ID foreign key
CREATE INDEX ATTRIBUTE_DOCUMENT_ID_IDX ON ATTRIBUTE ( 
    DOCUMENT_ID
);
