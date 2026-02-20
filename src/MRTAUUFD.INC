. V12.01.02 13/02/2026 TT C-0953127 Updated fields and indexes                  
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
. * Index Values  :   KEY20   KEY28   KEY23                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTAUUA1   IFILE    SQL, FIXED=396, KEY="U1-8,9-16,17-20"
MRTAUUA2   IFILE    SQL, FIXED=396, KEY="U21-28,1-8,9-16,17-20"
MRTAUUA3   IFILE    SQL, FIXED=396, KEY="U1-8,9-16,233-235,17-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRAUCDTE  DIM       8      8        1     Date Record Created (CCYYMMDD)     
MRAUCTIM  DIM       8      8        9     Time Record Created (hh:mm:ss)     
MRAULINE  DIM       4      4        17    Line Number                        
MRAUVISN  DIM       8      8        21    Visit Number                       
MRAUADTE  DIM       8      8        29    Audit Date                         
MRAUODRG  DIM       4      4        37    Original DRG                       
MRAUOWIE  FORM      6.4    6        41    Original WIES                      
MRAUNDRG  DIM       4      4        47    New DRG                            
MRAUNWIE  FORM      6.4    6        51    New WIES                           
MRAUCLNC  DIM       10     10       57    Clinician                          
MRAUSTAT  DIM       3      3        67    Status Of Audit (CAT YJ)           
MRAUTYPE  DIM       3      3        70    Type Audit (CAT YA)                
MRAURCHG  DIM       3      3        73    Reason For Change (CAT YB)         
MRAUNCHG  DIM       1      1        76    No Change (Y/N)                    
MRAUCOMM  DIM       100    100      77    Comments                           
MRAUCUSR  DIM       10     10       177   Web User Id Created (websecaf)     
MRAUCDSC  DIM       30     30       187   User Created Description           
MRAUODOL  FORM      12.2   8        217   Original Dollar Value              
MRAUNDOL  FORM      12.2   8        225   New Dollar Value                   
MRAUUSTS  DIM       3      3        233   Upload Status                      
.                                         001=Uploaded Sucessfully             
.                                         003=Errors                           
MRAUEROR  DIM       80     80       236   Error                              
MRAURDET  DIM       80     80       316   Record Details                     
.
.End of Record                      396  
.
