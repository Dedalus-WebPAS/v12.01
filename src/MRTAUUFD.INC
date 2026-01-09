. V12.01.01 10/12/2025 TT C-0953127 New Table For Coding Audit Upload Details   
. *----------------------------------------------------------------------
. * Include Name  :   MRTAUUFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Upload Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtauuaf.dat
. *
. * Index Values  :   KEY21                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTAUUA1   IFILE    SQL, FIXED=490, KEY="D1-8,9-10,11-18,323-325"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRAUVISN  DIM       8      8        1     Visit Number                       
MRAUEPSN  DIM       2      2        9     Episode Number                     
MRAUADTE  DIM       8      8        11    Audit Date                         
MRAUODRG  DIM       4      4        19    Original DRG                       
MRAUOWIE  FORM      6.4    6        23    Original WIES                      
MRAUNDRG  DIM       4      4        29    New DRG                            
MRAUNWIE  FORM      6.4    6        33    New WIES                           
MRAUDWIE  FORM      6.4    6        39    WIES Difference                    
MRAUCLNC  DIM       10     10       45    Clinician                          
MRAUSTAT  DIM       3      3        55    Status Of Audit (CAT YJ)           
MRAUTYPE  DIM       3      3        58    Type Audit (CAT YA)                
MRAURCHG  DIM       3      3        61    Reason For Change (CAT YB)         
MRAUNCHG  DIM       1      1        64    No Change (Y/N)                    
MRAUCOMM  DIM       100    100      65    Comments                           
MRAUCDTE  DIM       8      8        165   Date Record Created (CCYYMMDD)     
MRAUCTIM  DIM       8      8        173   Date Record Created (CCYYMMDD)     
MRAUCUSR  DIM       10     10       181   Web User Id Created (websecaf)     
MRAUCDSC  DIM       30     30       191   User Created Description           
MRAUUDTE  DIM       8      8        221   Date Record Updated (CCYYMMDD)     
MRAUUTIM  DIM       8      8        229   Time Record Updated (hh:mm:ss)     
MRAUUUSR  DIM       10     10       237   Web User Id Updated (websecaf)     
MRAUUDSC  DIM       30     30       247   User Updated Description           
MRAUODOL  FORM      12.2   8        277   Original Dollar Value              
MRAUNDOL  FORM      12.2   8        285   New Dollar Value                   
MRAUDIFD  FORM      12.2   8        293   Difference In Dollar Value         
MRAUDDNR  DIM       1      1        301   Doctor Did Not Respond             
.                                         0 or Blank=Not selected (not ticked) 
.                                         1=Selected (ticked)                  
MRAUOHCP  DIM       10     10       302   HCP Code                           
MRAUOCOF  DIM       3      3        312   Outcome of Change (Cat aO)         
MRAUODAT  DIM       8      8        315   Outcome Date                       
MRAUUSTS  DIM       3      3        323   Upload Status                      
.                                         001=Uploaded Sucessfully             
.                                         003=Errors                           
MRAULINE  DIM       4      4        326   Line Number                        
MRAUEROR  DIM       80     80       330   Error                              
MRAURDET  DIM       80     80       410   Record Details                     
.
.End of Record                      490  
.
