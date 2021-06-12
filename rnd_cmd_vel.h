//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rnd_cmd_vel.h
//
// Code generated for Simulink model 'rnd_cmd_vel'.
//
// Model version                  : 1.9
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Fri Jun 11 19:08:14 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_rnd_cmd_vel_h_
#define RTW_HEADER_rnd_cmd_vel_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "rnd_cmd_vel_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_rnd_cmd_vel_T {
  SL_Bus_rnd_cmd_vel_geometry_msgs_Twist In1;// '<S5>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_rnd_cmd_vel_T {
  ros_slroscpp_internal_block_P_T obj; // '<S3>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S4>/SourceBlock'
};

// Parameters (default storage)
struct P_rnd_cmd_vel_T_ {
  SL_Bus_rnd_cmd_vel_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                           //  Referenced by: '<S1>/Constant'

  SL_Bus_rnd_cmd_vel_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                    //  Referenced by: '<S5>/Out1'

  SL_Bus_rnd_cmd_vel_geometry_msgs_Twist Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                             //  Referenced by: '<S4>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_rnd_cmd_vel_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_rnd_cmd_vel_T rnd_cmd_vel_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_rnd_cmd_vel_T rnd_cmd_vel_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_rnd_cmd_vel_T rnd_cmd_vel_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void rnd_cmd_vel_initialize(void);
  extern void rnd_cmd_vel_step(void);
  extern void rnd_cmd_vel_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_rnd_cmd_vel_T *const rnd_cmd_vel_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'rnd_cmd_vel'
//  '<S1>'   : 'rnd_cmd_vel/Blank Message'
//  '<S2>'   : 'rnd_cmd_vel/MATLAB Function'
//  '<S3>'   : 'rnd_cmd_vel/Publish'
//  '<S4>'   : 'rnd_cmd_vel/Subscribe'
//  '<S5>'   : 'rnd_cmd_vel/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_rnd_cmd_vel_h_

//
// File trailer for generated code.
//
// [EOF]
//
