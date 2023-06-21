// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef CS_TDR_P_H
#define CS_TDR_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/private/qglobal_p.h>

#ifdef Q_OS_WIN

#include <qt_windows.h>

#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions:
//
// cbuffer ConstantBuffer
// {
//
//   uint zero;                         // Offset:    0 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// uav                                   UAV    uint         buf             u0      1
// ConstantBuffer                    cbuffer      NA          NA            cb0      1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_uav_typed_buffer (uint,uint,uint,uint) u0
dcl_input vThreadID.x
dcl_thread_group 256, 1, 1
loop
  breakc_nz cb0[0].x
  store_uav_typed u0.xyzw, vThreadID.xxxx, cb0[0].xxxx
endloop
ret
// Approximately 5 instruction slots used
#endif

const BYTE g_killDeviceByTimingOut[] =
{
     68,  88,  66,  67, 217,  62,
    220,  38, 136,  51,  86, 245,
    161,  96,  18,  35, 141,  17,
     26,  13,   1,   0,   0,   0,
    164,   2,   0,   0,   5,   0,
      0,   0,  52,   0,   0,   0,
    100,   1,   0,   0, 116,   1,
      0,   0, 132,   1,   0,   0,
      8,   2,   0,   0,  82,  68,
     69,  70,  40,   1,   0,   0,
      1,   0,   0,   0, 144,   0,
      0,   0,   2,   0,   0,   0,
     60,   0,   0,   0,   0,   5,
     83,  67,   0,   1,   0,   0,
      0,   1,   0,   0,  82,  68,
     49,  49,  60,   0,   0,   0,
     24,   0,   0,   0,  32,   0,
      0,   0,  40,   0,   0,   0,
     36,   0,   0,   0,  12,   0,
      0,   0,   0,   0,   0,   0,
    124,   0,   0,   0,   4,   0,
      0,   0,   4,   0,   0,   0,
      1,   0,   0,   0, 255, 255,
    255, 255,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,
      0,   0, 128,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,
      0,   0,   0,   0, 117,  97,
    118,   0,  67, 111, 110, 115,
    116,  97, 110, 116,  66, 117,
    102, 102, 101, 114,   0, 171,
    128,   0,   0,   0,   1,   0,
      0,   0, 168,   0,   0,   0,
     16,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
    208,   0,   0,   0,   0,   0,
      0,   0,   4,   0,   0,   0,
      2,   0,   0,   0, 220,   0,
      0,   0,   0,   0,   0,   0,
    255, 255, 255, 255,   0,   0,
      0,   0, 255, 255, 255, 255,
      0,   0,   0,   0, 122, 101,
    114, 111,   0, 100, 119, 111,
    114, 100,   0, 171,   0,   0,
     19,   0,   1,   0,   1,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
    213,   0,   0,   0,  77, 105,
     99, 114, 111, 115, 111, 102,
    116,  32,  40,  82,  41,  32,
     72,  76,  83,  76,  32,  83,
    104,  97, 100, 101, 114,  32,
     67, 111, 109, 112, 105, 108,
    101, 114,  32,  49,  48,  46,
     49,   0,  73,  83,  71,  78,
      8,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   0,   0,
     79,  83,  71,  78,   8,   0,
      0,   0,   0,   0,   0,   0,
      8,   0,   0,   0,  83,  72,
     69,  88, 124,   0,   0,   0,
     80,   0,   5,   0,  31,   0,
      0,   0, 106,   8,   0,   1,
     89,   0,   0,   4,  70, 142,
     32,   0,   0,   0,   0,   0,
      1,   0,   0,   0, 156,   8,
      0,   4,   0, 224,  17,   0,
      0,   0,   0,   0,  68,  68,
      0,   0,  95,   0,   0,   2,
     18,   0,   2,   0, 155,   0,
      0,   4,   0,   1,   0,   0,
      1,   0,   0,   0,   1,   0,
      0,   0,  48,   0,   0,   1,
      3,   0,   4,   4,  10, 128,
     32,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 164,   0,
      0,   7, 242, 224,  17,   0,
      0,   0,   0,   0,   6,   0,
      2,   0,   6, 128,  32,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,  22,   0,   0,   1,
     62,   0,   0,   1,  83,  84,
     65,  84, 148,   0,   0,   0,
      5,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      1,   0,   0,   0
};

#endif // Q_OS_WIN

#endif // CS_TDR_P_H