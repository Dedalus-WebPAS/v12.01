.
. MRTAUHIO    
. --------
. Filename     : mrtauhaf.dat
.
RSMRAUH1  RESET     KEY34                                                       
          READ      MRTAUHA1,KEY34;;                                            
          RETURN
.
RAMRAUH1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUHA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUH1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUHA1,KEY34;MRAHVISN,MRAHEPSN,MRAHADTE,MRAHDATE,MRAHTIME:
                                   MRAHUSER,MRAHODRG,MRAHOWIE,MRAHNDRG,MRAHNWIE:
                                   MRAHDWIE,MRAHCLNC,MRAHTYPE,MRAHRCHG,MRAHNCHG:
                                   MRAHCOMM,MRAHCDTE,MRAHCTIM,MRAHCUSR,MRAHCDSC:
                                   MRAHUDTE,MRAHUTIM,MRAHUUSR,MRAHUDSC,MRAHODOL:
                                   MRAHNDOL,MRAHDIFD,MRAHDDNR,MRAHOHCP,MRAHOCOF:
                                   MRAHODAT,MRAHPSTS,MRAHNSTS,MRAHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUH1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUHA1;MRAHVISN,MRAHEPSN,MRAHADTE,MRAHDATE,MRAHTIME:      
                             MRAHUSER,MRAHODRG,MRAHOWIE,MRAHNDRG,MRAHNWIE:      
                             MRAHDWIE,MRAHCLNC,MRAHTYPE,MRAHRCHG,MRAHNCHG:      
                             MRAHCOMM,MRAHCDTE,MRAHCTIM,MRAHCUSR,MRAHCDSC:      
                             MRAHUDTE,MRAHUTIM,MRAHUUSR,MRAHUDSC,MRAHODOL:      
                             MRAHNDOL,MRAHDIFD,MRAHDDNR,MRAHOHCP,MRAHOCOF:      
                             MRAHODAT,MRAHPSTS,MRAHNSTS,MRAHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUH1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUHA1;MRAHVISN,MRAHEPSN,MRAHADTE,MRAHDATE,MRAHTIME:      
                             MRAHUSER,MRAHODRG,MRAHOWIE,MRAHNDRG,MRAHNWIE:      
                             MRAHDWIE,MRAHCLNC,MRAHTYPE,MRAHRCHG,MRAHNCHG:      
                             MRAHCOMM,MRAHCDTE,MRAHCTIM,MRAHCUSR,MRAHCDSC:      
                             MRAHUDTE,MRAHUTIM,MRAHUUSR,MRAHUDSC,MRAHODOL:      
                             MRAHNDOL,MRAHDIFD,MRAHDDNR,MRAHOHCP,MRAHOCOF:      
                             MRAHODAT,MRAHPSTS,MRAHNSTS,MRAHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUHA1;MRAHVISN,MRAHEPSN,MRAHADTE,MRAHDATE,MRAHTIME:      
                             MRAHUSER,MRAHODRG,MRAHOWIE,MRAHNDRG,MRAHNWIE:      
                             MRAHDWIE,MRAHCLNC,MRAHTYPE,MRAHRCHG,MRAHNCHG:      
                             MRAHCOMM,MRAHCDTE,MRAHCTIM,MRAHCUSR,MRAHCDSC:      
                             MRAHUDTE,MRAHUTIM,MRAHUUSR,MRAHUDSC,MRAHODOL:      
                             MRAHNDOL,MRAHDIFD,MRAHDDNR,MRAHOHCP,MRAHOCOF:      
                             MRAHODAT,MRAHPSTS,MRAHNSTS,MRAHSPAR                
          RETURN
.
WRMRAUH1  RESET     KEY34                                                       
          WRITE     MRTAUHA1,KEY34;MRAHVISN,MRAHEPSN,MRAHADTE,MRAHDATE,MRAHTIME:
                                   MRAHUSER,MRAHODRG,MRAHOWIE,MRAHNDRG,MRAHNWIE:
                                   MRAHDWIE,MRAHCLNC,MRAHTYPE,MRAHRCHG,MRAHNCHG:
                                   MRAHCOMM,MRAHCDTE,MRAHCTIM,MRAHCUSR,MRAHCDSC:
                                   MRAHUDTE,MRAHUTIM,MRAHUUSR,MRAHUDSC,MRAHODOL:
                                   MRAHNDOL,MRAHDIFD,MRAHDDNR,MRAHOHCP,MRAHOCOF:
                                   MRAHODAT,MRAHPSTS,MRAHNSTS,MRAHSPAR          
          RETURN
.
DEMRAUH1  RESET     KEY34                                                       
          DELETE    MRTAUHA1,KEY34                                              
          RETURN
.
