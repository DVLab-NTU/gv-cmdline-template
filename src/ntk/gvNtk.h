/****************************************************************************
  FileName     [ gvNtk.h ]
  PackageName  [ gv/src/ntk ]
  Synopsis     [ GV Network ]
  Author       [ ]
  Copyright    [ ]
>>>>>>> e49dc0e73d18f38a26c685cf95dad078bf400c08
****************************************************************************/

#ifndef GV_NTK_H
#define GV_NTK_H
#include "kernel/yosys.h"
#include "gvAbcMgr.h"

USING_YOSYS_NAMESPACE
 
//----------------------------------------------------------------------
// GV Ntk Defines
//----------------------------------------------------------------------



//----------------------------------------------------------------------
// Forward Declarations
//----------------------------------------------------------------------
class GVRTLDesign;
class GVABCDesign;


//----------------------------------------------------------------------
// Global Variables
//----------------------------------------------------------------------
GVRTLDesign *gvRTLDesign;
GVABCDesign *gvABCDesign;


//----------------------------------------------------------------------
// Data Structure : yosys
//----------------------------------------------------------------------
class GVRTLDesign
{
   public : 
      // Constructors for GV RTL Design Instance
      GVRTLDesign() {}
      ~GVRTLDesign();

      // Ntk Reference Functions
      RTLIL::Design* getDesign() { return yosys_design; }

      // Ntk I/O Functions
      
   private : 

};

//----------------------------------------------------------------------
// Data Structure : abc
//----------------------------------------------------------------------
class GVABCDesign
{
   public : 
      // Constructors for abc Design Instance
      GVABCDesign() {}
      ~GVABCDesign();

      // Ntk Reference Functions
      AbcMgr* getAbcMgr() { return abcMgr; }

      // Ntk I/O Functions
      
   private : 

};

//----------------------------------------------------------------------
// Inline Functions
//----------------------------------------------------------------------

#endif

