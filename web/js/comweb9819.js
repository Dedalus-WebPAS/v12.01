//jsVersion  : V12.01.00
//========================================================================
// Hospital level parameter options 
// Usage:                               
//
// ListItem.options[ListItem.options.length]=
// new Option("A","B|C|D|E|F|");
//
// A = Selection list option description
// B = 8 character parameter name
// C = Parameter type 0 - Text
//                    1 - Date
//                    2 - Time
//                    3 - HCP Code
//                    4 - Category/Code
//                    5 - Yes/No
//                    6 - Numeric
//                    7 - Day of Week
//                    8 - Selection List - Set options in Type8SelectionList()
// D = Parameter name text - B (Parameter Name)
// E = Category for paremeter type 4
// F = Default Value
//========================================================================
// Examples
//========================================================================
//  ListItem.options[ListItem.options.length]=
//  new Option("Text","TESTTEXT|0|Text Parameter||Default text|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Date","TESTDATE|1|Date Parameter||20201119|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Time","TESTTIME|2|Time Parameter||09:00:00|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("HCP","TESTHCPP|3|HCP Parameter||BLAA|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Category Code","TESTCATC|4|Cat CL Parameter|CL|T  |");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Yes/No","TESTYESN|5|Text Parameter||1|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Number","TESTNUMB|6|Numeric Parameter||99|");
//========================================================================
function AddParameters(ListItem) {
  ListItem.options[ListItem.options.length]=
  new Option("Using Auto Open Outpatient Clinics",
      "OTCNAUTC|5|Using Auto Open Outpatient Clinics - OTCNAUTC||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Auto Open Outpatient Clinics Default Number of Weeks",
      "OTCNAUTW|6|Auto Open Outpatient Clinics Default Number of Weeks - OTCNAUTW||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Display Confirmed Demographic / PMI Date in RED",
      "OTCFDRED|0|Display Confirmed Demographic / PMI Date in RED - OTCFDRED||Yes|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Number of days to check for Display Confirmed Demographics in RED",
      "OTCFDDAY|6|Number of days to check for Display Confirmed Demographics in RED - OTCFDDAY||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("ED in Hours Start Time",
      "EMSTRTIM|2|ED in Hours Start Time - EMSTRTIM||09:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("ED in Hours End Time",
      "EMENDTIM|2|ED in Hours End Time - EMENDTIM||17:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("ED In Hours Days",
      "EMWKDAYS|7|ED In Hours Days - EMWKDAYS|||");

  ListItem.options[ListItem.options.length]=
  new Option("Overdue Leave Highlight (mins)",
      "PTCNOLDR|6|Overdue Leave Highlight (mins) - PTCNOLDR||30|");

  ListItem.options[ListItem.options.length]=
  new Option("Preferred Discharge Time",
      "PTCNPDTM|2|Preferred Discharge Time - PTCNPDTM||09:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("Cash Drawer for Patient Portal Receipts (Code)",
      "PTCNPCDR|0|Cash Drawer Code for Patient Portal Receipts (Code)|||");

  ListItem.options[ListItem.options.length]=
  new Option("Calculate Invoice Pending Amount on Discharge (for A03 HL7)",
      "PTCNCIPA|5|Calculate Invoice Pending Amount on Discharge (for A03 HL7) - PTCNCIPA||0|");

 ListItem.options[ListItem.options.length]=
  new Option("Sending Estimated DOB Flag in ZXP.77",
      "PTCNEDOB|5|Sending Estimated DOB Flag in ZXP.77 - PTCNEDOB||0|");

 ListItem.options[ListItem.options.length]=
  new Option("Confirm Demographics on Admission",
      "PTCNCDOA|4|Confirm Demographcs on Admission - PTCNCDOA|de||");

 ListItem.options[ListItem.options.length]=
  new Option("Number of Days Confirmed Demographics in valid",
      "PTCNNDCD|6|Number of Days Confirmed Demographics is valid - PTCNNDCD||0|");

 ListItem.options[ListItem.options.length]=
  new Option("Sending ED Default Clinician and Specialty",
      "EMCNEDCL|5|Sending ED Default Clinician and Specialty - EMCNEDCL||0|");

 ListItem.options[ListItem.options.length]=
  new Option("ED Default Clinician",
      "EMCNDCLI|3|ED Default Clinician - EMCNDCLI||0|");

 ListItem.options[ListItem.options.length]=
  new Option("Using A4 Bulk Label Sheet Printing",
      "PTCNA4LB|5|Using A4 Bulk Label Sheet Printing - PTCNA4LB|||");

 ListItem.options[ListItem.options.length]=
  new Option("A4 Bulk Label Sheet Layout",
      "PTCNA4TM|8|A4 Bulk Label Sheet Layout - PTCNA4TM|||");
}
//========================================================================
// Set selection list options for type 8 parameters
// Usage:
//
// Add if Parameter = XXXXXXXX
//
// ListItem.options[ListItem.options.length]=
// new Option("A","B");
//
// A = Selection list option description
// B = Parameter value
//
//========================================================================
function Type8SelectionList(Parameter,ListItem,DefaultValue) {
  if(Parameter == "PTCNA4TM") {
    ListItem.options[ListItem.options.length]=
    new Option("LabelMax LM5148","452");
  }
//
  for (var i =0 ; i < ListItem.length; i++) {
  if (trim(ListItem.options[i].value)==trim(DefaultValue)) {
         ListItem.selectedIndex=i } };
}
