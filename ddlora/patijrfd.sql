create table patijrnf
(
  ijinvno     varchar2(8) default ' ' not null,
  ijadmno     varchar2(8) default ' ' not null,
  dijbatch    varchar2(8) default ' ' not null,
  ijspare     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patijrn1 primary key( 
dijbatch,
ijinvno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
