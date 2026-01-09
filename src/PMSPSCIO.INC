.
. PMSPSCIO    
. --------
. Filename     : pmspscaf.dat
.
RSPMPSC1  RESET     KEY34                                                       
          READ      PMSPSCA1,KEY34;;                                            
          RETURN
.
RAPMPSC1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPSCA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPSC1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPSCA1,KEY34;PMPSCODE,PMPSATYP,PMPSHDIP,PMPSSRCD,PMPSACTV:
                                   PMPSSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPSC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPSCA1;PMPSCODE,PMPSATYP,PMPSHDIP,PMPSSRCD,PMPSACTV:      
                             PMPSSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPSC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPSCA1;PMPSCODE,PMPSATYP,PMPSHDIP,PMPSSRCD,PMPSACTV:      
                             PMPSSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPSC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPSCA1;PMPSCODE,PMPSATYP,PMPSHDIP,PMPSSRCD,PMPSACTV:      
                             PMPSSPAR                                           
          RETURN
.
WRPMPSC1  RESET     KEY34                                                       
          WRITE     PMSPSCA1,KEY34;PMPSCODE,PMPSATYP,PMPSHDIP,PMPSSRCD,PMPSACTV:
                                   PMPSSPAR                                     
          RETURN
.
DEPMPSC1  RESET     KEY34                                                       
          DELETE    PMSPSCA1,KEY34                                              
          RETURN
.
