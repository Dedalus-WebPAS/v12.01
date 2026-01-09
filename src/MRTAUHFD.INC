. V12.01.01 08/12/2025 TT C-0953127 Coding Audit Status History                 
. *----------------------------------------------------------------------
. * Include Name  :   MRTAUHFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Status History        
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtauhaf.dat
. *
. * Index Values  :   KEY34                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTAUHA1   IFILE    SQL, FIXED=452, KEY="U1-8,9-10,11-18,19-26,27-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRAHVISN  DIM       8      8        1     Visit Number                       
MRAHEPSN  DIM       2      2        9     Episode Number                     
MRAHADTE  DIM       8      8        11    Audit Date                         
MRAHDATE  DIM       8      8        19    Date Of This HISTORY Record        
MRAHTIME  DIM       8      8        27    Time Of This HISTORY Record        
MRAHUSER  DIM       10     10       35    Web User HISTORY (websecaf)        
MRAHODRG  DIM       4      4        45    Original DRG                       
MRAHOWIE  FORM      6.4    6        49    Original WIES                      
MRAHNDRG  DIM       4      4        55    New DRG                            
MRAHNWIE  FORM      6.4    6        59    New WIES                           
MRAHDWIE  FORM      6.4    6        65    WIES Difference                    
MRAHCLNC  DIM       10     10       71    Clinician                          
MRAHTYPE  DIM       3      3        81    Type Audit (CAT YA)                
MRAHRCHG  DIM       3      3        84    Reason For Change (CAT YB)         
MRAHNCHG  DIM       1      1        87    No Change (Y/N)                    
MRAHCOMM  DIM       100    100      88    Comments                           
MRAHCDTE  DIM       8      8        188   Date Record Created (CCYYMMDD)     
MRAHCTIM  DIM       8      8        196   Time Record Created (hh:mm:ss)     
MRAHCUSR  DIM       10     10       204   Web User Id Created (websecaf)     
MRAHCDSC  DIM       30     30       214   User Created Description           
MRAHUDTE  DIM       8      8        244   Date Record Updated (CCYYMMDD)     
MRAHUTIM  DIM       8      8        252   Time Record Updated (hh:mm:ss)     
MRAHUUSR  DIM       10     10       260   Web User Id Updated (websecaf)     
MRAHUDSC  DIM       30     30       270   User Updated Description           
MRAHODOL  FORM      12.2   8        300   Original Dollar Value              
MRAHNDOL  FORM      12.2   8        308   New Dollar Value                   
MRAHDIFD  FORM      12.2   8        316   Difference In Dollar Value         
MRAHDDNR  DIM       1      1        324   Doctor Did Not Respond             
.                                         0 or Blank=Not selected (not ticked) 
.                                         1=Selected (ticked)                  
MRAHOHCP  DIM       10     10       325   HCP Code                           
MRAHOCOF  DIM       3      3        335   Outcome Of Change (Cat aO)         
MRAHODAT  DIM       8      8        338   Outcome Date                       
MRAHPSTS  DIM       3      3        346   Previous Status Of Audit (Cat YJ)  
MRAHNSTS  DIM       3      3        349   New Status Of Audit (Cat YJ)       
MRAHSPAR  DIM       100    100      352   Spare                              
.
.End of Record                      452  
.
