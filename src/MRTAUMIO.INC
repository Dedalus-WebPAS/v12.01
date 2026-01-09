.
. MRTAUMIO    
. --------
. Filename     : mrtaumaf.dat
.
RSMRAUM1  RESET     KEY30                                                       
          READ      MRTAUMA1,KEY30;;                                            
          RETURN
.
RAMRAUM1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUMA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUM1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUMA1,KEY30;MRAMVISN,MRAMEPSN,MRAMADTE,MRAMRTYP,MRAMNOTE:
                                   MRAMLINE,MRAMCOMM,MRAMACTV,MRAMCUSR,MRAMCDTE:
                                   MRAMCTIM,MRAMUUSR,MRAMUDTE,MRAMUTIM,MRAMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUM1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUMA1;MRAMVISN,MRAMEPSN,MRAMADTE,MRAMRTYP,MRAMNOTE:      
                             MRAMLINE,MRAMCOMM,MRAMACTV,MRAMCUSR,MRAMCDTE:      
                             MRAMCTIM,MRAMUUSR,MRAMUDTE,MRAMUTIM,MRAMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUM1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUMA1;MRAMVISN,MRAMEPSN,MRAMADTE,MRAMRTYP,MRAMNOTE:      
                             MRAMLINE,MRAMCOMM,MRAMACTV,MRAMCUSR,MRAMCDTE:      
                             MRAMCTIM,MRAMUUSR,MRAMUDTE,MRAMUTIM,MRAMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUMA1;MRAMVISN,MRAMEPSN,MRAMADTE,MRAMRTYP,MRAMNOTE:      
                             MRAMLINE,MRAMCOMM,MRAMACTV,MRAMCUSR,MRAMCDTE:      
                             MRAMCTIM,MRAMUUSR,MRAMUDTE,MRAMUTIM,MRAMSPAR       
          RETURN
.
WRMRAUM1  RESET     KEY30                                                       
          WRITE     MRTAUMA1,KEY30;MRAMVISN,MRAMEPSN,MRAMADTE,MRAMRTYP,MRAMNOTE:
                                   MRAMLINE,MRAMCOMM,MRAMACTV,MRAMCUSR,MRAMCDTE:
                                   MRAMCTIM,MRAMUUSR,MRAMUDTE,MRAMUTIM,MRAMSPAR 
          RETURN
.
DEMRAUM1  RESET     KEY30                                                       
          DELETE    MRTAUMA1,KEY30                                              
          RETURN
.
