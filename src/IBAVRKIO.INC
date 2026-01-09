.
. IBAVRKIO    
. --------
. Filename     : ibavrkaf.dat
.
RSIBVRK1  RESET     KEY8                                                        
          READ      IBAVRKA1,KEY8;;                                             
          RETURN
.
RAIBVRK1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBAVRKA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBVRK1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBAVRKA1,KEY8;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBVRK1  MOVE      ZERO,OVRCD                                                  
          READKS    IBAVRKA1;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBVRK1  MOVE      ZERO,OVRCD                                                  
          READKP    IBAVRKA1;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBVRK1  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAVRKA1;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          RETURN
.
WRIBVRK1  RESET     KEY8                                                        
          WRITE     IBAVRKA1,KEY8;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR           
          RETURN
.
DEIBVRK1  RESET     KEY8                                                        
          DELETE    IBAVRKA1,KEY8                                               
          RETURN
.
RSIBVRK2  RESET     KEY33                                                       
          READ      IBAVRKA2,KEY33;;                                            
          RETURN
.
RAIBVRK2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      IBAVRKA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBVRK2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      IBAVRKA2,KEY33;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBVRK2  MOVE      ZERO,OVRCD                                                  
          READKS    IBAVRKA2;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBVRK2  MOVE      ZERO,OVRCD                                                  
          READKP    IBAVRKA2;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBVRK2  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAVRKA2;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR                
          RETURN
.
WRIBVRK2  RESET     KEY33                                                       
          WRITE     IBAVRKA2,KEY33;IBVKRTYP,IBVKRFNM,IBVKDESC,IBVKSPAR          
          RETURN
.
DEIBVRK2  RESET     KEY33                                                       
          DELETE    IBAVRKA2,KEY33                                              
          RETURN
.
