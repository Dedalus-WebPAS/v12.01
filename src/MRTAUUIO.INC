.
. MRTAUUIO    
. --------
. Filename     : mrtauuaf.dat
.
RSMRAUU1  RESET     KEY20                                                       
          READ      MRTAUUA1,KEY20;;                                            
          RETURN
.
RAMRAUU1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUU1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA1,KEY20;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUU1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUUA1;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUU1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUUA1;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUUA1;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          RETURN
.
WRMRAUU1  RESET     KEY20                                                       
          WRITE     MRTAUUA1,KEY20;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          RETURN
.
DEMRAUU1  RESET     KEY20                                                       
          DELETE    MRTAUUA1,KEY20                                              
          RETURN
.
RSMRAUU2  RESET     KEY28                                                       
          READ      MRTAUUA2,KEY28;;                                            
          RETURN
.
RAMRAUU2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUU2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA2,KEY28;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUU2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUUA2;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUU2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUUA2;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUU2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUUA2;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          RETURN
.
WRMRAUU2  RESET     KEY28                                                       
          WRITE     MRTAUUA2,KEY28;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          RETURN
.
DEMRAUU2  RESET     KEY28                                                       
          DELETE    MRTAUUA2,KEY28                                              
          RETURN
.
RSMRAUU3  RESET     KEY23                                                       
          READ      MRTAUUA3,KEY23;;                                            
          RETURN
.
RAMRAUU3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUU3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUUA3,KEY23;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUU3  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUUA3;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUU3  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUUA3;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUU3  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUUA3;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:      
                             MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:      
                             MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:      
                             MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:      
                             MRAUEROR,MRAURDET                                  
          RETURN
.
WRMRAUU3  RESET     KEY23                                                       
          WRITE     MRTAUUA3,KEY23;MRAUCDTE,MRAUCTIM,MRAULINE,MRAUVISN,MRAUADTE:
                                   MRAUODRG,MRAUOWIE,MRAUNDRG,MRAUNWIE,MRAUCLNC:
                                   MRAUSTAT,MRAUTYPE,MRAURCHG,MRAUNCHG,MRAUCOMM:
                                   MRAUCUSR,MRAUCDSC,MRAUODOL,MRAUNDOL,MRAUUSTS:
                                   MRAUEROR,MRAURDET                            
          RETURN
.
DEMRAUU3  RESET     KEY23                                                       
          DELETE    MRTAUUA3,KEY23                                              
          RETURN
.
