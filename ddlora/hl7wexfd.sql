create table hl7wexaf
(
  dhlwxmsg    varchar2(20) default ' ' not null,
  wmurno      varchar2(8) default ' ' not null,
  wmcode      varchar2(9) default ' ' not null,
  wmdesc      varchar2(80) default ' ' not null,
  wmdate1     varchar2(8) default ' ' not null,
  wmdate2     varchar2(8) default ' ' not null,
  wmbook      varchar2(8) default ' ' not null,
  wmdate4     varchar2(8) default ' ' not null,
  wmremove    varchar2(3) default ' ' not null,
  hlwxspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7wexa1 primary key( 
dhlwxmsg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
