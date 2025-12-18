create table hl7wexaf
(
  dhlwxmsg    char(20) default ' ' not null,
  wmurno      char(8) default ' ' not null,
  wmcode      char(9) default ' ' not null,
  wmdesc      char(80) default ' ' not null,
  wmdate1     char(8) default ' ' not null,
  wmdate2     char(8) default ' ' not null,
  wmbook      char(8) default ' ' not null,
  wmdate4     char(8) default ' ' not null,
  wmremove    char(3) default ' ' not null,
  hlwxspar    char(7) default ' ' not null,
  lf          char(1)
);
create unique index hl7wexa1 on hl7wexaf
(
dhlwxmsg
);
revoke all on hl7wexaf from public ; 
grant select on hl7wexaf to public ; 
