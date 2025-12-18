create table patijrnf
(
  ijinvno     char(8) default ' ' not null,
  ijadmno     char(8) default ' ' not null,
  dijbatch    char(8) default ' ' not null,
  ijspare     char(12) default ' ' not null,
  lf          char(1)
);
create unique index patijrn1 on patijrnf
(
dijbatch,
ijinvno
);
revoke all on patijrnf from public ; 
grant select on patijrnf to public ; 
