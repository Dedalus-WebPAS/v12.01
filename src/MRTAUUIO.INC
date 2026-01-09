.
. MRTAUUIO    
. --------
. Filename     : mrtauuaf.dat
.
RSMRAUU1  RESET     KEY21                                                       
          READ      MRTAUUA1,KEY21;;                                            
          RETURN
.
RAMRAUU1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUU1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA1,KEY21;MRAUVISN,MRAUEPSN,MRAUADTE,MRAUODRG,MRAUOWIE:
                                   MRAUNDRG,MRAUNWIE,MRAUDWIE,MRAUCLNC,MRAUSTAT:
                                   MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM,MRAUCDTE:
                                   MRAUCTIM,MRAUCUSR,MRAUCDSC,MRAUUDTE,MRAUUTIM:
                                   MRAUUUSR,MRAUUDSC,MRAUODOL,MRAUNDOL,MRAUDIFD:
                                   MRAUDDNR,MRAUOHCP,MRAUOCOF,MRAUODAT,MRAUUSTS:
                                   MRAULINE,MRAUEROR,MRAURDET                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUU1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUUA1;MRAUVISN,MRAUEPSN,MRAUADTE,MRAUODRG,MRAUOWIE:      
                             MRAUNDRG,MRAUNWIE,MRAUDWIE,MRAUCLNC,MRAUSTAT:      
                             MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM,MRAUCDTE:      
                             MRAUCTIM,MRAUCUSR,MRAUCDSC,MRAUUDTE,MRAUUTIM:      
                             MRAUUUSR,MRAUUDSC,MRAUODOL,MRAUNDOL,MRAUDIFD:      
                             MRAUDDNR,MRAUOHCP,MRAUOCOF,MRAUODAT,MRAUUSTS:      
                             MRAULINE,MRAUEROR,MRAURDET                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUU1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUUA1;MRAUVISN,MRAUEPSN,MRAUADTE,MRAUODRG,MRAUOWIE:      
                             MRAUNDRG,MRAUNWIE,MRAUDWIE,MRAUCLNC,MRAUSTAT:      
                             MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM,MRAUCDTE:      
                             MRAUCTIM,MRAUCUSR,MRAUCDSC,MRAUUDTE,MRAUUTIM:      
                             MRAUUUSR,MRAUUDSC,MRAUODOL,MRAUNDOL,MRAUDIFD:      
                             MRAUDDNR,MRAUOHCP,MRAUOCOF,MRAUODAT,MRAUUSTS:      
                             MRAULINE,MRAUEROR,MRAURDET                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUUA1;MRAUVISN,MRAUEPSN,MRAUADTE,MRAUODRG,MRAUOWIE:      
                             MRAUNDRG,MRAUNWIE,MRAUDWIE,MRAUCLNC,MRAUSTAT:      
                             MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM,MRAUCDTE:      
                             MRAUCTIM,MRAUCUSR,MRAUCDSC,MRAUUDTE,MRAUUTIM:      
                             MRAUUUSR,MRAUUDSC,MRAUODOL,MRAUNDOL,MRAUDIFD:      
                             MRAUDDNR,MRAUOHCP,MRAUOCOF,MRAUODAT,MRAUUSTS:      
                             MRAULINE,MRAUEROR,MRAURDET                         
          RETURN
.
WRMRAUU1  RESET     KEY21                                                       
          WRITE     MRTAUUA1,KEY21;MRAUVISN,MRAUEPSN,MRAUADTE,MRAUODRG,MRAUOWIE:
                                   MRAUNDRG,MRAUNWIE,MRAUDWIE,MRAUCLNC,MRAUSTAT:
                                   MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM,MRAUCDTE:
                                   MRAUCTIM,MRAUCUSR,MRAUCDSC,MRAUUDTE,MRAUUTIM:
                                   MRAUUUSR,MRAUUDSC,MRAUODOL,MRAUNDOL,MRAUDIFD:
                                   MRAUDDNR,MRAUOHCP,MRAUOCOF,MRAUODAT,MRAUUSTS:
                                   MRAULINE,MRAUEROR,MRAURDET                   
          RETURN
.
DEMRAUU1  RESET     KEY21                                                       
          DELETE    MRTAUUA1,KEY21                                              
          RETURN
.
