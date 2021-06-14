//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rnd_cmd_vel.cpp
//
// Code generated for Simulink model 'rnd_cmd_vel'.
//
// Model version                  : 1.8
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jun 13 02:55:24 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "rnd_cmd_vel.h"
#include "rnd_cmd_vel_private.h"

// Block signals (default storage)
B_rnd_cmd_vel_T rnd_cmd_vel_B;

// Block states (default storage)
DW_rnd_cmd_vel_T rnd_cmd_vel_DW;

// Real-time model
RT_MODEL_rnd_cmd_vel_T rnd_cmd_vel_M_ = RT_MODEL_rnd_cmd_vel_T();
RT_MODEL_rnd_cmd_vel_T *const rnd_cmd_vel_M = &rnd_cmd_vel_M_;

// Model step function
void rnd_cmd_vel_step(void)
{
  SL_Bus_rnd_cmd_vel_geometry_msgs_Twist rtb_BusAssignment;
  real_T rtb_y;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S5>/In1'

  b_varargout_1 = Sub_rnd_cmd_vel_1.getLatestMessage(&rtb_BusAssignment);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (b_varargout_1) {
    rnd_cmd_vel_B.In1 = rtb_BusAssignment;
  }

  // End of MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/MATLAB Function'
  if (rnd_cmd_vel_B.In1.Linear.X == 0.0) {
    rtb_y = ceil((rnd_cmd_vel_B.In1.Linear.X + 1.0) / 5.0) * 5.0;
  } else {
    rtb_y = ceil(rnd_cmd_vel_B.In1.Linear.X / 5.0) * 5.0;
  }

  // End of MATLAB Function: '<Root>/MATLAB Function'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  rtb_BusAssignment = rnd_cmd_vel_P.Constant_Value;
  rtb_BusAssignment.Linear.X = rtb_y;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_rnd_cmd_vel_4.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void rnd_cmd_vel_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_0[12];
    char_T b_zeroDelimTopic[8];
    static const char_T tmp[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[11] = { 'r', 'n', 'd', '_', 'c', 'm', 'd', '_',
      'v', 'e', 'l' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S5>/Out1' incorporates:
    //   Inport: '<S5>/In1'

    rnd_cmd_vel_B.In1 = rnd_cmd_vel_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    rnd_cmd_vel_DW.obj_n.matlabCodegenIsDeleted = false;
    rnd_cmd_vel_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_rnd_cmd_vel_1.createSubscriber(&b_zeroDelimTopic[0], 1);
    rnd_cmd_vel_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    rnd_cmd_vel_DW.obj.matlabCodegenIsDeleted = false;
    rnd_cmd_vel_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[11] = '\x00';
    Pub_rnd_cmd_vel_4.createPublisher(&b_zeroDelimTopic_0[0], 1);
    rnd_cmd_vel_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void rnd_cmd_vel_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!rnd_cmd_vel_DW.obj_n.matlabCodegenIsDeleted) {
    rnd_cmd_vel_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!rnd_cmd_vel_DW.obj.matlabCodegenIsDeleted) {
    rnd_cmd_vel_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
